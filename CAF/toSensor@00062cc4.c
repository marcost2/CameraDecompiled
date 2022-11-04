
/* qcamera::QCamera3CropRegionMapper::toSensor(int&, int&, int&, int&) */

void __thiscall
qcamera::QCamera3CropRegionMapper::toSensor
          (QCamera3CropRegionMapper *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(int *)(this + 4) != 0) {
    uVar2 = *(uint *)(this + 8);
    bVar3 = uVar2 != 0;
    if (bVar3) {
      uVar2 = *(uint *)(this + 0xc);
    }
    if ((bVar3 && uVar2 != 0) && (*(int *)(this + 0x10) != 0)) {
      *param_1 = (uint)(*param_1 * *(int *)(this + 4)) / uVar2;
      *param_2 = (uint)(*(int *)(this + 8) * *param_2) / *(uint *)(this + 0x10);
      *param_3 = (uint)(*(int *)(this + 4) * *param_3) / *(uint *)(this + 0xc);
      *param_4 = (uint)(*(int *)(this + 8) * *param_4) / *(uint *)(this + 0x10);
      iVar1 = *(int *)(DAT_00062dcc + 0x62d52);
      if (*(int *)(iVar1 + 0x48) != 0) {
        mm_camera_debug_log();
      }
      boundToSize(*(QCamera3CropRegionMapper **)(this + 4),param_1,param_2,param_3,param_4,
                  (int)*(QCamera3CropRegionMapper **)(this + 4),*(int *)(this + 8));
      iVar1 = *(int *)(iVar1 + 0x48);
      goto joined_r0x00062d96;
    }
  }
  iVar1 = *(int *)(*(int *)(DAT_00062dc0 + 0x62ce6) + 0x3c);
joined_r0x00062d96:
  if (iVar1 != 0) {
    mm_camera_debug_log();
    return;
  }
  return;
}

