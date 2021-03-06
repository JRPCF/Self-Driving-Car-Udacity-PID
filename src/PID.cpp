#include "PID.h"
#include <math.h>
#include <iostream>
#include <vector>

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    /**
   	* TODO: Initialize PID coefficients (and errors, if needed)
   	*/
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;
    this->p_error = 0.0;
    this->i_error = 0.0;
    this->d_error = 0.0;
}
void PID::UpdateError(double cte) {
    /**
    * TODO: Update PID errors based on cte.
    */
    d_error = cte - p_error;
    p_error = cte;
    i_error += cte;
}
double PID::TotalError() {
    return (-1 * Kp * p_error) - (Ki * i_error) - (Kd * d_error);
}
