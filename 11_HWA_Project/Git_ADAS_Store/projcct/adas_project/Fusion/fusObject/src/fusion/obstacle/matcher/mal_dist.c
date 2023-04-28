#include "mal_dist.h"

#define WEIGHT_BY_ORIENTATION(_orientation)            (1.0f-(0.5f*(float)(_orientation==OREINTATION_EAST)))
#define WEIGHT_BY_HEADING(_heading)                    (fabsf(fabsf(_heading)-90.0f)/90.0f)   
#define WEIGHT_BY_SPEED_VY(_vy)                        (fabsf(fabsf(_vy)-20.0f)/20.0f)
#define WEIGHT_BY_SPEED_VX(_vx)                        (fabsf(fabsf(_vx)-40.0f)/40.0f)

#define DEFAULT_P_POSTER_X (6.0f)
#define DEFAULT_P_POSTER_Y (3.0f)
#define DEFAULT_P_POSTER_VX (4.0f)
#define DEFAULT_P_POSTER_VY (3.0f)

#define PRIOR (0)
#define POSTER (1)

extern unsigned long DTC_counter;
/* Tunable Coefficient according to experience */
//C_TYPE_UNKNOWN ,C_TYPE_CAR ,C_TYPE_TRUCK ,C_TYPE_MOTORCYCLE ,C_TYPE_BICYCLE ,C_TYPE_PEDESTRIAN ,C_TYPE_GENERAL ,C_TYPE_ANIMAL ,C_TYPE_UNCERTAIN_VCL		
static float camera_weight[4][CAMERA_TYPE_CNT] = { 0.2f,    0.2f,   0.2f,   0.2f,   0.2f,   0.2f,   0.2f,   0.2f,   0.2f,
                                                   10.0f,   10.0f,  10.0f,  10.0f,  1.0f,   1.0f,   10.0f,  10.0f,  10.0f,
                                                   0.5f,    0.5f,   0.5f,   0.5f,   0.5f,   0.5f,   0.5f,   0.5f,   0.5f,
                                                   0.5f,    0.5f,   0.5f,   0.5f,   0.05f,  0.05f,  0.5f,   0.5f,   0.5f };

                 
static float MRR_weight[4][RADAR_TYPE_CNT] = { 0.5f,       0.5f,       0.5f,       0.5f,       0.5f,
                                               5.0f,       5.0f,       5.0f,       5.0f,       5.0f, 
                                               1.0f,       1.0f,       1.0f,       1.0f,       1.0f,
                                               0.8f,       0.8f,       0.8f,       0.8f,       0.8f };
static float CR_weight[4][RADAR_TYPE_CNT] =  { 0.5f,       0.5f,       0.5f,       0.5f,       0.5f,
                                               1.0f,       1.0f,       1.0f,       1.0f,       1.0f,
                                               1.0f,       1.0f,       1.0f,       1.0f,       1.0f,
                                               0.8f,       0.8f,       0.8f,       0.8f,       0.8f };
static float RSDS_weight[4][RADAR_TYPE_CNT]={  0.5f,       0.5f,       0.5f,       0.5f,       0.5f,
                                               1.0f,       1.0f,       1.0f,       1.0f,       1.0f,
                                               1.0f,       1.0f,       1.0f,       1.0f,       1.0f,
                                               0.8f,       0.8f,       0.8f,       0.8f,       0.8f };




static float track_camera_weight[4][CAMERA_TYPE_CNT] = { 0.01f,      0.01f,      0.01f,      0.01f,      0.01f,     0.01f,     0.01f,    0.01f,    0.01f,
                                                         0.5f,       0.5f,       0.5f,       0.5f,       0.05f,     0.05f,     0.5f,     0.5f,     0.5f,
                                                         0.005f,     0.005f,     0.005f,     0.005f,     0.005f,    0.005f,    0.005f,   0.005f,   0.005f,
                                                         0.005f,     0.005f,     0.005f,     0.005f,     0.0005f,   0.0005f,   0.005f,   0.005f,   0.005f };

