
/* qcamera::QCamera3CropRegionMapper::boundToSize(int&, int&, int&, int&, int, int) */

void __thiscall
qcamera::QCamera3CropRegionMapper::boundToSize
          (QCamera3CropRegionMapper *this,int *param_1,int *param_2,int *param_3,int *param_4,
          int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0;
    *param_1 = 0;
  }
  uVar1 = *param_2;
  if (0x7fffffff < uVar1) {
    uVar1 = 0;
    *param_2 = 0;
    uVar2 = *param_1;
  }
  if (param_5 < (int)(*param_3 + uVar2)) {
    *param_3 = param_5 - uVar2;
    uVar1 = *param_2;
  }
  if (param_6 < (int)(*param_4 + uVar1)) {
    *param_4 = param_6 - uVar1;
  }
  return;
}

