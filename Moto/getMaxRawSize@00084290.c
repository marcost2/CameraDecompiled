
/* qcamera::QCamera3HardwareInterface::getMaxRawSize(unsigned int) */

void qcamera::QCamera3HardwareInterface::getMaxRawSize(uint param_1)

{
  int iVar1;
  int iVar2;
  int in_r2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(*(int *)(DAT_000842e0 + 0x8429e) + in_r2 * 4);
  uVar4 = *(uint *)(iVar1 + 0x2ae8);
  if (uVar4 != 0) {
    uVar3 = 0;
    iVar5 = 0;
    iVar1 = iVar1 + 0x2aec;
    do {
      iVar2 = *(int *)(iVar1 + uVar3 * 8);
      if (iVar5 < iVar2) {
        uVar6 = *(undefined4 *)(iVar1 + uVar3 * 8 + 4);
        *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + uVar3 * 8);
        *(undefined4 *)(param_1 + 4) = uVar6;
        iVar5 = iVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return;
}

