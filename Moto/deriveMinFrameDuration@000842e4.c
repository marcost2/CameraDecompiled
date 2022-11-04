
/* qcamera::QCamera3HardwareInterface::deriveMinFrameDuration() */

void __thiscall
qcamera::QCamera3HardwareInterface::deriveMinFrameDuration(QCamera3HardwareInterface *this)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  puVar5 = *(undefined4 **)(this + 0x3fc);
  puVar1 = (undefined4 *)puVar5[2];
  if (puVar1 == puVar5) {
    iVar4 = 0;
    iVar12 = 0;
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    iVar12 = 0;
    iVar4 = 0;
    do {
      piVar9 = *(int **)*puVar1;
      if (*piVar9 != 1) {
        iVar8 = piVar9[3];
        iVar10 = piVar9[2] * piVar9[1];
        if ((iVar8 - 0x24U < 2) || (iVar8 == 0x20)) {
          if (iVar10 - iVar4 != 0 && iVar4 <= iVar10) {
            iVar4 = iVar10;
          }
        }
        else if (iVar8 == 0x21) {
          if (iVar10 - iVar13 != 0 && iVar13 <= iVar10) {
            iVar13 = iVar10;
          }
        }
        else if (iVar10 - iVar12 != 0 && iVar12 <= iVar10) {
          iVar12 = iVar10;
        }
      }
      puVar1 = (undefined4 *)puVar1[2];
    } while (puVar1 != puVar5);
  }
  if (iVar12 < iVar13) {
    iVar12 = iVar13;
  }
  iVar8 = *(int *)(this + 0x60);
  iVar10 = *(int *)(DAT_00084430 + 0x84358);
  iVar13 = *(int *)(iVar10 + iVar8 * 4);
  uVar2 = *(uint *)(iVar13 + 0x2ae8);
  if (0x27 < uVar2) {
    uVar2 = 0x28;
  }
  if (iVar4 < iVar12) {
    if (uVar2 == 0) goto LAB_000843d8;
    uVar11 = 0;
    iVar4 = 0x7fffffff;
    do {
      iVar6 = *(int *)(iVar13 + 0x2aec + uVar11 * 8) * *(int *)(iVar13 + 0x2af0 + uVar11 * 8);
      iVar7 = iVar4;
      if (iVar6 < iVar4) {
        iVar7 = iVar6;
      }
      if (iVar12 <= iVar6) {
        iVar4 = iVar7;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  else if (uVar2 == 0) goto LAB_000843d8;
  uVar11 = 0;
  piVar9 = (int *)(iVar13 + 0x2aec);
  do {
    if (iVar4 == piVar9[1] * *piVar9) {
      iVar4 = piVar9[0xce];
      *(int *)(this + 0x410) = piVar9[0xcd];
      *(int *)(this + 0x414) = iVar4;
      iVar13 = *(int *)(iVar10 + iVar8 * 4);
      break;
    }
    piVar9 = piVar9 + 2;
    uVar11 = uVar11 + 1;
  } while (uVar11 < uVar2);
LAB_000843d8:
  uVar2 = *(uint *)(iVar13 + 0x5c8);
  if (0x27 < uVar2) {
    uVar2 = 0x28;
  }
  if (uVar2 != 0) {
    uVar11 = 0;
    iVar4 = 0x5cc;
    do {
      if (iVar12 == *(int *)(iVar13 + uVar11 * 8 + 0x5d0) * *(int *)(iVar13 + iVar4)) {
        uVar3 = *(undefined4 *)(iVar13 + iVar4 + 0x144);
        *(undefined4 *)(this + 0x404) = *(undefined4 *)(iVar13 + iVar4 + 0x148);
        *(undefined4 *)(this + 0x400) = uVar3;
        iVar4 = *(int *)(iVar10 + iVar8 * 4) + iVar4;
        uVar3 = *(undefined4 *)(iVar4 + 0x144);
        *(undefined4 *)(this + 0x40c) = *(undefined4 *)(iVar4 + 0x148);
        *(undefined4 *)(this + 0x408) = uVar3;
        return;
      }
      iVar4 = iVar4 + 8;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  return;
}

