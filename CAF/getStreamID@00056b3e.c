
/* qcamera::QCamera3Channel::getStreamID(unsigned int) */

undefined4 __thiscall qcamera::QCamera3Channel::getStreamID(QCamera3Channel *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x44) != 0) {
    uVar3 = 0;
    do {
      uVar1 = QCamera3Stream::getMyType(*(QCamera3Stream **)(this + uVar3 * 4 + 0x24));
      if (param_1 == 1 << (uVar1 & 0xff)) {
        uVar2 = QCamera3Stream::__ThumbV7PILongThunk__ZN7qcamera14QCamera3Stream13getMyServerIDEv
                          (*(QCamera3Stream **)(this + uVar3 * 4 + 0x24));
        return uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 0x44));
  }
  return 0;
}

