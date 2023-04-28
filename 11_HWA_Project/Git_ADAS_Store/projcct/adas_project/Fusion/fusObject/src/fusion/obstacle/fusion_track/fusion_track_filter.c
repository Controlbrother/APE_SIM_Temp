#include <math.h>
#include "fusion_track_filter.h"
#include "fusion_track_logger.h"

//#define LOG_KF_FILTER

// transition matrix 6 * 6
Matrix F_ = {.rows = X_DIM,
             .cols = X_DIM,
             .data = {{1., 0., 0., 0., 0., 0.},
                      {0., 1., 0., 0., 0., 0.},
                      {0., 0., 1., 0., 0., 0.},
                      {0., 0., 0., 1., 0., 0.},
                      {0., 0., 0., 0., 1., 0.},
                      {0., 0., 0., 0., 0., 1.}}};

// measurement sensitivity matrix  6 * 6
const Matrix H_ = { .rows = X_DIM,
                          .cols = X_DIM,
                          .data = {{1., 0., 0., 0., 0., 0.},
                                   {0., 1., 0., 0., 0., 0.},
                                   {0., 0., 1., 0., 0., 0.},
                                   {0., 0., 0., 1., 0., 0.},
                                   {0., 0., 0., 0., 1., 0.},
                                   {0., 0., 0., 0., 0., 1.}} };

// process noise matrix 6 * 6
Matrix Q_ = {.rows = X_DIM, .cols = X_DIM, .data = {{0.}}};

// meansurement noise matrix camera 4 * 4, radar 6 * 6
Matrix R_ = {.rows = X_DIM, .cols = X_DIM, .data = {{0.}}};

// meansurement, camera 4 * 1, radar 6 * 1
Vector Z_ = {.rows = X_DIM, .cols = 1, .data = {{0.}}};

// Delta_Z, camera 4 * 1, radar 6 * 1
Vector Delta_Z_ = {.rows = X_DIM, .cols = 1, .data = {{0.}}};

// kalman gain camera 6*6, radar 6*6
Matrix K_ = {.rows = X_DIM, .cols = X_DIM, .data = {{0.}}};

// temp variables
Matrix sig_inverse_ = {.rows = X_DIM, .cols = X_DIM, .data = {{0.}}};
Matrix temp_ = { .rows = X_DIM, .cols = X_DIM, .data = {{0.}} };
Matrix temp2_ = { .rows = X_DIM, .cols = X_DIM, .data = {{0.}} };
Vector v_temp_ = { .rows = X_DIM, .cols = 1, .data = {{0.}} };

void init_kf_filter(FusionTrackKfData* pKfData)
{
    pKfData->inited = true;
    pKfData->x_prior.rows = X_DIM;
    pKfData->x_prior.cols = 1;
    pKfData->x_poster.rows = X_DIM;
    pKfData->x_poster.cols = 1;
    pKfData->p_prior.rows = X_DIM;
    pKfData->p_prior.cols = X_DIM;
    pKfData->p_poster.rows = X_DIM;
    pKfData->p_poster.cols = X_DIM;
}

void deinit_kf_filter(FusionTrackKfData* pKfData)
{
    memset(pKfData, 0, sizeof(FusionTrackKfData));
    pKfData->inited = false;
}

