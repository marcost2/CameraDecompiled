
/* qcamera::QCamera3HardwareInterface::filterJpegSizes(int*, int*, unsigned int, unsigned int,
   cam_rect_t, unsigned char) */

int qcamera::QCamera3HardwareInterface::filterJpegSizes
              (int *param_1,int *param_2,uint param_3,uint param_4,cam_rect_t param_5,uchar param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
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
    uVar3 = 0;
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      if (((int)(in_stack_00000008 / in_stack_00000010) <= param_2[uVar3]) &&
         ((int)(in_stack_0000000c / in_stack_00000010) <= param_2[uVar3 + 1])) {
        param_1[iVar1] = param_2[uVar3];
        iVar2 = iVar1 + 2;
        param_1[iVar1 + 1] = param_2[uVar3 + 1];
      }
      uVar3 = uVar3 + 2;
      iVar1 = iVar2;
    } while (uVar3 < param_3);
    return iVar2;
  }
  return 0;
}

