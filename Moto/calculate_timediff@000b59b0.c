
/* qcamera::QCamera2HardwareInterface::calculate_timediff(timeval*, timeval*) */

int qcamera::QCamera2HardwareInterface::calculate_timediff(timeval *param_1,timeval *param_2)

{
  return ((param_2->tv_usec + (param_2->tv_sec - param_1->tv_sec) * 1000000) - param_1->tv_usec) /
         1000;
}