void init_fusion_track_filter(FusionTrack *track, ESensorType sensor_type, void* object)
{
    FusionTrackKfData* pKfData;
    const Point2F* pos;
    const Vector2F* vel;
    const Vector2F* accel;
    const Point2F* pos_std;
    const Vector2F* vel_std;
    const Vector2F* accel_std;

    if (SENSOR_CAMERA == sensor_type)
    {
        CameraObject* pObject = (CameraObject*)object;
        pKfData = &(track->camera_kf_data);
        pos = &(pObject->rel_pos);
        vel = &(pObject->rel_vel);
        accel = &(pObject->rel_accel);
        pos_std = &(pObject->rel_pos_std);
        vel_std = &(pObject->rel_vel_std);
        accel_std = &(pObject->rel_accel_std);
    }
    else
    {
        ERadarType radar_type = sensor_type2radar_type(sensor_type);
        RadarObject* pObject = (RadarObject*)object;
        pKfData = &(track->radar_kf_data[radar_type]);
        pos = &(pObject->rel_pos);
        vel = &(pObject->rel_vel);
        accel = &(pObject->rel_accel);
        pos_std = &(pObject->rel_pos_std);
        vel_std = &(pObject->rel_vel_std);
        accel_std = &(pObject->rel_accel_std);
    }

    init_kf_filter(pKfData);

    pKfData->x_poster.data[0][0] = pos->x;
    pKfData->x_poster.data[1][0] = pos->y;
    pKfData->x_poster.data[2][0] = vel->x;
    pKfData->x_poster.data[3][0] = vel->y;
    pKfData->x_poster.data[4][0] = accel->x;
    pKfData->x_poster.data[5][0] = accel->y;
    pKfData->x_prior.data[0][0] = pKfData->x_poster.data[0][0];
    pKfData->x_prior.data[1][0] = pKfData->x_poster.data[1][0];
    pKfData->x_prior.data[2][0] = pKfData->x_poster.data[2][0];
    pKfData->x_prior.data[3][0] = pKfData->x_poster.data[3][0];
    pKfData->x_prior.data[4][0] = pKfData->x_poster.data[4][0];
    pKfData->x_prior.data[5][0] = pKfData->x_poster.data[5][0];
        
    if (pos_std->x < 10)                                              //input std from sensor may be incorrect. limit it.
        pKfData->p_poster.data[0][0] = pos_std->x * pos_std->x;
    else
        pKfData->p_poster.data[0][0] = 100;
    if (pos_std->y < 10)
        pKfData->p_poster.data[1][1] = pos_std->y * pos_std->y;
    else
        pKfData->p_poster.data[1][1] = 100;
    if (vel_std->x < 10)
        pKfData->p_poster.data[2][2] = vel_std->x * vel_std->x;
    else
        pKfData->p_poster.data[2][2] = 100;
    if (vel_std->y < 10)
        pKfData->p_poster.data[3][3] = vel_std->y * vel_std->y;
    else
        pKfData->p_poster.data[3][3] = 100;
    if (accel_std->x < 10)
        pKfData->p_poster.data[4][4] = accel_std->x * accel_std->x;
    else
        pKfData->p_poster.data[4][4] = 100;
    if (accel_std->y < 10)
        pKfData->p_poster.data[5][5] = accel_std->y * accel_std->y;
    else
        pKfData->p_poster.data[5][5] = 100;
    pKfData->p_prior.data[0][0] = pKfData->p_poster.data[0][0];
    pKfData->p_prior.data[1][1] = pKfData->p_poster.data[1][1];
    pKfData->p_prior.data[2][2] = pKfData->p_poster.data[2][2];
    pKfData->p_prior.data[3][3] = pKfData->p_poster.data[3][3];
    pKfData->p_prior.data[4][4] = pKfData->p_poster.data[4][4];
    pKfData->p_prior.data[5][5] = pKfData->p_poster.data[5][5];
}

