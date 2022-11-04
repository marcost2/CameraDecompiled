
/* qcamera::QCamera3HardwareInterface::calcMaxJpegSize(unsigned int) */

int qcamera::QCamera3HardwareInterface::calcMaxJpegSize(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  iVar2 = *(int *)(*(int *)(DAT_0004afd8 + 0x4af86) + param_1 * 4);
  uVar5 = *(uint *)(iVar2 + 0x5c4);
  if (0x27 < uVar5) {
    uVar5 = 0x28;
  }
  if (uVar5 != 0) {
    piVar4 = (int *)(iVar2 + 0x5c8);
    uVar3 = 0;
    iVar2 = 0xb9;
    do {
      uVar1 = piVar4[1] * *piVar4;
      if (uVar3 <= uVar1 && uVar1 - uVar3 != 0) {
        uVar3 = uVar1;
      }
      piVar4 = piVar4 + 2;
      uVar1 = iVar2 - 0xb8;
      iVar2 = iVar2 + 1;
    } while (uVar1 < uVar5);
    return (uVar3 * 3 >> 1) + 8;
  }
  return 8;
}

