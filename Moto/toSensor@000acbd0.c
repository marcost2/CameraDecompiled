
/* qcamera::QCamera3CropRegionMapper::toSensor(unsigned int&, unsigned int&) */

void __thiscall
qcamera::QCamera3CropRegionMapper::toSensor
          (QCamera3CropRegionMapper *this,uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_r5;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)(this + 4) != 0) {
    if (*(int *)(this + 8) != 0) {
      unaff_r5 = *(uint *)(this + 0xc);
    }
    if ((*(int *)(this + 8) != 0 && unaff_r5 != 0) && (uVar5 = *(uint *)(this + 0x10), uVar5 != 0))
    {
      uVar4 = *param_1;
      bVar7 = unaff_r5 <= uVar4;
      bVar6 = uVar4 == unaff_r5;
      if (!bVar7 || bVar6) {
        bVar7 = uVar5 <= *param_2;
        bVar6 = *param_2 == uVar5;
      }
      if (!bVar7 || bVar6) {
        *param_1 = (uVar4 * *(int *)(this + 4)) / unaff_r5;
        *param_2 = (*(int *)(this + 8) * *param_2) / *(uint *)(this + 0x10);
        return;
      }
      if (*(int *)(*(int *)(DAT_000acc6c + 0xacc28) + 0x3c) == 0) {
        return;
      }
      iVar1 = DAT_000acc70 + 0xacc34;
      uVar3 = 0x109;
      iVar2 = DAT_000acc74 + 0xacc46;
      goto LAB_000acc06;
    }
  }
  if (*(int *)(*(int *)(DAT_000acc60 + 0xacbf0) + 0x3c) == 0) {
    return;
  }
  uVar3 = 0x102;
  iVar1 = DAT_000acc64 + 0xacc00;
  iVar2 = DAT_000acc68 + 0xacc08;
LAB_000acc06:
  mm_camera_debug_log(2,1,iVar2,uVar3,iVar1);
  return;
}