static void kf_predict(FusionTrackKfData *kf_data) 
{
    //extroplate the state
    multiply_vector(&F_, &(kf_data->x_poster), &(kf_data->x_prior)); //X_prior = F * X_poster          
#if LOG_KF_FILTER
    log_matrix(kf_data->x_poster, "x_poster", "%4.4f ");
    log_matrix(F_, "F_", "%4.4f ");
    log_matrix(kf_data->x_prior, "x_prior", "%4.4f ");
#endif
    //extroplate uncertainty
    //P_prior = F * P_poster * F' + Q  
    //multiply_matrix(&F_, &(radar_kf_data->p_poster), &temp_);    //temp_ = F * P_poster
    //multiply_transpose_matrix(&temp_, &F_, &temp2_);          //temp2_ = F * P_poster * F'
    //add_matrix(&temp2_, &Q_, &(radar_kf_data->p_prior));    //P_prior = F * P_poster * F' + Q
    //P_prior = P_poster + Q for short since F *P_poster * F' is very closed to P_poster
    add_matrix(&(kf_data->p_poster), &Q_, &(kf_data->p_prior));    //P_prior = F * P_poster * F' + Q
#if LOG_KF_FILTER
    log_matrix(kf_data->p_poster, "p_poster", "%4.4f ");
    log_matrix(Q_, "Q_", "%4.4f ");
    log_matrix(kf_data->p_prior, "p_prior", "%4.4f ");
#endif
}
void update_track_acc_to_sensor(FusionTrack* track, ERadarType radar_type, Vector* camera_X_, Vector* radar_X_, Matrix* camera_std_, Matrix* radar_std_) {

    CameraObject* camera_obj = track->camera_object;
    float camera_dx_std = camera_obj->rel_pos_std.x * camera_obj->rel_pos_std.x;
    float camera_dy_std = camera_obj->rel_pos_std.y * camera_obj->rel_pos_std.y;
    float camera_vx_std = camera_obj->rel_vel_std.x * camera_obj->rel_vel_std.x;
    float camera_vy_std = camera_obj->rel_vel_std.y * camera_obj->rel_vel_std.y;
    float camera_ax_std = camera_obj->rel_accel_std.x * camera_obj->rel_accel_std.x;
    float camera_ay_std = camera_obj->rel_accel_std.y * camera_obj->rel_accel_std.y;

    RadarObject* radar_obj = track->radar_object[radar_type];
    float radar_dx_std = radar_obj->rel_pos_std.x * radar_obj->rel_pos_std.x;
    float radar_dy_std = radar_obj->rel_pos_std.y * radar_obj->rel_pos_std.y;
    float radar_vx_std = radar_obj->rel_vel_std.x * radar_obj->rel_vel_std.x;
    float radar_vy_std = radar_obj->rel_vel_std.y * radar_obj->rel_vel_std.y;
    float radar_ax_std = radar_obj->rel_accel_std.x * radar_obj->rel_accel_std.x;
    float radar_ay_std = radar_obj->rel_accel_std.y * radar_obj->rel_accel_std.y;
    float sum_dx = camera_dx_std + radar_dx_std;
    float sum_dy = camera_dy_std + radar_dy_std;
    float sum_vx = camera_vx_std + radar_vx_std;
    float sum_vy = camera_vy_std + radar_vy_std;
    float sum_ax = camera_ax_std + radar_ax_std;
    float sum_ay = camera_ay_std + radar_ay_std;
    track->rel_pos.x = 0.1f * camera_X_->data[0][0] \
            + 0.9f * radar_X_->data[0][0];
    track->rel_pos.y = 0.9f * camera_X_->data[1][0] \
            + 0.1f * radar_X_->data[1][0];
    track->rel_vel.x = 0.05f * camera_X_->data[2][0] \
            + 0.95f * radar_X_->data[2][0];
    track->rel_vel.y = 0.9f * camera_X_->data[3][0] \
            + 0.1f * radar_X_->data[3][0];
    track->rel_accel.x = 0.4f * camera_X_->data[4][0] \
            + 0.6f * radar_X_->data[4][0];
    track->rel_accel.y = radar_X_->data[5][0];
    /*track->rel_pos.x = (radar_dx_std / sum_dx) * camera_X_->data[0][0] \
        + (camera_dx_std / sum_dx) * radar_X_[RADAR_FRONT]->data[0][0];
    track->rel_pos.y = (radar_dy_std / sum_dy) * camera_X_->data[1][0] \
        + (camera_dy_std / sum_dy) * radar_X_[RADAR_FRONT]->data[1][0];
    track->rel_vel.x = (radar_vx_std / sum_vx) * camera_X_->data[2][0] \
        + (camera_vx_std / sum_vx) * radar_X_[RADAR_FRONT]->data[2][0];
    track->rel_vel.y = (radar_vy_std / sum_vy) * camera_X_->data[3][0] \
        + (camera_vy_std / sum_vy) * radar_X_[RADAR_FRONT]->data[3][0];
    track->rel_accel.x = (radar_ax_std / sum_ax) * camera_X_->data[4][0] \
        + (camera_ax_std / sum_ax) * radar_X_[RADAR_FRONT]->data[4][0];
    track->rel_accel.y = (radar_ay_std / sum_ay) * camera_X_->data[5][0] \
        + (camera_ay_std / sum_ay) * radar_X_[RADAR_FRONT]->data[5][0];*/
        //UPDATE STD
    track->rel_pos_std.x = (radar_dx_std / sum_dx) * sqrtf(camera_std_->data[0][0]) \
        + (camera_dx_std / sum_dx) * sqrtf(radar_std_->data[0][0]);
    track->rel_pos_std.y = (radar_dy_std / sum_dy) * sqrtf(camera_std_->data[1][1]) \
        + (camera_dy_std / sum_dy) * sqrtf(radar_std_->data[1][1]);
    track->rel_vel_std.x = (radar_vx_std / sum_vx) * sqrtf(camera_std_->data[2][2]) \
        + (camera_vx_std / sum_vx) * sqrtf(radar_std_->data[2][2]);
    track->rel_vel_std.y = (radar_vy_std / sum_vy) * sqrtf(camera_std_->data[3][3]) \
        + (camera_vy_std / sum_vy) * sqrtf(radar_std_->data[3][3]);
    track->rel_accel_std.x = (radar_ax_std / sum_ax) * sqrtf(camera_std_->data[4][4]) \
        + (camera_ax_std / sum_ax) * sqrtf(radar_std_->data[4][4]);
    track->rel_accel_std.y = sqrtf(radar_std_->data[5][5]);

}

