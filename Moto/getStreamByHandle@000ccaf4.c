
/* qcamera::QCameraChannel::getStreamByHandle(unsigned int) */

int __thiscall qcamera::QCameraChannel::getStreamByHandle(QCameraChannel *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(uint *)(this + 0x1c) != 0) {
    uVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(this + 0x18) + uVar2 * 4);
      if ((iVar1 != 0) && (*(uint *)(iVar1 + 0x68) == param_1)) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x1c));
  }
  return 0;
}

