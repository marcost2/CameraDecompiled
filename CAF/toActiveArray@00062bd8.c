
/* qcamera::QCamera3CropRegionMapper::toActiveArray(int&, int&, int&, int&) */

void __thiscall
qcamera::QCamera3CropRegionMapper::toActiveArray
          (QCamera3CropRegionMapper *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  int unaff_r4;
  int iVar1;
  
  if ((*(uint *)(this + 4) != 0) && (*(int *)(this + 8) != 0)) {
    iVar1 = *(int *)(this + 0xc);
    if (iVar1 != 0) {
      unaff_r4 = *(int *)(this + 0x10);
    }
    if (iVar1 != 0 && unaff_r4 != 0) {
      *param_1 = (uint)(*param_1 * iVar1) / *(uint *)(this + 4);
      *param_2 = (uint)(*param_2 * *(int *)(this + 0x10)) / *(uint *)(this + 8);
      *param_3 = (uint)(*(int *)(this + 0xc) * *param_3) / *(uint *)(this + 4);
      *param_4 = (uint)(*(int *)(this + 0x10) * *param_4) / *(uint *)(this + 8);
      boundToSize(*(QCamera3CropRegionMapper **)(this + 0x10),param_1,param_2,param_3,param_4,
                  *(int *)(this + 0xc),(int)*(QCamera3CropRegionMapper **)(this + 0x10));
      return;
    }
  }
  if (*(int *)(*(int *)(DAT_00062c70 + 0x62c08) + 0x3c) == 0) {
    return;
  }
  mm_camera_debug_log();
  return;
}

