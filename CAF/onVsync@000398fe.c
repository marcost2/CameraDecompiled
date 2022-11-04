
/* qcamera::QCameraDisplay::onVsync(unsigned long long, unsigned int) */

void qcamera::QCameraDisplay::onVsync(ulonglong param_1,uint param_2)

{
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  computeAverageVsyncInterval(CONCAT44(in_lr,unaff_r4));
  android::hardware::Void((hardware *)param_2);
  return;
}

