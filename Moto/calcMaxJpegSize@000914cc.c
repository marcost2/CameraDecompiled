
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* qcamera::QCamera3HardwareInterface::calcMaxJpegSize(unsigned int) */

int qcamera::QCamera3HardwareInterface::calcMaxJpegSize(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 uVar13;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined in_q9 [16];
  undefined in_q10 [16];
  
  iVar7 = *(int *)(*(int *)(DAT_0009155c + 0x914d4) + param_1 * 4);
  uVar8 = *(uint *)(iVar7 + 0x5c8);
  if (0x27 < uVar8) {
    uVar8 = 0x28;
  }
  if (uVar8 == 0) {
    return 8;
  }
  if (uVar8 < 4) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = uVar8 & 0x3c;
    auVar11 = ZEXT816(0);
    puVar6 = (undefined4 *)(iVar7 + 0x5cc);
    uVar3 = uVar5;
    do {
      puVar1 = (undefined4 *)0x390;
      puVar2 = (undefined4 *)0x3a0;
      lVar10 = 2;
      puVar9 = puVar6;
      while( true ) {
        *puVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar9;
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x398;
      puVar2 = (undefined4 *)0x3a8;
      lVar10 = 2;
      while( true ) {
        *puVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar9;
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar6 = puVar6 + 8;
      uVar5 = uVar5 - 4;
      in_q9 = VectorMultiply(in_q10,in_q9,4);
      auVar11 = VectorMax(in_q9,auVar11,4,1);
    } while (uVar5 != 0);
    auVar12 = VectorMax(auVar11,SUB3216(CONCAT1616(auVar11,auVar11) >> 0x40,0),4,1);
    uVar13 = SUB164(auVar12 >> 0x20,0);
    auVar11 = ZEXT816(CONCAT44(uVar13,uVar13));
    auVar11 = VectorMax(auVar12,auVar11 & auVar11 << 0x40,4,1);
    uVar5 = VectorGetElement(SUB168(auVar11,0),0,4,0);
    if (uVar8 == uVar3) goto LAB_00091550;
  }
  do {
    uVar4 = *(int *)(iVar7 + 0x5d0 + uVar3 * 8) * *(int *)(iVar7 + 0x5cc + uVar3 * 8);
    if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
      uVar5 = uVar4;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar8);
LAB_00091550:
  return (uVar5 * 3 >> 1) + 8;
}

