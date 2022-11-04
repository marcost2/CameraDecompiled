
/* qcamera::QCamera3ReprocessChannel::getSrcStreamBySrcHandle(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::getSrcStreamBySrcHandle
          (QCamera3ReprocessChannel *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = *(int *)(this + 0xe8);
  bVar4 = iVar2 != 0;
  if (bVar4) {
    iVar2 = *(int *)(this + 0x44);
  }
  if (bVar4 && iVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(uint *)(this + uVar3 * 4 + 200) == param_1) {
        uVar1 = QCamera3Channel::
                __ThumbV7PILongThunk__ZN7qcamera15QCamera3Channel16getStreamByIndexEj
                          (*(QCamera3Channel **)(this + 0xe8),uVar3);
        return uVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 0x44));
  }
  return 0;
}

