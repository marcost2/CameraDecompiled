
/* qcamera::QCamera3HardwareInterface::getMaxRawSize(unsigned int) */

void qcamera::QCamera3HardwareInterface::getMaxRawSize(uint param_1)

{
  int iVar1;
  int in_r2;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar4 = *(int *)(*(int *)(DAT_0003ecc4 + 0x3ec82) + in_r2 * 4);
  if (*(int *)(iVar4 + 0x2ad8) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_0003ecc4 + 0x3ec82) + in_r2 * 4);
    uVar2 = *(uint *)(iVar1 + 0x2ad8);
    uVar3 = 0;
    iVar6 = 0;
    do {
      iVar4 = iVar4 + uVar3 * 8;
      iVar5 = *(int *)(iVar4 + 0x2adc);
      if (iVar6 < iVar5) {
        uVar7 = *(undefined4 *)(iVar4 + 0x2ae0);
        *(undefined4 *)param_1 = *(undefined4 *)(iVar4 + 0x2adc);
        *(undefined4 *)(param_1 + 4) = uVar7;
        iVar6 = iVar5;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar1;
    } while (uVar3 < uVar2);
  }
  return;
}

