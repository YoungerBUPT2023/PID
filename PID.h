#ifndef __PID_H
#define __PID_H

typedef struct
{
	float err;
	float err_last;
	float err_sum;
	float acutual_value;
	float target_value;
	float Kp;
	float Ki;
	float Kd;
}pid;


#endif