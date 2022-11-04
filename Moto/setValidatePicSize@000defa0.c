
/* qcamera::QCameraParameters::QCameraReprocScaleParam::setValidatePicSize(int&, int&) */

undefined4 __thiscall
qcamera::QCameraParameters::QCameraReprocScaleParam::setValidatePicSize
          (QCameraReprocScaleParam *this,int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (*this == (QCameraReprocScaleParam)0x0) {
    return 0xffffffea;
  }
  this[1] = (QCameraReprocScaleParam)0x0;
  if (*(uint *)(this + 0xc) == 0) {
    if (this[2] == (QCameraReprocScaleParam)0x0) goto LAB_000df04c;
  }
  else {
    uVar2 = 0;
    do {
      iVar3 = *(int *)(this + uVar2 * 8 + 0x10);
      bVar5 = iVar3 == *param_1;
      if (bVar5) {
        iVar3 = *(int *)(this + uVar2 * 8 + 0x14);
      }
      if (bVar5 && iVar3 == *param_2) goto LAB_000df026;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0xc));
    if (this[2] == (QCameraReprocScaleParam)0x0) {
      if (*(int *)(*(int *)(DAT_000df198 + 0xdefe6) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000df1a0 + 0xdeffe,0x3561,DAT_000df19c + 0xdeff6);
      }
LAB_000df04c:
      this[1] = (QCameraReprocScaleParam)0x0;
      iVar3 = *param_1;
      if (*(uint *)(this + 0x50) != 0) {
        uVar2 = 0;
        do {
          if ((*(int *)(*(int *)(this + 0x54) + uVar2 * 8) == iVar3) &&
             (*(int *)(*(int *)(this + 0x54) + uVar2 * 8 + 4) == *param_2)) goto LAB_000df14a;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(this + 0x50));
      }
      if (*(uint *)(this + 0xc) != 0) {
        uVar2 = 0;
        do {
          iVar4 = *(int *)(this + uVar2 * 8 + 0x10);
          bVar5 = iVar4 == iVar3;
          if (bVar5) {
            iVar4 = *(int *)(this + uVar2 * 8 + 0x14);
          }
          if (bVar5 && iVar4 == *param_2) goto LAB_000df14a;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(this + 0xc));
      }
      iVar3 = *(int *)(DAT_000df1bc + 0xdf09c);
      if ((*(int *)(iVar3 + 0x20) != 0) &&
         (mm_camera_debug_log(1,1,DAT_000df1c4 + 0xdf0b6,0x3582,DAT_000df1c0 + 0xdf0ae),
         *(int *)(iVar3 + 0x20) != 0)) {
        mm_camera_debug_log(1,1,DAT_000df1cc + 0xdf0d2,0x35ce,DAT_000df1c8 + 0xdf0ca);
      }
      return 0xffffffea;
    }
  }
  if (*(int *)(*(int *)(DAT_000df18c + 0xdf00c) + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000df194 + 0xdf024,0x355e,DAT_000df190 + 0xdf01c);
  }
LAB_000df026:
  this[1] = (QCameraReprocScaleParam)0x1;
  *(int *)(this + 0x19c) = *param_1;
  *(int *)(this + 0x1a0) = *param_2;
  if (*(int *)(this + 0x50) == 0) {
    if (this[2] == (QCameraReprocScaleParam)0x0) {
      return 0xffffffea;
    }
LAB_000df0d8:
    if (*(int *)(*(int *)(DAT_000df1a4 + 0xdf0de) + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000df1ac + 0xdf0f6,0x359b,DAT_000df1a8 + 0xdf0ee);
    }
    iVar3 = *(int *)(this + 4);
    piVar1 = (int *)(this + 8);
  }
  else {
    if (this[2] != (QCameraReprocScaleParam)0x0) goto LAB_000df0d8;
    piVar1 = *(int **)(this + 0x54) + 1;
    iVar3 = **(int **)(this + 0x54);
  }
  *(int *)(this + 0x1a4) = iVar3;
  *(int *)(this + 0x1a8) = *piVar1;
  *param_1 = iVar3;
  *param_2 = *(int *)(this + 0x1a8);
  if (*(int *)(*(int *)(DAT_000df1b0 + 0xdf118) + 0x28) == 0) {
    return 0;
  }
  mm_camera_debug_log(1,3,DAT_000df1b8 + 0xdf13c,0x35c9,DAT_000df1b4 + 0xdf128,
                      *(undefined4 *)(this + 0x19c),*(undefined4 *)(this + 0x1a0),
                      *(undefined4 *)(this + 0x1a4),*(undefined4 *)(this + 0x1a8));
LAB_000df154:
  if (*(int *)(*(int *)(DAT_000df1d0 + 0xdf15a) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000df1d8 + 0xdf180,0x35d5,DAT_000df1d4 + 0xdf16c,this[1],*param_1,
                        *param_2);
  }
  return 0;
LAB_000df14a:
  *(int *)(this + 0x1a4) = iVar3;
  *(int *)(this + 0x1a8) = *param_2;
  goto LAB_000df154;
}

