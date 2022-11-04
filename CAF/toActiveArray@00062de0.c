
/* qcamera::QCamera3CropRegionMapper::toActiveArray(unsigned int&, unsigned int&) */

void __thiscall
qcamera::QCamera3CropRegionMapper::toActiveArray
          (QCamera3CropRegionMapper *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r5;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar2 = *(uint *)(this + 4);
  if (uVar2 != 0) {
    uVar4 = *(uint *)(this + 8);
    if (uVar4 != 0) {
      unaff_r5 = *(int *)(this + 0xc);
    }
    if ((uVar4 != 0 && unaff_r5 != 0) && (*(int *)(this + 0x10) != 0)) {
      uVar3 = *param_1;
      bVar6 = uVar2 <= uVar3;
      bVar5 = uVar3 == uVar2;
      if (!bVar6 || bVar5) {
        bVar6 = uVar4 <= (uint)*param_2;
        bVar5 = *param_2 == uVar4;
      }
      if (!bVar6 || bVar5) {
        *param_1 = (uVar3 * unaff_r5) / uVar2;
        *param_2 = (uint)(*param_2 * *(int *)(this + 0x10)) / *(uint *)(this + 8);
        return;
      }
      iVar1 = *(int *)(*(int *)(DAT_00062e78 + 0x62e36) + 0x3c);
      goto joined_r0x00062e38;
    }
  }
  iVar1 = *(int *)(*(int *)(DAT_00062e6c + 0x62e00) + 0x3c);
joined_r0x00062e38:
  if (iVar1 == 0) {
    return;
  }
  mm_camera_debug_log();
  return;
}