static float track_radar_weight[4][RADAR_TYPE_CNT] = { 0.01f,      0.01f,      0.01f,      0.01f,      0.01f,
                                                       0.5f,       0.5f,       0.5f,       0.5f,       0.5f,
                                                       0.005f,    0.005f,     0.005f,     0.005f,     0.005f,
                                                       0.005f,    0.005f,     0.005f,     0.005f,     0.005f };

 Matrix P_track_ = {.rows = 4, .cols = 4, .data = {{0.}}};
 Matrix P_track2_ = { .rows = 4, .cols = 4, .data = {{0.}} };
 Matrix R_camera_ = {.rows = 4, .cols = 4, .data = {{0.}}};
 Matrix R_radar_ = {.rows = 4, .cols = 4, .data = {{0.}}};
 Matrix mal_cov_ = {.rows = 4, .cols = 4, .data = {{0.}}};
 Matrix mal_cov_inver = {
    .rows = 4, .cols = 4, .data = {{0.}}};
 Matrix sig_position_state = {
    .rows = 1, .cols = 4, .data = {{0.}}};
 Matrix intermediate_quantity = {
    .rows = 1, .cols = 4, .data = {{0.}}};
 Matrix mal_distance = {
    .rows = 1, .cols = 1, .data = {{0.}}};

static inline void get_track_mal_covariance(Matrix *pMat, const FusionTrackKfData *kf_data, unsigned char prior_or_poster) 
{
    if (kf_data->inited == true)
    {
        if (prior_or_poster == PRIOR)
        {
            pMat->data[0][0] = kf_data->p_prior.data[0][0];
            pMat->data[1][1] = kf_data->p_prior.data[1][1];
            pMat->data[2][2] = kf_data->p_prior.data[2][2];
            pMat->data[3][3] = kf_data->p_prior.data[3][3];
        }
        else
        {
            pMat->data[0][0] = kf_data->p_poster.data[0][0];
            pMat->data[1][1] = kf_data->p_poster.data[1][1];
            pMat->data[2][2] = kf_data->p_poster.data[2][2];
            pMat->data[3][3] = kf_data->p_poster.data[3][3];
        }
    }
    else
    {
        pMat->data[0][0] = DEFAULT_P_POSTER_X;
        pMat->data[1][1] = DEFAULT_P_POSTER_Y;
        pMat->data[2][2] = DEFAULT_P_POSTER_VX;
        pMat->data[3][3] = DEFAULT_P_POSTER_VY;
    }
   //log_matrix(P_track_, "P_track_", "%10.4f ");
 }

//radar will give 0 covariance data and lead to invert matrix calculation assert error
 static inline void get_radar_mal_covariance(const RadarObject *radar_object) 
 {
     if (fabsf(radar_object->rel_pos_std.x)>EPSILON_1000)
         R_radar_.data[0][0] = radar_object->rel_pos_std.x * radar_object->rel_pos_std.x;
     else
         R_radar_.data[0][0] = 0.16f;
     if (fabsf(radar_object->rel_pos_std.y)> EPSILON_1000)
         R_radar_.data[1][1] = radar_object->rel_pos_std.y * radar_object->rel_pos_std.y;
     else
         R_radar_.data[1][1] = 0.25f;
     if (fabsf(radar_object->rel_vel_std.x)> EPSILON_1000)
         R_radar_.data[2][2] = radar_object->rel_vel_std.x * radar_object->rel_vel_std.x;
     else
         R_radar_.data[2][2] = 1.0f;
     if (fabsf(radar_object->rel_vel_std.y) > EPSILON_1000)
         R_radar_.data[3][3] = radar_object->rel_vel_std.y * radar_object->rel_vel_std.y;
     else
         R_radar_.data[3][3] = 1.0f;
   //log_matrix(R_radar_, "R_radar_", "%10.4f ");
 }

 static inline void get_camera_mal_covariance(const CameraObject *camera_object) 
 {
     if (fabsf(camera_object->rel_pos_std.x) < EPSILON_1000)
        R_camera_.data[0][0] = 6.0f * 6.0f; //camera_object->rel_pos_std.x * camera_object->rel_pos_std.x;
     else
        R_camera_.data[0][0] = 6.0f * 6.0f;
     if (fabsf(camera_object->rel_pos_std.y) < EPSILON_1000)
        R_camera_.data[1][1] = 0.4f * 0.4f; //camera_object->rel_pos_std.y * camera_object->rel_pos_std.y;
     else
        R_camera_.data[1][1] = 0.4f * 0.4f;
     if (fabsf(camera_object->rel_vel_std.x) < EPSILON_1000)
        R_camera_.data[2][2] = 3. * 3.; //camera_object->rel_vel_std.x * camera_object->rel_vel_std.x;
     else
        R_camera_.data[2][2] = 3. * 3.;
     if (fabsf(camera_object->rel_vel_std.y) < EPSILON_1000)
        R_camera_.data[3][3] = 2.0f * 2.0f; //camera_object->rel_vel_std.y * camera_object->rel_vel_std.y;
     else
        R_camera_.data[3][3] = 2.0f * 2.0f;;
   //R_camera_.data[0][0] = 6.0f * 6.0f;
   //R_camera_.data[1][1] = 0.4f * 0.4f;
   //R_camera_.data[2][2] = 3. * 3.;
   //camera_object->rel_vel_std.x * camera_object->rel_vel_std.x;
   //R_camera_.data[3][3] = 2.0f * 2.0f;
   //log_matrix(R_camera_, "R_camera_", "%10.4f ");        
 }

