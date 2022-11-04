
/* qcamera::QCameraStream::getMyServerID() */

undefined4 __thiscall qcamera::QCameraStream::getMyServerID(QCameraStream *this)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(this + 0x70) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(this + 0x70);
  }
  return uVar1;
}

