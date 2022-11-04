
/* qcamera::QCamera3HardwareInterface::calcMaxJpegDim() */

void qcamera::QCamera3HardwareInterface::calcMaxJpegDim(void)

{
  int *in_r0;
  int in_r1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  *in_r0 = 0;
  in_r0[1] = 0;
  iVar1 = *(int *)(*(int *)(DAT_0004b02c + 0x4afea) + *(int *)(in_r1 + 0x4c) * 4);
  if (*(int *)(iVar1 + 0x5c4) != 0) {
    iVar6 = *(int *)(*(int *)(DAT_0004b02c + 0x4afea) + *(int *)(in_r1 + 0x4c) * 4);
    uVar5 = *(uint *)(iVar6 + 0x5c4);
    uVar3 = 0;
    do {
      iVar1 = iVar1 + uVar3 * 8;
      iVar2 = *(int *)(iVar1 + 0x5c8);
      iVar1 = *(int *)(iVar1 + 0x5cc);
      iVar4 = iVar1 * iVar2;
      if (iVar4 - in_r0[1] * *in_r0 != 0 && in_r0[1] * *in_r0 <= iVar4) {
        *in_r0 = iVar2;
        in_r0[1] = iVar1;
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar6;
    } while (uVar3 < uVar5);
  }
  return;
}

