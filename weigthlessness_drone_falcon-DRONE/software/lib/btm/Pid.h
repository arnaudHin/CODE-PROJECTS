/*
 * pid.h
 *
 *  Created on: 22 mars 2020
 *      Author: Theo
 */

#ifndef PID_H_
#define PID_H_
#include "macro_types.h"

#define PID_KP 			0
#define PID_KI 			1
#define PID_KD 			2
#define PID_FREQUENCY 	3
#define PID_MAX_OUTPUT 	4
#define PID_NB_SETTINGS 5

typedef struct {
	//Sorties
	float output ;
	float P;
	float I;
	float D;
	//Settings
	float settings[PID_NB_SETTINGS];
	//Error
	float error ;
	//Previous value
	float previous_measurement ;
}PID_t;

//Init function
void PID_init(PID_t * pid, float settings[PID_NB_SETTINGS]);
float PID_compute(PID_t * pid, float consigne, float value);


#endif /* PID_H_ */
