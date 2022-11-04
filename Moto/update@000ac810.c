
/* qcamera::QCamera3CropRegionMapper::update(unsigned int, unsigned int, unsigned int, unsigned int)
    */

void __thiscall
qcamera::QCamera3CropRegionMapper::update
          (QCamera3CropRegionMapper *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((param_1 == 0) || (param_2 == 0 || param_3 == 0)) || (param_4 == 0)) {
    if (*(int *)(*(int *)(DAT_000ac89c + 0xac824) + 0x3c) == 0) {
      return;
    }
    uVar2 = 1;
    uVar4 = 0x61;
    iVar1 = DAT_000ac8a0 + 0xac832;
    iVar3 = DAT_000ac8a4 + 0xac83a;
  }
  else if (param_1 < param_3 || param_2 < param_4) {
    if (*(int *)(*(int *)(DAT_000ac8a8 + 0xac858) + 0x3c) == 0) {
      return;
    }
    iVar1 = DAT_000ac8ac + 0xac862;
    uVar2 = 1;
    uVar4 = 0x66;
    iVar3 = DAT_000ac8b0 + 0xac870;
  }
  else {
    *(uint *)(this + 4) = param_3;
    *(uint *)(this + 8) = param_4;
    *(uint *)(this + 0xc) = param_1;
    *(uint *)(this + 0x10) = param_2;
    if (*(int *)(*(int *)(DAT_000ac8b4 + 0xac87e) + 0x44) == 0) {
      return;
    }
    iVar1 = DAT_000ac8b8 + 0xac888;
    uVar2 = 3;
    uVar4 = 0x6f;
    iVar3 = DAT_000ac8bc + 0xac896;
  }
  mm_camera_debug_log(2,uVar2,iVar3,uVar4,iVar1);
  return;
}

