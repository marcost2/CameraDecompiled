
/* qcamera::QCamera3HardwareInterface::makeFPSTable(cam_fps_range_t*, unsigned int, unsigned int,
   int*) */

void qcamera::QCamera3HardwareInterface::makeFPSTable
               (cam_fps_range_t *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  float *pfVar2;
  
  if (param_3 < param_2) {
    param_2 = param_3;
  }
  if (param_2 != 0) {
    pfVar2 = (float *)(param_1 + 4);
    uVar1 = 0;
    do {
      param_4[uVar1 * 2] = (int)ROUND(pfVar2[-1]);
      param_4[uVar1 * 2 + 1] = (int)ROUND(*pfVar2);
      pfVar2 = pfVar2 + 4;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}

