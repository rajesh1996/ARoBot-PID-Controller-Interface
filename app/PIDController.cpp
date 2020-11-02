/**
 * BSD 3-Clause License
 *
 * @copyright (c) 2020, Rajeshwar N S, Arjun Srinivasan
 * 
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 * Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* @file PIDController.cpp
 * @brief PID controller for ackermann model
 * @authors Rajeshwar N S Arjun Srinivasan
 */

#include "../include/PIDController.hpp"

control::PIDController::PIDController() {
  kp = 0;
  ki = 0;
  kd = 0;
  prev_error = 0;
  sum_error = 0;
}

void control::PIDController::setKp_(double kp_) {
  kp = kp_;
}
void control::PIDController::setKi_(double ki_) {
  ki = ki_;
}
void control::PIDController::setKd_(double kd_) {
  kd = kd_;
}

double control::PIDController::getKp() {
  return kp;
}
double control::PIDController::getKi() {
  return ki;
}
double control::PIDController::getKd() {
  return kd;
}

double control::PIDController::calculateError(double current, double desired) {
  return 20.501;
}

double control::PIDController::convergeParams(double currentvel, double setvel,
  double currenthead, double sethead) {
  return sethead;
}

// destructor
control::PIDController::~PIDController() {
}