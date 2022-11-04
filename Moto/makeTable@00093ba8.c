
/* qcamera::QCamera3HardwareInterface::makeTable(cam_dimension_t*, unsigned int, unsigned int, int*)
    */

void qcamera::QCamera3HardwareInterface::makeTable
               (cam_dimension_t *param_1,uint param_2,uint param_3,int *param_4)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = param_2;
  if (param_3 < param_2) {
    uVar7 = param_3;
  }
  if (uVar7 == 0) {
    return;
  }
  if (3 < uVar7) {
    uVar5 = param_2;
    if (param_3 < param_2) {
      uVar5 = param_3;
    }
    lVar1 = (ulonglong)(uVar5 - 1) * 8;
    uVar5 = (uint)lVar1;
    iVar4 = (int)((ulonglong)lVar1 >> 0x20);
    if (iVar4 != 0) {
      iVar4 = 1;
    }
    if (((uVar5 <= ~(uint)param_4) && (iVar4 == 0)) && (uVar5 <= ~(uint)(param_4 + 1))) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      if ((param_1 + uVar7 * 8 <= param_4) ||
         (param_4 + (-2 - (param_2 << 1 ^ 0x3ffffffe)) <= param_1)) {
        uVar8 = uVar7 & 0xfffffffc;
        iVar4 = uVar8 << 1;
        uVar5 = uVar8;
        puVar3 = (undefined8 *)param_4;
        puVar6 = (undefined8 *)param_1;
        do {
          uVar9 = puVar6[1];
          uVar5 = uVar5 - 4;
          uVar10 = puVar6[2];
          uVar11 = puVar6[3];
          *puVar3 = *puVar6;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          puVar3 = puVar3 + 4;
          puVar6 = puVar6 + 4;
        } while (uVar5 != 0);
        if (uVar7 == uVar8) {
          return;
        }
        goto LAB_00093bc4;
      }
    }
  }
  uVar8 = 0;
  iVar4 = 0;
LAB_00093bc4:
  piVar2 = param_4 + iVar4 + 1;
  do {
    piVar2[-1] = *(int *)(param_1 + uVar8 * 8);
    iVar4 = uVar8 * 8;
    uVar8 = uVar8 + 1;
    *piVar2 = *(int *)(param_1 + iVar4 + 4);
    piVar2 = piVar2 + 2;
  } while (uVar8 < uVar7);
  return;
}

