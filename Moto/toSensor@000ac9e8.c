
/* qcamera::QCamera3CropRegionMapper::toSensor(int&, int&, int&, int&) */

void __thiscall
qcamera::QCamera3CropRegionMapper::toSensor
          (QCamera3CropRegionMapper *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  
  if (*(int *)(this + 4) != 0) {
    uVar2 = *(uint *)(this + 8);
    bVar8 = uVar2 != 0;
    if (bVar8) {
      uVar2 = *(uint *)(this + 0xc);
    }
    if ((bVar8 && uVar2 != 0) && (*(int *)(this + 0x10) != 0)) {
      *param_1 = (uint)(*param_1 * *(int *)(this + 4)) / uVar2;
      *param_2 = (uint)(*(int *)(this + 8) * *param_2) / *(uint *)(this + 0x10);
      *param_3 = (uint)(*(int *)(this + 4) * *param_3) / *(uint *)(this + 0xc);
      uVar2 = (uint)(*(int *)(this + 8) * *param_4) / *(uint *)(this + 0x10);
      *param_4 = uVar2;
      iVar1 = *(int *)(DAT_000acb18 + 0xaca76);
      if (*(int *)(iVar1 + 0x48) != 0) {
        mm_camera_debug_log(2,4,DAT_000acb20 + 0xacaa0,0xae,DAT_000acb1c + 0xaca8c,*param_1,*param_2
                            ,*param_3,uVar2);
      }
      uVar2 = *param_1;
      iVar4 = *(int *)(this + 4);
      iVar5 = *(int *)(this + 8);
      if (0x7fffffff < uVar2) {
        uVar2 = 0;
        *param_1 = 0;
      }
      uVar7 = *param_2;
      if (0x7fffffff < uVar7) {
        uVar7 = 0;
        *param_2 = 0;
        uVar2 = *param_1;
      }
      if (iVar4 < (int)(*param_3 + uVar2)) {
        *param_3 = iVar4 - uVar2;
        uVar7 = *param_2;
      }
      if (iVar5 < (int)(*param_4 + uVar7)) {
        *param_4 = iVar5 - uVar7;
      }
      if (*(int *)(iVar1 + 0x48) == 0) {
        return;
      }
      iVar1 = DAT_000acb24 + 0xacaf0;
      uVar3 = 4;
      uVar6 = 0xb2;
      iVar5 = DAT_000acb28 + 0xacb04;
      goto LAB_000aca20;
    }
  }
  if (*(int *)(*(int *)(DAT_000acb0c + 0xaca0a) + 0x3c) == 0) {
    return;
  }
  uVar3 = 1;
  uVar6 = 0xa4;
  iVar1 = DAT_000acb10 + 0xaca1a;
  iVar5 = DAT_000acb14 + 0xaca22;
LAB_000aca20:
  mm_camera_debug_log(2,uVar3,iVar5,uVar6,iVar1);
  return;
}

