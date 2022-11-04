
/* qcamera::QCameraStreamMemory::getMatchBufIndex(void const*, bool) const */

uint __thiscall
qcamera::QCameraStreamMemory::getMatchBufIndex(QCameraStreamMemory *this,void *param_1,bool param_2)

{
  uint uVar1;
  
  if ((param_2 == false) && ((byte)this[5] != 0)) {
    uVar1 = 0;
    do {
      if (**(void ***)(this + uVar1 * 4 + 0x61c) == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (byte)this[5]);
  }
  return 0xffffffff;
}

