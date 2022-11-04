
/* qcamera::QCameraParameters::getNumOfSnapshots() */

uint __thiscall qcamera::QCameraParameters::getNumOfSnapshots(QCameraParameters *this)

{
  uint uVar1;
  
  uVar1 = android::CameraParameters::getInt((char *)this);
  if ((int)uVar1 < 1) {
    uVar1 = 1;
  }
  return uVar1 & 0xff;
}

