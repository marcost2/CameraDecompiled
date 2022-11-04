
/* qcamera::QCameraParameters::QCameraReprocScaleParam::setScaleSizeTbl(unsigned int,
   cam_dimension_t*, unsigned int, cam_dimension_t*) */

undefined4 __thiscall
qcamera::QCameraParameters::QCameraReprocScaleParam::setScaleSizeTbl
          (QCameraReprocScaleParam *this,uint param_1,cam_dimension_t *param_2,uint param_3,
          cam_dimension_t *param_4)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint unaff_r7;
  uint uVar9;
  int iVar10;
  
  *(undefined4 *)(this + 0xc) = 0;
  if ((param_4 == (cam_dimension_t *)0x0) || (param_3 == 0 || param_2 == (cam_dimension_t *)0x0)) {
    return 0xffffffea;
  }
  if (param_1 != 0) {
    unaff_r7 = (uint)(byte)*this;
  }
  if (param_1 == 0 || unaff_r7 == 0) {
    return 0xffffffea;
  }
  *(uint *)(this + 0x50) = param_3;
  *(cam_dimension_t **)(this + 0x54) = param_4;
  dVar1 = DAT_000efd20;
  if ((int)(param_1 - 1) < 0) {
LAB_000efc2c:
    *(undefined4 *)(this + 0xc) = 0;
  }
  else {
    piVar7 = (int *)(param_2 + param_1 * 8 + -4);
    iVar2 = *(int *)param_4;
    do {
      uVar9 = param_1;
      if ((iVar2 < piVar7[-1]) || ((piVar7[-1] == iVar2 && (*(int *)(param_4 + 4) < *piVar7))))
      break;
      uVar9 = param_1 - 1;
      piVar7 = piVar7 + -2;
      uVar4 = param_1 - 2;
      param_1 = uVar9;
    } while (uVar4 < 0x80000000);
    iVar10 = *(int *)(param_4 + 4);
    if ((int)uVar9 < 1) goto LAB_000efc2c;
    piVar7 = (int *)(param_2 + 4);
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      if (ABS((double)(longlong)iVar2 / (double)(longlong)iVar10 -
              (double)(longlong)piVar7[-1] / (double)(longlong)*piVar7) < dVar1) {
        uVar3 = uVar4 + 1;
        *(int *)(this + uVar4 * 8 + 0x10) = piVar7[-1];
        *(int *)(this + uVar4 * 8 + 0x14) = *piVar7;
      }
      piVar7 = piVar7 + 2;
      uVar9 = uVar9 - 1;
      uVar4 = uVar3;
    } while (uVar9 != 0);
    *(uint *)(this + 0xc) = uVar3;
    if (uVar3 != 0) {
      if (uVar3 + param_3 < 0x29) {
        *(uint *)(this + 0x58) = uVar3 + param_3;
        if (uVar3 < 9) {
          uVar9 = 0;
          iVar10 = *(int *)(DAT_000efd40 + 0xefc8a);
          iVar2 = DAT_000efd44 + 0xefc92;
          iVar8 = DAT_000efd48 + 0xefc94;
          do {
            *(undefined4 *)(this + uVar9 * 8 + 0x5c) = *(undefined4 *)(this + uVar9 * 8 + 0x10);
            *(undefined4 *)(this + uVar9 * 8 + 0x60) = *(undefined4 *)(this + uVar9 * 8 + 0x14);
            if (*(int *)(iVar10 + 0x28) != 0) {
              mm_camera_debug_log(1,3,iVar8,0x34ff,iVar2,uVar9,
                                  *(undefined4 *)(this + uVar9 * 8 + 0x10),
                                  *(undefined4 *)(this + uVar9 * 8 + 0x14));
            }
            uVar4 = *(uint *)(this + 0xc);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar4);
          if (uVar9 < *(uint *)(this + 0x58)) {
            iVar2 = DAT_000efd4c + 0xefcd0;
            iVar8 = DAT_000efd50 + 0xefcd2;
            while( true ) {
              uVar6 = *(undefined4 *)(param_4 + uVar9 * 8 + uVar4 * -8);
              *(undefined4 *)(this + uVar9 * 8 + 0x5c) = uVar6;
              uVar5 = *(undefined4 *)(param_4 + uVar9 * 8 + *(int *)(this + 0xc) * -8 + 4);
              *(undefined4 *)(this + uVar9 * 8 + 0x60) = uVar5;
              if (*(int *)(iVar10 + 0x28) != 0) {
                mm_camera_debug_log(1,3,iVar8,0x3505,iVar2,uVar9,uVar6,uVar5);
              }
              uVar9 = uVar9 + 1;
              if (*(uint *)(this + 0x58) <= uVar9) break;
              uVar4 = *(uint *)(this + 0xc);
            }
          }
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000efd54 + 0xefc66) + 0x20) == 0) {
          return 0xffffffea;
        }
        uVar6 = 0x34f7;
        iVar2 = DAT_000efd58 + 0xefc76;
        iVar10 = DAT_000efd5c + 0xefc82;
      }
      else {
        if (*(int *)(*(int *)(DAT_000efd34 + 0xefc14) + 0x20) == 0) {
          return 0xffffffea;
        }
        uVar6 = 0x34ee;
        iVar2 = DAT_000efd38 + 0xefc24;
        iVar10 = DAT_000efd3c + 0xefc2c;
      }
      goto LAB_000efc4c;
    }
  }
  if (*(int *)(*(int *)(DAT_000efd28 + 0xefc36) + 0x20) == 0) {
    return 0xffffffea;
  }
  uVar6 = 0x34e9;
  iVar2 = DAT_000efd2c + 0xefc46;
  iVar10 = DAT_000efd30 + 0xefc4e;
LAB_000efc4c:
  mm_camera_debug_log(1,1,iVar10,uVar6,iVar2);
  return 0xffffffea;
}

