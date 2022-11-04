
/* qcamera::QCamera2HardwareInterface::waitForBackgroundTask(unsigned int&) */

void qcamera::QCamera2HardwareInterface::waitForBackgroundTask(uint *param_1)

{
  uint *in_r1;
  
  waitDeferredWork((QCamera2HardwareInterface *)param_1,in_r1);
  return;
}

