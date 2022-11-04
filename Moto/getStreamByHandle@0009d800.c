
/* qcamera::QCamera3Channel::getStreamByHandle(unsigned int) */

int __thiscall qcamera::QCamera3Channel::getStreamByHandle(QCamera3Channel *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(uint *)(this + 0x44) != 0) {
    uVar2 = 0;
    do {
      iVar1 = *(int *)(this + uVar2 * 4 + 0x24);
      if ((iVar1 != 0) && (*(uint *)(iVar1 + 0xc) == param_1)) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x44));
  }
  return 0;
}

