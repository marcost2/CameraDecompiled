
/* qcamera::QCameraVideoMemory::getMatchBufIndex(void const*, bool) const */

uint __thiscall
qcamera::QCameraVideoMemory::getMatchBufIndex(QCameraVideoMemory *this,void *param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == false) {
    if ((byte)this[5] != 0) {
      uVar2 = 0;
      do {
        if (**(void ***)(this + uVar2 * 4 + 0x61c) == param_1) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (byte)this[5]);
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    if ((((param_1 != (void *)0x0) && (*param_1 == 3)) &&
        (iVar1 = *(int *)((int)param_1 + 4), iVar1 != 0)) && ((byte)this[0x820] != 0)) {
      iVar3 = *(int *)(iVar1 + 4) + *(int *)(iVar1 + 8) + -1;
      uVar2 = 0;
      do {
        if (*(int *)(iVar1 + iVar3 * 4 + 0xc) ==
            *(int *)(*(int *)(this + uVar2 * 4 + 0x82c) + iVar3 * 4 + 0xc)) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (byte)this[0x820]);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

