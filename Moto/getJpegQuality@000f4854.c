
/* qcamera::QCameraParameters::getJpegQuality() */

int __thiscall qcamera::QCameraParameters::getJpegQuality(QCameraParameters *this)

{
  int iVar1;
  
  iVar1 = android::CameraParameters::getInt((char *)this);
  if (iVar1 < 0) {
    iVar1 = 0x55;
  }
  return iVar1;
}

