
/* qcamera::QCameraGrallocMemory::getMatchBufIndex(void const*, bool) const */

uint __thiscall
qcamera::QCameraGrallocMemory::getMatchBufIndex
          (QCameraGrallocMemory *this,void *param_1,bool param_2)

{
  uint uVar1;
  
  if ((param_2 == false) && ((byte)this[0xa88] != 0)) {
    uVar1 = 0;
    do {
      if (**(void ***)(this + uVar1 * 4 + 0x980) == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (byte)this[0xa88]);
  }
  return 0xffffffff;
}

