
/* qcamera::QCameraStream::getMyType() */

undefined4 __thiscall qcamera::QCameraStream::getMyType(QCameraStream *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x70) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x70) + 4);
  }
  return uVar1;
}

