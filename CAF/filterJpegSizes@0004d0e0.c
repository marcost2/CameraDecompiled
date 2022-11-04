
/* qcamera::QCamera3HardwareInterface::filterJpegSizes(int*, int*, unsigned int, unsigned int,
   cam_rect_t, unsigned char) */

int qcamera::QCamera3HardwareInterface::filterJpegSizes
              (int *param_1,int *param_2,uint param_3,uint param_4,cam_rect_t param_5,uchar param_6)

{
  int iVar1;
  uint uVar2;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  if (param_4 < param_3) {
    param_3 = param_4;
  }
  if (in_stack_00000010 == 0) {
    in_stack_00000010 = 1;
  }
  if (param_3 != 0) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      if (((int)(in_stack_00000008 / in_stack_00000010) <= param_2[uVar2]) &&
         ((int)(in_stack_0000000c / in_stack_00000010) <= param_2[uVar2 + 1])) {
        param_1[iVar1] = param_2[uVar2];
        param_1[iVar1 + 1] = param_2[uVar2 + 1];
        iVar1 = iVar1 + 2;
      }
      uVar2 = uVar2 + 2;
    } while (uVar2 < param_3);
    return iVar1;
  }
  return 0;
}

