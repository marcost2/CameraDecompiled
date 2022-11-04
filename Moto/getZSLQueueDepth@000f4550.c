
/* qcamera::QCameraParameters::getZSLQueueDepth() */

undefined __thiscall qcamera::QCameraParameters::getZSLQueueDepth(QCameraParameters *this)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = android::CameraParameters::getInt((char *)this);
  if (iVar2 < 0) {
    iVar2 = 2;
  }
  uVar1 = (undefined)iVar2;
  if (this[0x380] != (QCameraParameters)0x0) {
    uVar1 = 1;
  }
  return uVar1;
}