void update_track_acc_to_radars(FusionTrack* track, ERadarType radar_type, Vector* radar_front_, Vector* radar_X_, Matrix* radar_std_front, Matrix* radar_std_) {
    RadarObject* mrr_obj = track->radar_object[RADAR_FRONT];
    float mrr_dx_std = mrr_obj->rel_pos_std.x * mrr_obj->rel_pos_std.x;
    float mrr_dy_std = mrr_obj->rel_pos_std.y * mrr_obj->rel_pos_std.y;
    float mrr_vx_std = mrr_obj->rel_vel_std.x * mrr_obj->rel_vel_std.x;
    float mrr_vy_std = mrr_obj->rel_vel_std.y * mrr_obj->rel_vel_std.y;
    float mrr_ax_std = mrr_obj->rel_accel_std.x * mrr_obj->rel_accel_std.x;
    float mrr_ay_std = mrr_obj->rel_accel_std.y * mrr_obj->rel_accel_std.y;

    RadarObject* radar_obj = track->radar_object[radar_type];
    float radar_dx_std = radar_obj->rel_pos_std.x * radar_obj->rel_pos_std.x;
    float radar_dy_std = radar_obj->rel_pos_std.y * radar_obj->rel_pos_std.y;
    float radar_vx_std = radar_obj->rel_vel_std.x * radar_obj->rel_vel_std.x;
    float radar_vy_std = radar_obj->rel_vel_std.y * radar_obj->rel_vel_std.y;
    float radar_ax_std = radar_obj->rel_accel_std.x * radar_obj->rel_accel_std.x;
    float radar_ay_std = radar_obj->rel_accel_std.y * radar_obj->rel_accel_std.y;
    float sum_dx = mrr_dx_std + radar_dx_std;
    float sum_dy = mrr_dy_std + radar_dy_std;
    float sum_vx = mrr_vx_std + radar_vx_std;
    float sum_vy = mrr_vy_std + radar_vy_std;
    float sum_ax = mrr_ax_std + radar_ax_std;
    float sum_ay = mrr_ay_std + radar_ay_std;
    track->rel_pos.x = (mrr_dx_std / sum_dx) * radar_X_->data[0][0] \
        + (radar_dx_std / sum_dx) * radar_front_->data[0][0];
    track->rel_pos.y = (mrr_dy_std / sum_dy) * radar_X_->data[1][0] \
        + (radar_dy_std / sum_dy) * radar_front_->data[1][0];
    track->rel_vel.x = (mrr_vx_std / sum_vx) * radar_X_->data[2][0] \
        + (radar_vx_std / sum_vx) * radar_front_->data[2][0];
    track->rel_vel.y = (mrr_vy_std / sum_vy) * radar_X_->data[3][0] \
        + (radar_vy_std / sum_vy) * radar_front_->data[3][0];
    track->rel_accel.x = (mrr_ax_std / sum_ax) * radar_X_->data[4][0] \
        + (radar_ax_std / sum_ax) * radar_front_->data[4][0];
    track->rel_accel.y = (mrr_ay_std / sum_ay) * radar_X_->data[5][0] \
        + (radar_ay_std / sum_ay) * radar_front_->data[5][0];

    track->rel_pos_std.x = (mrr_dx_std / sum_dx) * sqrtf(radar_std_->data[0][0]) \
        + (radar_dx_std / sum_dx) * sqrtf(radar_std_front->data[0][0]);
    track->rel_pos_std.y = (mrr_dy_std / sum_dy) * sqrtf(radar_std_->data[1][1]) \
        + (radar_dy_std / sum_dy) * sqrtf(radar_std_front->data[1][1]);
    track->rel_vel_std.x = (mrr_vx_std / sum_vx) * sqrtf(radar_std_->data[2][2]) \
        + (radar_vx_std / sum_vx) * sqrtf(radar_std_front->data[2][2]);
    track->rel_vel_std.y = (mrr_vy_std / sum_vy) * sqrtf(radar_std_->data[3][3]) \
        + (radar_vy_std / sum_vy) * sqrtf(radar_std_front->data[3][3]);
    track->rel_accel_std.x = (mrr_ax_std / sum_ax) * sqrtf(radar_std_->data[3][3]) \
        + (radar_ax_std / sum_ax) * sqrtf(radar_std_front->data[3][3]);
    track->rel_accel_std.y = (mrr_ay_std / sum_ay) * sqrtf(radar_std_->data[3][3]) \
        + (radar_ay_std / sum_ay) * sqrtf(radar_std_front->data[3][3]);
}

