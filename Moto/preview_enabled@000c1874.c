
/* qcamera::QCameraMuxer::preview_enabled(camera_device*) */

undefined4 __thiscall
qcamera::QCameraMuxer::preview_enabled(QCameraMuxer *this,camera_device *param_1)

{
  camera_device *extraout_r1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000c1974 + 0xc1880);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c197c + 0xc1898,0x2c9,DAT_000c1978 + 0xc1890);
    param_1 = extraout_r1;
  }
  if (**(int **)(DAT_000c1980 + 0xc18a0) == 0) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar2 = 0x2ca;
    iVar4 = DAT_000c1984 + 0xc18d8;
    iVar1 = DAT_000c1988 + 0xc18e0;
  }
  else {
    if (this != (QCameraMuxer *)0x0) {
      param_1 = *(camera_device **)(this + 0x44);
    }
    if (this != (QCameraMuxer *)0x0 && param_1 != (camera_device *)0x0) {
      if (*(uint *)(param_1 + 0x54) != 0) {
        uVar3 = 0;
        do {
          iVar1 = *(int *)(**(int **)(DAT_000c1980 + 0xc18a0) + 0x2c) +
                  *(int *)(param_1 + uVar3 * 4 + 0x5c) * 0x38;
          if (iVar1 == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
              return 0xffffffed;
            }
            uVar2 = 0x2d1;
            iVar4 = DAT_000c1994 + 0xc1944;
            iVar1 = DAT_000c1998 + 0xc194c;
            goto LAB_000c18de;
          }
          if (*(int *)(iVar1 + 0x30) == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
              return 0xffffffed;
            }
            uVar2 = 0x2d4;
            iVar4 = DAT_000c199c + 0xc195e;
            iVar1 = DAT_000c19a0 + 0xc1966;
            goto LAB_000c18de;
          }
          if (*(int *)(iVar1 + 0x10) == 0) {
            uVar2 = (*(code *)PTR_preview_enabled_00119f5c)(*(undefined4 *)(iVar1 + 0x34));
            return uVar2;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x54));
      }
      if (*(int *)(iVar4 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000c19a8 + 0xc192a,0x2da,DAT_000c19a4 + 0xc1922);
      }
      return 0;
    }
    if (*(int *)(iVar4 + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar2 = 0x2cd;
    iVar4 = DAT_000c198c + 0xc18c0;
    iVar1 = DAT_000c1990 + 0xc18c8;
  }
LAB_000c18de:
  mm_camera_debug_log(1,1,iVar1,uVar2,iVar4);
  return 0xffffffed;
}

