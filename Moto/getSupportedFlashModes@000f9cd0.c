
/* qcamera::QCameraParameters::getSupportedFlashModes() */

uint __thiscall qcamera::QCameraParameters::getSupportedFlashModes(QCameraParameters *this)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = android::CameraParameters::get((char *)this);
  uVar2 = count_leading_zeroes(uVar1);
  return uVar2 & 0xffffffe0;
}