void update_track_no_radar_data(FusionTrack* track, ERadarType radar_type, Vector* radar_front_, Vector* radar_X_, Matrix* radar_std_front, Matrix* radar_std_) {

    track->rel_pos.x = 0.5f * radar_X_->data[0][0] \
        + 0.5f * radar_front_->data[0][0];
    track->rel_pos.y = 0.5f * radar_X_->data[1][0] \
        + 0.5f * radar_front_->data[1][0];
    track->rel_vel.x = 0.5f * radar_X_->data[2][0] \
        + 0.5f * radar_front_->data[2][0];
    track->rel_vel.y = 0.5f * radar_X_->data[3][0] \
        + 0.5f * radar_front_->data[3][0];
    track->rel_accel.x = 0.5f * radar_X_->data[4][0] \
        + 0.5f * radar_front_->data[4][0];
    track->rel_accel.y = 0.5f * radar_X_->data[5][0] \
        + 0.5f * radar_front_->data[5][0];

    track->rel_pos_std.x = 0.5f * sqrtf(radar_std_->data[0][0]) \
        + 0.5f * sqrtf(radar_std_front->data[0][0]);
    track->rel_pos_std.y = 0.5f * sqrtf(radar_std_->data[1][1]) \
        + 0.5f * sqrtf(radar_std_front->data[1][1]);
    track->rel_vel_std.x = 0.5f * sqrtf(radar_std_->data[2][2]) \
        + 0.5f * sqrtf(radar_std_front->data[2][2]);
    track->rel_vel_std.y = 0.5f * sqrtf(radar_std_->data[3][3]) \
        + 0.5f * sqrtf(radar_std_front->data[3][3]);
    track->rel_accel_std.x = 0.5f * sqrtf(radar_std_->data[3][3]) \
        + 0.5f * sqrtf(radar_std_front->data[3][3]);
    track->rel_accel_std.y = 0.5f * sqrtf(radar_std_->data[3][3]) \
        + 0.5f * sqrtf(radar_std_front->data[3][3]);

}
void update_track_no_camera_data(FusionTrack* track, ERadarType radar_type, Vector* camera_X_, Vector* radar_X_, Matrix* camera_std_, Matrix* radar_std_) {

    track->rel_pos.x = 0.1f * camera_X_->data[0][0] \
            + 0.9f * radar_X_->data[0][0];
    track->rel_pos.y = 0.9f * camera_X_->data[1][0] \
            + 0.1f * radar_X_->data[1][0];
    track->rel_vel.x = 0.05f * camera_X_->data[2][0] \
            + 0.95f * radar_X_->data[2][0];
    track->rel_vel.y = 0.9f * camera_X_->data[3][0] \
            + 0.1f * radar_X_->data[3][0];
    track->rel_accel.x = 0.4f * camera_X_->data[4][0] \
            + 0.6f * radar_X_->data[4][0];
    track->rel_accel.y = radar_X_->data[5][0];

    track->rel_pos_std.x = 0.5f * sqrtf(camera_std_->data[0][0]) \
        + 0.5f * sqrtf(radar_std_->data[0][0]);
    track->rel_pos_std.y = 0.5f * sqrtf(camera_std_->data[1][1]) \
        + 0.5f * sqrtf(radar_std_->data[1][1]);
    track->rel_vel_std.x = 0.5f * sqrtf(camera_std_->data[2][2]) \
        + 0.5f * sqrtf(radar_std_->data[2][2]);
    track->rel_vel_std.y = 0.5f * sqrtf(camera_std_->data[3][3]) \
        + 0.5f * sqrtf(radar_std_->data[3][3]);
    track->rel_accel_std.x = 0.5f * sqrtf(camera_std_->data[4][4]) \
        + 0.5f * sqrtf(radar_std_->data[4][4]);
    track->rel_accel_std.y = sqrtf(radar_std_->data[5][5]);
}
/*
function: upadate track paraments
STEP 1: if track has camera and  radar ,first use mrr and camera kf_date ,sencond use camera anf cr kf_data
STEP 2: if track has mrr and other radars data
STEP 3: if track has only camera
STEP 4: if track only has radar or has cr and rsds
Warning: if track has cr and  rsds ,only use cr kf_data
*/
static void update_track_para(FusionTrack* track, unsigned char block)
{
    Vector* camera_X_;
    Vector* radar_X_[5];
    Matrix* radar_std_[5];
    Matrix* camera_std_;
    if (block == 1)
    {
        camera_X_ = &(track->camera_kf_data.x_poster);
        camera_std_ = &(track->camera_kf_data.p_poster);
        for (unsigned char i = 0; i < 5; i++) {
            radar_X_[i] = &(track->radar_kf_data[i].x_poster);
        }
        for (unsigned char i = 0; i < 5; i++) {
            radar_std_[i] = &(track->radar_kf_data[i].p_poster);
        }
    }
    else {
        camera_X_ = &(track->camera_kf_data.x_prior);
        camera_std_ = &(track->camera_kf_data.p_prior);
        for (unsigned char i = 0; i < 5; i++) {
            radar_X_[i] = &(track->radar_kf_data[i].x_prior);
        }
        for (unsigned char i = 0; i < 5; i++) {
            radar_std_[i] = &(track->radar_kf_data[i].p_prior);
        }
    }
    //STEP 1
    if ((track->match_status & MATCH_CAMERA) == MATCH_CAMERA && (track->match_status > MATCH_CAMERA))  //or a coasting fusion object with camera and radar info                 
    {

        if ((track->match_status & MATCH_RADAR_FRONT) == MATCH_RADAR_FRONT) {
            //use std update paraments
            if (track->radar_object[0] != NULL && track->camera_object != NULL)
            {
                //if  track has camera and radar object ,we can use sensors' std 
                update_track_acc_to_sensor(track, RADAR_FRONT, camera_X_, radar_X_[RADAR_FRONT], camera_std_, radar_std_[RADAR_FRONT]);

            }
            else {
                //if track don't have radars object ,we use fixed values
                update_track_no_camera_data(track, RADAR_FRONT, camera_X_, radar_X_[RADAR_FRONT], camera_std_, radar_std_[RADAR_FRONT]);

            }
        }
        else if ((track->match_status & MATCH_RADAR_FR) == MATCH_RADAR_FR)
        {
            if (track->radar_object[2] != NULL && track->camera_object != NULL) {
                update_track_acc_to_sensor(track, RADAR_FR, camera_X_, radar_X_[RADAR_FR], camera_std_, radar_std_[RADAR_FR]);
            }
            else {
                update_track_no_camera_data(track, RADAR_FR, camera_X_, radar_X_[RADAR_FR], camera_std_, radar_std_[RADAR_FR]);
            }
        }
        else if ((track->match_status & MATCH_RADAR_FL) == MATCH_RADAR_FL)
        {
            if (track->radar_object[1] != NULL && track->camera_object != NULL) {
                update_track_acc_to_sensor(track, RADAR_FL, camera_X_, radar_X_[RADAR_FL], camera_std_, radar_std_[RADAR_FL]);

            }
            else {

                update_track_no_camera_data(track, RADAR_FL, camera_X_, radar_X_[RADAR_FL], camera_std_, radar_std_[RADAR_FL]);

            }
        }
        else {
            track->rel_pos.x = camera_X_->data[0][0];
            track->rel_pos.y = camera_X_->data[1][0];
            track->rel_vel.x = camera_X_->data[2][0];
            track->rel_vel.y = camera_X_->data[3][0];
            track->rel_accel.x = camera_X_->data[4][0];
            track->rel_accel.y = camera_X_->data[5][0];
            track->rel_pos_std.x = sqrtf(camera_std_->data[0][0]);
            track->rel_pos_std.y = sqrtf(camera_std_->data[1][1]);
            track->rel_vel_std.x = sqrtf(camera_std_->data[2][2]);
            track->rel_vel_std.y = sqrtf(camera_std_->data[3][3]);
            track->rel_accel_std.x = sqrtf(camera_std_->data[4][4]);
            track->rel_accel_std.y = sqrtf(camera_std_->data[5][5]);
        }
    }
    //STEP 2
    else if ((track->match_status & MATCH_RADAR_FRONT) == MATCH_RADAR_FRONT && (track->match_status > MATCH_RADAR_FL))//if this is a mrr and cr fusion object
    {
        if ((track->match_status & MATCH_RADAR_FL) == MATCH_RADAR_FL)
        {
            if (track->radar_object[0] != NULL && track->radar_object[1] != NULL) {
                //if track has radars object ,we can use sensors' std ,else we don't use them
                update_track_acc_to_radars(track, RADAR_FL, radar_X_[RADAR_FRONT], radar_X_[RADAR_FL], radar_std_[RADAR_FRONT], radar_std_[RADAR_FL]);
            }
            else
            {
                //if track don't have radars object ,we use fixed values
                update_track_no_radar_data(track, RADAR_FL, radar_X_[RADAR_FRONT], radar_X_[RADAR_FL], radar_std_[RADAR_FRONT], radar_std_[RADAR_FL]);

            }
        }
        else if ((track->match_status & MATCH_RADAR_FR) == MATCH_RADAR_FR) {
            if (track->radar_object[0] != NULL && track->radar_object[2] != NULL) {
                update_track_acc_to_radars(track, RADAR_FR, radar_X_[RADAR_FRONT], radar_X_[RADAR_FR], radar_std_[RADAR_FRONT], radar_std_[RADAR_FR]);
            }
            else {
                update_track_no_radar_data(track, RADAR_FR, radar_X_[RADAR_FRONT], radar_X_[RADAR_FR], radar_std_[RADAR_FRONT], radar_std_[RADAR_FR]);

            }
        }
        else
        {
            track->rel_pos.x = radar_X_[RADAR_FRONT]->data[0][0];
            track->rel_pos.y = radar_X_[RADAR_FRONT]->data[1][0];
            track->rel_vel.x = radar_X_[RADAR_FRONT]->data[2][0];
            track->rel_vel.y = radar_X_[RADAR_FRONT]->data[3][0];
            track->rel_accel.x = radar_X_[RADAR_FRONT]->data[4][0];
            track->rel_accel.y = radar_X_[RADAR_FRONT]->data[5][0];
            track->rel_pos_std.x = sqrtf(radar_std_[RADAR_FRONT]->data[0][0]);
            track->rel_pos_std.y = sqrtf(radar_std_[RADAR_FRONT]->data[1][1]);
            track->rel_vel_std.x = sqrtf(radar_std_[RADAR_FRONT]->data[2][2]);
            track->rel_vel_std.y = sqrtf(radar_std_[RADAR_FRONT]->data[3][3]);
            track->rel_accel_std.x = sqrtf(radar_std_[RADAR_FRONT]->data[4][4]);
            track->rel_accel_std.y = sqrtf(radar_std_[RADAR_FRONT]->data[5][5]);
        }
    }
    //STEP 3
    else if (track->camera_object || track->match_status == MATCH_CAMERA)
    {
        track->rel_pos.x = camera_X_->data[0][0];
        track->rel_pos.y = camera_X_->data[1][0];
        track->rel_vel.x = camera_X_->data[2][0];
        track->rel_vel.y = camera_X_->data[3][0];
        track->rel_accel.x = camera_X_->data[4][0];
        track->rel_accel.y = camera_X_->data[5][0];
        track->rel_pos_std.x = sqrtf(camera_std_->data[0][0]);
        track->rel_pos_std.y = sqrtf(camera_std_->data[1][1]);
        track->rel_vel_std.x = sqrtf(camera_std_->data[2][2]);
        track->rel_vel_std.y = sqrtf(camera_std_->data[3][3]);
        track->rel_accel_std.x = sqrtf(camera_std_->data[4][4]);
        track->rel_accel_std.y = sqrtf(camera_std_->data[5][5]);
    }
    //STEP 4
    else
    {
        for (unsigned char i = 0; i < RADAR_CNT; i++)
        {
            if (track->radar_kf_data[i].inited == true)
            {
                track->rel_pos.x = radar_X_[i]->data[0][0];
                track->rel_pos.y = radar_X_[i]->data[1][0];
                track->rel_vel.x = radar_X_[i]->data[2][0];
                track->rel_vel.y = radar_X_[i]->data[3][0];
                track->rel_accel.x = radar_X_[i]->data[4][0];
                track->rel_accel.y = radar_X_[i]->data[5][0];
                track->rel_pos_std.x = sqrtf(radar_std_[i]->data[0][0]);
                track->rel_pos_std.y = sqrtf(radar_std_[i]->data[1][1]);
                track->rel_vel_std.x = sqrtf(radar_std_[i]->data[2][2]);
                track->rel_vel_std.y = sqrtf(radar_std_[i]->data[3][3]);
                track->rel_accel_std.x = sqrtf(radar_std_[i]->data[4][4]);
                track->rel_accel_std.y = sqrtf(radar_std_[i]->data[5][5]);
                break;
            }
        }
    }
}

