
/* qcamera::QCamera3CropRegionMapper::update(unsigned int, unsigned int, unsigned int, unsigned int)
    */

void __thiscall
qcamera::QCamera3CropRegionMapper::update
          (QCamera3CropRegionMapper *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_2 == 0 || param_3 == 0)) || (param_4 == 0)) {
    iVar1 = *(int *)(*(int *)(DAT_00062bb4 + 0x62b3c) + 0x3c);
  }
  else if (param_1 < param_3 || param_2 < param_4) {
    iVar1 = *(int *)(*(int *)(DAT_00062bc0 + 0x62b70) + 0x3c);
  }
  else {
    *(uint *)(this + 4) = param_3;
    *(uint *)(this + 8) = param_4;
    *(uint *)(this + 0xc) = param_1;
    *(uint *)(this + 0x10) = param_2;
    iVar1 = *(int *)(*(int *)(DAT_00062bcc + 0x62b96) + 0x44);
  }
  if (iVar1 == 0) {
    return;
  }
  mm_camera_debug_log();
  return;
}

