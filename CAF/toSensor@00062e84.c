
/* qcamera::QCamera3CropRegionMapper::toSensor(unsigned int&, unsigned int&) */

void __thiscall
qcamera::QCamera3CropRegionMapper::toSensor
          (QCamera3CropRegionMapper *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint unaff_r5;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (*(int *)(this + 4) != 0) {
    if (*(int *)(this + 8) != 0) {
      unaff_r5 = *(uint *)(this + 0xc);
    }
    if ((*(int *)(this + 8) != 0 && unaff_r5 != 0) && (uVar3 = *(uint *)(this + 0x10), uVar3 != 0))
    {
      uVar2 = *param_1;
      bVar5 = unaff_r5 <= uVar2;
      bVar4 = uVar2 == unaff_r5;
      if (!bVar5 || bVar4) {
        bVar5 = uVar3 <= (uint)*param_2;
        bVar4 = *param_2 == uVar3;
      }
      if (!bVar5 || bVar4) {
        *param_1 = (uVar2 * *(int *)(this + 4)) / unaff_r5;
        *param_2 = (uint)(*(int *)(this + 8) * *param_2) / *(uint *)(this + 0x10);
        return;
      }
      iVar1 = *(int *)(*(int *)(DAT_00062f20 + 0x62edc) + 0x3c);
      goto joined_r0x00062ede;
    }
  }
  iVar1 = *(int *)(*(int *)(DAT_00062f14 + 0x62ea4) + 0x3c);
joined_r0x00062ede:
  if (iVar1 == 0) {
    return;
  }
  mm_camera_debug_log();
  return;
}

