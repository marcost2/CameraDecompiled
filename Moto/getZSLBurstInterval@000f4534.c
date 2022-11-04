
/* qcamera::QCameraParameters::getZSLBurstInterval() */

uint __thiscall qcamera::QCameraParameters::getZSLBurstInterval(QCameraParameters *this)

{
  uint uVar1;
  
  uVar1 = android::CameraParameters::getInt((char *)this);
  if ((int)uVar1 < 0) {
    uVar1 = 1;
  }
  return uVar1 & 0xff;
}

