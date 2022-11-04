
/* qcamera::QCamera3CropRegionMapper::boundToSize(int&, int&, int&, int&, int, int) */

void __thiscall
qcamera::QCamera3CropRegionMapper::boundToSize
          (QCamera3CropRegionMapper *this,int *param_1,int *param_2,int *param_3,int *param_4,
          int param_5,int param_6)

{
  if (0x7fffffff < (uint)*param_1) {
    *param_1 = 0;
  }
  if (0x7fffffff < (uint)*param_2) {
    *param_2 = 0;
  }
  if (param_5 < *param_3 + *param_1) {
    *param_3 = param_5 - *param_1;
  }
  if (param_6 < *param_4 + *param_2) {
    *param_4 = param_6 - *param_2;
  }
  return;
}

