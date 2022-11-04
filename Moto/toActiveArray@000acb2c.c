
/* qcamera::QCamera3CropRegionMapper::toActiveArray(unsigned int&, unsigned int&) */

void __thiscall
qcamera::QCamera3CropRegionMapper::toActiveArray
          (QCamera3CropRegionMapper *this,uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_r5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar3 = *(uint *)(this + 4);
  if (uVar3 != 0) {
    uVar6 = *(uint *)(this + 8);
    if (uVar6 != 0) {
      unaff_r5 = *(int *)(this + 0xc);
    }
    if ((uVar6 != 0 && unaff_r5 != 0) && (*(int *)(this + 0x10) != 0)) {
      uVar5 = *param_1;
      bVar8 = uVar3 <= uVar5;
      bVar7 = uVar5 == uVar3;
      if (!bVar8 || bVar7) {
        bVar8 = uVar6 <= *param_2;
        bVar7 = *param_2 == uVar6;
      }
      if (!bVar8 || bVar7) {
        *param_1 = (uVar5 * unaff_r5) / uVar3;
        *param_2 = (*param_2 * *(int *)(this + 0x10)) / *(uint *)(this + 8);
        return;
      }
      if (*(int *)(*(int *)(DAT_000acbc4 + 0xacb82) + 0x3c) == 0) {
        return;
      }
      iVar1 = DAT_000acbc8 + 0xacb8e;
      uVar4 = 0xeb;
      iVar2 = DAT_000acbcc + 0xacb9e;
      goto LAB_000acb60;
    }
  }
  if (*(int *)(*(int *)(DAT_000acbb8 + 0xacb4c) + 0x3c) == 0) {
    return;
  }
  uVar4 = 0xe5;
  iVar1 = DAT_000acbbc + 0xacb5a;
  iVar2 = DAT_000acbc0 + 0xacb62;
LAB_000acb60:
  mm_camera_debug_log(2,1,iVar2,uVar4,iVar1);
  return;
}

