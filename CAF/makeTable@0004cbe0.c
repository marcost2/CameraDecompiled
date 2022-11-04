
/* qcamera::QCamera3HardwareInterface::makeTable(cam_dimension_t*, unsigned int, unsigned int, int*)
    */

void qcamera::QCamera3HardwareInterface::makeTable
               (cam_dimension_t *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  if (param_3 < param_2) {
    param_2 = param_3;
  }
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      param_4[uVar1 * 2] = *(int *)(param_1 + uVar1 * 8);
      param_4[uVar1 * 2 + 1] = *(int *)(param_1 + uVar1 * 8 + 4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}