void update_kf_camera_noise(Point2F* pos_std, Vector2F* vel_std, Vector2F* accel_std)
{
    R_.rows = X_DIM;
    R_.cols = X_DIM;
    /*if (pos_std->x != 0)
        R_.data[0][0] = pos_std->x * pos_std->x;
    else
        R_.data[0][0] = 0.04f;
    if (pos_std->y != 0)
        R_.data[1][1] = pos_std->y * pos_std->y;
    else
        R_.data[1][1] = 0.04f;
    if (vel_std->x != 0)
        R_.data[2][2] = vel_std->x * vel_std->x;
    else
        R_.data[2][2] = 0.04f;
    if (vel_std->y != 0)
        R_.data[3][3] = vel_std->y * vel_std->y;
    else
        R_.data[3][3] = 0.04f;
    if (accel_std->x != 0)
        R_.data[4][4] = accel_std->x * accel_std->x;
    else
        R_.data[4][4] = 0.04f;
    if (accel_std->y != 0)
        R_.data[5][5] = accel_std->y * accel_std->y;
    else
        R_.data[5][5] = 0.04f;*/
    R_.data[0][0] = 0.001f;                                      
    R_.data[1][1] = 0.001f;                                      
    R_.data[2][2] = 0.01f;                                       
    R_.data[3][3] = 0.01f;                                       
    R_.data[4][4] = 0.01f;                                       
    R_.data[5][5] = 0.01f;
}


