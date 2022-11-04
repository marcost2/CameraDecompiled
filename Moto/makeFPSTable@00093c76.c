
/* qcamera::QCamera3HardwareInterface::makeFPSTable(cam_fps_range_t*, unsigned int, unsigned int,
   int*) */

void qcamera::QCamera3HardwareInterface::makeFPSTable
               (cam_fps_range_t *param_1,uint param_2,uint param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  float fVar20;
  undefined4 uVar21;
  
  uVar16 = param_2;
  if (param_3 < param_2) {
    uVar16 = param_3;
  }
  if (uVar16 == 0) {
    return;
  }
  if (3 < uVar16) {
    uVar14 = param_2;
    if (param_3 < param_2) {
      uVar14 = param_3;
    }
    lVar19 = (ulonglong)(uVar14 - 1) * 8;
    uVar14 = (uint)lVar19;
    iVar13 = (int)((ulonglong)lVar19 >> 0x20);
    if (iVar13 != 0) {
      iVar13 = 1;
    }
    if (((uVar14 <= ~(uint)param_4) && (iVar13 == 0)) && (uVar14 <= ~(uint)(param_4 + 1))) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      if ((param_1 + uVar16 * 0x10 + -8 <= param_4) ||
         (param_4 + (-2 - (param_2 << 1 ^ 0x3ffffffe)) <= param_1)) {
        uVar17 = uVar16 & 0xfffffffc;
        puVar12 = (undefined4 *)(param_1 + 0x34);
        iVar13 = uVar17 << 1;
        uVar14 = uVar17;
        piVar15 = param_4;
        do {
          uVar21 = *puVar12;
          puVar1 = puVar12 + -1;
          uVar14 = uVar14 - 4;
          puVar2 = puVar12 + -4;
          puVar3 = puVar12 + -5;
          puVar4 = puVar12 + -8;
          puVar5 = puVar12 + -9;
          puVar6 = puVar12 + -0xc;
          puVar7 = puVar12 + -0xd;
          puVar12 = puVar12 + 0x10;
          FPToFixed(CONCAT412(uVar21,CONCAT48(*puVar2,CONCAT44(*puVar4,*puVar6))),0x20,0x20,0,0,3);
          FPToFixed(CONCAT412(*puVar1,CONCAT48(*puVar3,CONCAT44(*puVar5,*puVar7))),0x20,0x20,0,0,3);
          piVar8 = (int *)0x380;
          piVar9 = (int *)0x390;
          lVar19 = 2;
          piVar18 = piVar15;
          while( true ) {
            *piVar18 = *piVar8;
            piVar18[1] = *piVar9;
            piVar18 = piVar18 + 2;
            lVar19 = lVar19 + -1;
            if (lVar19 == 0) break;
            piVar8 = piVar8 + 1;
            piVar9 = piVar9 + 1;
          }
          piVar8 = (int *)0x388;
          piVar9 = (int *)0x398;
          lVar19 = 2;
          while( true ) {
            *piVar18 = *piVar8;
            piVar18[1] = *piVar9;
            piVar18 = piVar18 + 2;
            lVar19 = lVar19 + -1;
            if (lVar19 == 0) break;
            piVar8 = piVar8 + 1;
            piVar9 = piVar9 + 1;
          }
          piVar15 = piVar15 + 8;
        } while (uVar14 != 0);
        if (uVar16 == uVar17) {
          return;
        }
        goto LAB_00093c92;
      }
    }
  }
  uVar17 = 0;
  iVar13 = 0;
LAB_00093c92:
  pfVar11 = (float *)(param_4 + iVar13 + 1);
  pfVar10 = (float *)(param_1 + uVar17 * 0x10 + 4);
  do {
    uVar17 = uVar17 + 1;
    pfVar11[-1] = ROUND(pfVar10[-1]);
    fVar20 = *pfVar10;
    pfVar10 = pfVar10 + 4;
    *pfVar11 = ROUND(fVar20);
    pfVar11 = pfVar11 + 2;
  } while (uVar17 < uVar16);
  return;
}

