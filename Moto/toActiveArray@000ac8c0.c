
/* qcamera::QCamera3CropRegionMapper::toActiveArray(int&, int&, int&, int&) */

void __thiscall
qcamera::QCamera3CropRegionMapper::toActiveArray
          (QCamera3CropRegionMapper *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  int unaff_r4;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 != 0) {
    unaff_r4 = *(int *)(this + 8);
  }
  if (uVar1 != 0 && unaff_r4 != 0) {
    iVar3 = *(int *)(this + 0xc);
    if (iVar3 != 0) {
      unaff_r4 = *(int *)(this + 0x10);
    }
    if (iVar3 != 0 && unaff_r4 != 0) {
      *param_1 = (uint)(*param_1 * iVar3) / uVar1;
      *param_2 = (uint)(*param_2 * *(int *)(this + 0x10)) / *(uint *)(this + 8);
      *param_3 = (uint)(*param_3 * *(int *)(this + 0xc)) / *(uint *)(this + 4);
      *param_4 = (uint)(*param_4 * *(int *)(this + 0x10)) / *(uint *)(this + 8);
      uVar1 = *param_1;
      iVar4 = *(int *)(this + 0xc);
      iVar3 = *(int *)(this + 0x10);
      if (0x7fffffff < uVar1) {
        uVar1 = 0;
        *param_1 = 0;
      }
      uVar2 = *param_2;
      if (0x7fffffff < uVar2) {
        uVar2 = 0;
        *param_2 = 0;
        uVar1 = *param_1;
      }
      if (iVar4 < (int)(*param_3 + uVar1)) {
        *param_3 = iVar4 - uVar1;
        uVar2 = *param_2;
      }
      if ((int)(*param_4 + uVar2) <= iVar3) {
        return;
      }
      *param_4 = iVar3 - uVar2;
      return;
    }
  }
  if (*(int *)(*(int *)(DAT_000ac990 + 0xac8d8) + 0x3c) == 0) {
    return;
  }
  mm_camera_debug_log(2,1,DAT_000ac998 + 0xac8f0,0x84,DAT_000ac994 + 0xac8e8);
  return;
}

