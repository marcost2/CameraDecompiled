
/* qcamera::QCamera3HardwareInterface::supportBurstCapture(unsigned int) */

undefined4 qcamera::QCamera3HardwareInterface::supportBurstCapture(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  iVar3 = *(int *)(*(int *)(DAT_0004b0fc + 0x4b084) + param_1 * 4);
  uVar7 = *(uint *)(iVar3 + 0x708);
  iVar5 = *(int *)(iVar3 + 0x70c);
  uVar2 = 0;
  if ((int)(-(uint)(100000000 < uVar7) - iVar5) < 0 ==
      (SBORROW4(-iVar5,(uint)(100000000 < uVar7)) != false)) {
    if ((int)(iVar5 - (uint)(uVar7 < 0x2faf081)) < 0 !=
        (SBORROW4(iVar5,(uint)(uVar7 < 0x2faf081)) != false)) {
      return 1;
    }
    uVar7 = *(uint *)(iVar3 + 0x5c4);
    if (0x27 < uVar7) {
      uVar7 = 0x28;
    }
    uVar4 = 1;
    piVar1 = (int *)(iVar3 + 0x5d0);
    do {
      piVar6 = piVar1;
      if (uVar7 <= uVar4) break;
      uVar4 = uVar4 + 1;
      piVar1 = piVar6 + 2;
    } while (0x79ebff < piVar6[1] * *piVar6);
    uVar2 = 0;
    if ((int)(piVar6[0x4f] - (uint)((uint)piVar6[0x4e] < 0x2faf081)) < 0 !=
        (SBORROW4(piVar6[0x4f],(uint)((uint)piVar6[0x4e] < 0x2faf081)) != false)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