static float get_matrix_determinent(const Matrix *pMat) 
{ 
    DTC_counter = 23;
    assert(pMat->rows == pMat->cols);

   float determinent=1;
   for (int i = 0; i < pMat->rows; ++i) {
     determinent *= pMat->data[i][i];
   }
   return determinent;
 }

float track_camera_mal_dist(const FusionTrack *track, const CameraObject *camera_object) {
    float cost = 0;
  
    //need to calculate mal_dist even if tracks only containing image sensor data
    sig_position_state.cols = 4;
    sig_position_state.rows = 1;
    sig_position_state.data[0][0] = WEIGHT_BY_SPEED_VX(track->rel_vel.x) * (float)camera_weight[0][camera_object->type] * fabsf((float)(track->rel_pos.x - camera_object->rel_pos.x) * 50.0f /(10.0f + fabsf(track->rel_pos.x)));
    if (CHECK_FLOAT_VALID(camera_object->heading))
    {
        sig_position_state.data[0][1] = WEIGHT_BY_HEADING(camera_object->heading) * WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) *
            (float)camera_weight[1][camera_object->type] * fabsf((float)(track->rel_pos.y - camera_object->rel_pos.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
    }
    else
    {
        sig_position_state.data[0][1] = WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) *
            (float)camera_weight[1][camera_object->type] * fabsf((float)(track->rel_pos.y - camera_object->rel_pos.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
    }
    sig_position_state.data[0][2] = WEIGHT_BY_SPEED_VX(track->rel_vel.x) * (float)camera_weight[2][camera_object->type] * fabsf((float)(track->rel_vel.x - camera_object->rel_vel.x) * 50.0f /(10.0f + fabsf(track->rel_pos.x)));
    if (CHECK_FLOAT_VALID(camera_object->heading))
    {
        sig_position_state.data[0][3] = WEIGHT_BY_HEADING(camera_object->heading) * WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) *
            (float)camera_weight[3][camera_object->type] * fabsf((float)(track->rel_vel.y - camera_object->rel_vel.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
    }
    else
    {
        sig_position_state.data[0][3] = WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) *
            (float)camera_weight[3][camera_object->type] * fabsf((float)(track->rel_vel.y - camera_object->rel_vel.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
    }
   
    //log_current_function(); 
    zero_matrix(R_camera_);
    get_camera_mal_covariance(camera_object);
    zero_matrix(P_track_);
    get_track_mal_covariance(&P_track_, &(track->camera_kf_data), PRIOR);
    zero_matrix(mal_cov_);
    add_matrix(&P_track_, &R_camera_, &mal_cov_);
    //log_matrix(mal_cov_, "mal_cov_", "%10.4f ");
    //printf("\n");
    Matrix temp_mal_cov = mal_cov_;
    destructive_invert_matrix(&mal_cov_, &mal_cov_inver);
    multiply_matrix(&sig_position_state, &mal_cov_inver, &intermediate_quantity);
    multiply_transpose_matrix(&intermediate_quantity, &sig_position_state, &mal_distance);
    float determinent = get_matrix_determinent(&temp_mal_cov);
    cost = (float)(mal_distance.data[0][0] + logf(determinent));
    cost -= 10.0f * CompareTypeCameraToTrack(camera_object->type, track->type);
    cost -= 10.0f * CompareMoveStatusCameraToTrack(camera_object->move_status, track->move_status);
    return cost;
}

float track_radar_mal_dist(const FusionTrack *track, ERadarType radar_type, const RadarObject *object) 
{
    float cost = 0;
    float* pWeight = NULL;
    if (radar_type == RADAR_FRONT) pWeight = &MRR_weight[0][0];
    else if (radar_type == RADAR_FL || radar_type == RADAR_FR) pWeight = &CR_weight[0][0];
    else if (radar_type == RADAR_RL || radar_type == RADAR_RR) pWeight = &RSDS_weight[0][0];
    else pWeight = &MRR_weight[0][0];
    sig_position_state.cols = 4;
    sig_position_state.rows = 1;
    sig_position_state.data[0][0] = WEIGHT_BY_SPEED_VX(track->rel_vel.x) * (*(pWeight + object->type)) * fabsf((float)(object->rel_pos.x - track->rel_pos.x) * 50.0f/(5.0f + fabsf(track->rel_pos.x)));
    sig_position_state.data[0][1] = WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) * 
                                    (*(pWeight + 1 * RADAR_TYPE_CNT + object->type)) * fabsf((float)(object->rel_pos.y - track->rel_pos.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
    sig_position_state.data[0][2] = WEIGHT_BY_SPEED_VX(track->rel_vel.x) * (*(pWeight + 2 * RADAR_TYPE_CNT + object->type)) * fabsf((float)(object->rel_vel.x - track->rel_vel.x) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
    sig_position_state.data[0][3] = WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) * 
                                    (*(pWeight + 3 * RADAR_TYPE_CNT + object->type)) * fabsf((float)(object->rel_vel.y - track->rel_vel.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
 
    zero_matrix(R_radar_);
    get_radar_mal_covariance(object);   //radar object still holds the most recent radar object
    zero_matrix(P_track_);
    get_track_mal_covariance(&P_track_, &(track->radar_kf_data[radar_type]), PRIOR);
    zero_matrix(mal_cov_);
    add_matrix(&P_track_, &R_radar_, &mal_cov_);

    destructive_invert_matrix(&mal_cov_, &mal_cov_inver);
    multiply_matrix(&sig_position_state, &mal_cov_inver, &intermediate_quantity);
    multiply_transpose_matrix(&intermediate_quantity, &sig_position_state, &mal_distance);
    cost = (float)(mal_distance.data[0][0] + log(get_matrix_determinent(&mal_cov_)));
    if (radar_type == RADAR_FRONT)
    {
        cost -= 20.0f * CompareTypeRadarToTrack(object->type, track->type);
        cost -= 20.0f * CompareMoveStatusRadarToTrack(object->move_status, track->move_status);
    }
    return cost;
}

float track_track_mal_dist(const FusionTrack* track, const FusionTrack* track2)
{
    sig_position_state.cols = 4;
    sig_position_state.rows = 1;
    float* pWeight = NULL;
    if (track->camera_object != NULL || track2->camera_object != NULL)
    {
        pWeight = &track_camera_weight[0][0];
        int index = 0;
        if (track->camera_object != NULL) index = track->camera_object->type;
        else index = track2->camera_object->type;
        sig_position_state.data[0][0] = WEIGHT_BY_SPEED_VX(track->rel_vel.x) * (*(pWeight + index)) * fabsf((float)(track2->rel_pos.x - track->rel_pos.x) * 50.0f / (5.0f + fabsf(track->rel_pos.x)));
        sig_position_state.data[0][1] = WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) * 
                                        (*(pWeight + 1 * CAMERA_TYPE_CNT + index)) * fabsf((float)(track2->rel_pos.y - track->rel_pos.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
        sig_position_state.data[0][2] = WEIGHT_BY_SPEED_VX(track->rel_vel.x) * (*(pWeight + 2 * CAMERA_TYPE_CNT + index)) * fabsf((float)(track2->rel_vel.x - track->rel_vel.x) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
        sig_position_state.data[0][3] = WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) * 
                                        (*(pWeight + 3 * CAMERA_TYPE_CNT + index)) * fabsf((float)(track2->rel_vel.y - track->rel_vel.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
    }
    else if(track->radar_object[RADAR_FRONT] != NULL || track2->radar_object[RADAR_FRONT] != NULL)
    {
        pWeight = &track_radar_weight[0][0];
        int index = 0;
        if (track->radar_object[RADAR_FRONT] != NULL) index = track->radar_object[RADAR_FRONT]->type;
        else index = track2->radar_object[RADAR_FRONT]->type;
        sig_position_state.data[0][0] = WEIGHT_BY_SPEED_VX(track->rel_vel.x) * (*(pWeight + index)) * fabsf((float)(track2->rel_pos.x - track->rel_pos.x) * 50.0f / (5.0f + fabsf(track->rel_pos.x)));
        sig_position_state.data[0][1] = WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) * 
                                        (*(pWeight + 1 * RADAR_TYPE_CNT + index)) * fabsf((float)(track2->rel_pos.y - track->rel_pos.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
        sig_position_state.data[0][2] = WEIGHT_BY_SPEED_VX(track->rel_vel.x) * (*(pWeight + 2 * RADAR_TYPE_CNT + index)) * fabsf((float)(track2->rel_vel.x - track->rel_vel.x) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
        sig_position_state.data[0][3] = WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) * 
                                        (*(pWeight + 3 * RADAR_TYPE_CNT + index)) * fabsf((float)(track2->rel_vel.y - track->rel_vel.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
    }
    else
    {
        pWeight = &track_radar_weight[0][0];
        sig_position_state.data[0][0] = WEIGHT_BY_SPEED_VX(track->rel_vel.x) * (*(pWeight)) * fabsf((float)(track2->rel_pos.x - track->rel_pos.x) * 50.0f / (5.0f + fabsf(track->rel_pos.x)));
        sig_position_state.data[0][1] = WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) * 
                                        (*(pWeight + 1 * RADAR_TYPE_CNT)) * fabsf((float)(track2->rel_pos.y - track->rel_pos.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
        sig_position_state.data[0][2] = WEIGHT_BY_SPEED_VX(track->rel_vel.x) * (*(pWeight + 2 * RADAR_TYPE_CNT)) * fabsf((float)(track2->rel_vel.x - track->rel_vel.x) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
        sig_position_state.data[0][3] = WEIGHT_BY_ORIENTATION(track->orientation) * WEIGHT_BY_SPEED_VY(track->rel_vel.y) * 
                                        (*(pWeight + 3 * RADAR_TYPE_CNT)) * fabsf((float)(track2->rel_vel.y - track->rel_vel.y) * 50.0f / (10.0f + fabsf(track->rel_pos.x)));
    }
    zero_matrix(P_track_);
    get_track_mal_covariance(&P_track_, &(track->camera_kf_data), POSTER);
    zero_matrix(P_track2_);
    for (unsigned char i = 0; i < RADAR_CNT; i++)
    {   
        if (track2->radar_kf_data[i].inited == true)
        {
            get_track_mal_covariance(&P_track2_, &(track2->radar_kf_data[i]), POSTER);
            break;
        }
    }
    zero_matrix(mal_cov_);
    add_matrix(&P_track_, &P_track2_, &mal_cov_);
    destructive_invert_matrix(&mal_cov_, &mal_cov_inver);
    multiply_matrix(&sig_position_state, &mal_cov_inver, &intermediate_quantity);
    multiply_transpose_matrix(&intermediate_quantity, &sig_position_state, &mal_distance);
    return (float)(mal_distance.data[0][0] + log(get_matrix_determinent(&mal_cov_)));
    //return (float)mal_distance.data[0][0];          //normally log of determinent of mal_cov_ is negative
}