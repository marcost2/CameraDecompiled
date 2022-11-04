
/* qcamera::QCamera3Stream::getMyServerID() */

undefined4 __thiscall qcamera::QCamera3Stream::getMyServerID(QCamera3Stream *this)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(this + 0x14) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(this + 0x14);
  }
  return uVar1;
}

