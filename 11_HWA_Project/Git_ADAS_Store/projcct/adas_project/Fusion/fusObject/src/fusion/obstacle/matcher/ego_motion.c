#include "ego_motion.h"


bool compensate_ego_motion(FusionTrack *track, float delta_t, float yaw_rate)
{
	
	if (fabsf(yaw_rate * delta_t) > MOTION_CAL_TH)			//if rotate speed bigger than threshold, then make compensation
	{
		
		log_current_function();
		float angle = yaw_rate * delta_t;
		log_yawrate(yaw_rate, delta_t, angle);
		float x = track->rel_pos.x, y = track->rel_pos.y, vx = track->rel_vel.x, vy = track->rel_vel.y;
		float kf_x, kf_y, kf_vx, kf_vy;
		track->rel_pos.x = x * (float)cos(angle);// +track->rel_pos.y * (float)sin(angle); since sin(angle) and y is relatively small, omit it
		track->rel_pos.y = y * (float)cos(angle) - x * (float)sin(angle);
		//divider of original speed and additions introduced by rotation
		//since the time stamp of observer by radar and recieved by mcu is unsync, reduce yaw_rate by 0.1. This leads to a lag system but stable. 
		track->rel_vel.x = vx * (float)cos(angle) + vy * (float)sin(angle) - y * (yaw_rate * 0.1f) * (float)sin(angle);
		track->rel_vel.y = vx * (float)sin(angle) + vy * (float)cos(angle) - x * (yaw_rate * 0.1f) * (float)cos(angle);

		if (track->camera_kf_data.inited == true)
		{ 
			kf_x = track->camera_kf_data.x_prior.data[0][0];
			kf_y = track->camera_kf_data.x_prior.data[1][0];
			kf_vx = track->camera_kf_data.x_prior.data[2][0];
			kf_vy = track->camera_kf_data.x_prior.data[3][0];
			track->camera_kf_data.x_prior.data[0][0] = kf_x * (float)cos(angle);
			track->camera_kf_data.x_prior.data[1][0] = kf_y * (float)cos(angle) - kf_x * (float)sin(angle);
			track->camera_kf_data.x_prior.data[2][0] = kf_vx * (float)cos(angle) + kf_vy * (float)sin(angle) - kf_y * (yaw_rate * 0.1f) * (float)sin(angle);
			track->camera_kf_data.x_prior.data[3][0] = kf_vx * (float)sin(angle) + kf_vy * (float)cos(angle) - kf_x * (yaw_rate * 0.1f) * (float)cos(angle);
		}
		for (unsigned char i = 0; i < RADAR_CNT; i++)
		{
			if (track->radar_kf_data[i].inited == true)
			{
				kf_x = track->radar_kf_data[i].x_prior.data[0][0];
				kf_y = track->radar_kf_data[i].x_prior.data[1][0];
				kf_vx = track->radar_kf_data[i].x_prior.data[2][0];
				kf_vy = track->radar_kf_data[i].x_prior.data[3][0];
				track->radar_kf_data[i].x_prior.data[0][0] = kf_x * (float)cos(angle);
				track->radar_kf_data[i].x_prior.data[1][0] = kf_y * (float)cos(angle) - kf_x * (float)sin(angle);
				track->radar_kf_data[i].x_prior.data[2][0] = kf_vx * (float)cos(angle) + kf_vy * (float)sin(angle) - kf_y * (yaw_rate * 0.1f) * (float)sin(angle);
				track->radar_kf_data[i].x_prior.data[3][0] = kf_vx * (float)sin(angle) + kf_vy * (float)cos(angle) - kf_x * (yaw_rate * 0.1f) * (float)cos(angle);
			}
		}		
		log_single_track_status(track);
		return true;	
		
	}
	return false;
}