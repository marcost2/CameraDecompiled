
/* qcamera::QCamera2HardwareInterface::scheduleBackgroundTask(qcamera::BackgroundTask*) */

void qcamera::QCamera2HardwareInterface::scheduleBackgroundTask(BackgroundTask *param_1)

{
  queueDeferredWork((DeferredWorkCmd)param_1,7);
  return;
}