void update_kf_radar_noise_front(Point2F* pos_std, Vector2F* vel_std, Vector2F* accel_std)
{
    R_.rows = X_DIM;
    R_.cols = X_DIM;
    /*if (pos_std->x != 0)
        R_.data[0][0] = pos_std->x * pos_std->x;
    else
        R_.data[0][0] = 0.04f;
    if (pos_std->y != 0)
        R_.data[1][1] = pos_std->y * pos_std->y;
    else
        R_.data[1][1] = 0.04f;
    if (vel_std->x != 0)
        R_.data[2][2] = vel_std->x * vel_std->x;
    else
        R_.data[2][2] = 0.04f;
    if (vel_std->y != 0)
        R_.data[3][3] = vel_std->y * vel_std->y;
    else
        R_.data[3][3] = 0.04f;
    if (accel_std->x != 0)
        R_.data[4][4] = accel_std->x * accel_std->x;
    else
        R_.data[4][4] = 0.04f;
    if (accel_std->y != 0)
        R_.data[5][5] = accel_std->y * accel_std->y;
    else
        R_.data[5][5] = 0.04f;*/
    R_.data[0][0] = 0.002f;                                
    R_.data[1][1] = 0.002f;                                
    R_.data[2][2] = 0.02f;                                 
    R_.data[3][3] = 0.02f;                                 
    R_.data[4][4] = 0.02f;                                 
    R_.data[5][5] = 0.02f;
}



void update_kf_radar_noise_corner(Point2F* pos_std, Vector2F* vel_std, Vector2F* accel_std)
{
    R_.rows = X_DIM;
    R_.cols = X_DIM;
    /*if (pos_std->x != 0)
        R_.data[0][0] = pos_std->x * pos_std->x;
    else
        R_.data[0][0] = 0.04f;
    if (pos_std->y != 0)
        R_.data[1][1] = pos_std->y * pos_std->y;
    else
        R_.data[1][1] = 0.04f;
    if (vel_std->x != 0)
        R_.data[2][2] = vel_std->x * vel_std->x;
    else
        R_.data[2][2] = 0.04f;
    if (vel_std->y != 0)
        R_.data[3][3] = vel_std->y * vel_std->y;
    else
        R_.data[3][3] = 0.04f;
    if (accel_std->x != 0)
        R_.data[4][4] = accel_std->x * accel_std->x;
    else
        R_.data[4][4] = 0.04f;
    if (accel_std->y != 0)
        R_.data[5][5] = accel_std->y * accel_std->y;
    else
        R_.data[5][5] = 0.04f;*/
    R_.data[0][0] = 0.004f;                           
    R_.data[1][1] = 0.004f;                            
    R_.data[2][2] = 0.04f;                             
    R_.data[3][3] = 0.04f;                             
    R_.data[4][4] = 0.04f;                             
    R_.data[5][5] = 0.04f;
}


//put the kf calculation result back to struct instance from global matrix variables
void update_track_after_prediction(FusionTrack* track) 
{
    unsigned char block = 0;
    update_track_para(track,block);
}

