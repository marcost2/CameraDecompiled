
/* qcamera::QCamera3Channel::getStreamTypeMask() */

uint __thiscall qcamera::QCamera3Channel::getStreamTypeMask(QCamera3Channel *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x44) != 0) {
    uVar3 = 0;
    uVar2 = 0;
    do {
      uVar1 = QCamera3Stream::getMyType(*(QCamera3Stream **)(this + uVar3 * 4 + 0x24));
      uVar2 = uVar2 | 1 << (uVar1 & 0xff);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 0x44));
    return uVar2;
  }
  return 0;
}

