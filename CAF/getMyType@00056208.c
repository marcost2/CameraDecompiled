
/* qcamera::QCamera3Stream::getMyType() const */

undefined4 __thiscall qcamera::QCamera3Stream::getMyType(QCamera3Stream *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x14) == 0) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x14) + 4);
  }
  return uVar1;
}