void process_kf_predict(FusionTrack* track, float delta_t, float stamp, ESensorType sensor_type)
{
#if LOG_MATCH
    log_single_track_status(track);
#endif
	if (sensor_type == SENSOR_CAMERA && track->camera_kf_data.inited == true) //use camera kf_data judge if conduct kf_predict
		kf_predict(&(track->camera_kf_data));
	//if radar kf_data exist ,conduct kf_predict  
	if (sensor_type > SENSOR_CAMERA && track->radar_kf_data[sensor_type - 1].inited == true) {
		kf_predict(&(track->radar_kf_data[sensor_type - 1]));
	}
    //at this moment, no one knows if this track is matched with a measurement
    //this also holds the result of update without correction. 
    track->stamp = stamp;
}

static void kf_correction(FusionTrackKfData* kf_data)
{
    // K = P_prior * H' * (H * P_prior  *H' + R)^-1 compute Kalman Gain
    add_matrix(&(kf_data->p_prior), &R_, &temp_);
#if LOG_KF_FILTER
    log_matrix(radar_kf_data->p_prior, "p_prior", "%4.4f ");
    log_matrix(temp_, "p_prior + R", "%4.4f ");
#endif
    destructive_invert_matrix(&temp_, &sig_inverse_);
    multiply_matrix(&(kf_data->p_prior), &sig_inverse_, &K_);
    //X_poster = X_prior + K * (Z - H * X_prior) update estimate with measurement
#if LOG_KF_FILTER
    log_matrix(K_, "K_", "%4.4f ");
    log_matrix(Z_, "Z_", "%4.4f ");
#endif
    subtract_vector(&Z_, &(kf_data->x_prior), &Delta_Z_);
    multiply_vector(&K_, &Delta_Z_, &v_temp_);
    add_vector(&v_temp_, &(kf_data->x_prior), &(kf_data->x_poster));
#if LOG_KF_FILTER
    log_matrix(kf_data->x_poster, "x_poster", "%4.4f ");
#endif
    // P_poster = (I - K * H) * P_prior * (I - K * H)' + K * R *K' update the estimate uncertainty
    // Simplified Version : P_poster = (I - K * H) * P_prior
    multiply_matrix(&K_, &(kf_data->p_prior), &temp2_);
    subtract_matrix(&(kf_data->p_prior), &temp2_, &(kf_data->p_poster));
#if LOG_KF_FILTER
    log_matrix(radar_kf_data->p_poster, "p_poster", "%4.4f");
#endif
}

//put the kf calculation result back to struct instance from global matrix variables
void update_track_after_correction(FusionTrack* track) 
{
    unsigned char block = 1;
    update_track_para(track,block);
}

//for coasting tracks
static void update_track_with_no_correction(FusionTrack* track, ESensorType sensor_type) {
    
    if (sensor_type == SENSOR_CAMERA)
    {
        track->camera_kf_data.x_poster = track->camera_kf_data.x_prior;
        track->camera_kf_data.p_poster = track->camera_kf_data.p_prior;
    }
    else 
    {
        ERadarType radar_type = sensor_type2radar_type(sensor_type);
        track->radar_kf_data[radar_type].x_poster = track->radar_kf_data[radar_type].x_prior;
        track->radar_kf_data[radar_type].p_poster = track->radar_kf_data[radar_type].p_prior;
    }
    unsigned char block = 1;
    update_track_para(track,block);
}

void update_kf_without_measurement(FusionTrack *track, ESensorType sensor_type)
{
    update_track_with_no_correction(track, sensor_type);
}

void update_kf_with_measurement(FusionTrack* track, ESensorType sensor_type, void* object)
{
    
    if (SENSOR_CAMERA == sensor_type)
    {
        CameraObject* pObject = (CameraObject *)object;
        if (!((track->camera_kf_data).inited)) 
        {
            init_fusion_track_filter(track, sensor_type, object);
            return;
        }
        update_kf_measurement_data(&(pObject->rel_pos), &(pObject->rel_vel), &(pObject->rel_accel));
        update_kf_camera_noise(&(pObject->rel_pos_std), &(pObject->rel_vel_std), &(pObject->rel_accel_std));
        kf_correction(&(track->camera_kf_data));
    }
    else
    {
        ERadarType radar_type = sensor_type2radar_type(sensor_type);
        RadarObject* pObject = (RadarObject *)object;
        if (!((track->radar_kf_data[radar_type]).inited))
        {
            init_fusion_track_filter(track, sensor_type, object);
            return;
        }
        update_kf_measurement_data(&(pObject->rel_pos), &(pObject->rel_vel), &(pObject->rel_accel));
        if (SENSOR_RADAR_FRONT == sensor_type)
        {
            update_kf_radar_noise_front(&(pObject->rel_pos_std), &(pObject->rel_vel_std), &(pObject->rel_accel_std));
        }
        else
        {
            update_kf_radar_noise_corner(&(pObject->rel_pos_std), &(pObject->rel_vel_std), &(pObject->rel_accel_std));
        }
        kf_correction(&(track->radar_kf_data[radar_type]));
    }
    
    update_track_after_correction(track);
    
}


