
/* qcamera::QCameraVideoMemory::getMemory(unsigned int, bool) const */

undefined4 __thiscall
qcamera::QCameraVideoMemory::getMemory(QCameraVideoMemory *this,uint param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(byte)this[0x820];
  if (param_1 < uVar3) {
    if (param_2 == false) {
      if (param_1 < (byte)this[5]) {
        return *(undefined4 *)(this + param_1 * 4 + 0x61c);
      }
    }
    else {
      if (uVar3 != 0) {
        uVar1 = 0;
        do {
          iVar2 = **(int **)(this + uVar1 * 4 + 0x720);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) {
            *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(this + param_1 * 4 + 0x82c);
            if ((byte)this[0x820] <= uVar1) goto LAB_000c6dcc;
            goto LAB_000c6da4;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar3);
        if (uVar1 < uVar3) {
LAB_000c6da4:
          return *(undefined4 *)(this + uVar1 * 4 + 0x720);
        }
      }
LAB_000c6dcc:
      if (*(int *)(*(int *)(DAT_000c6e08 + 0xc6dd2) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c6e10 + 0xc6dea,0x652,DAT_000c6e0c + 0xc6de2);
      }
    }
  }
  return 0;
}

