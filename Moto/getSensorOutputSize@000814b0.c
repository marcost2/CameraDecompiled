
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* qcamera::QCamera3HardwareInterface::getSensorOutputSize(cam_dimension_t&) */

int __thiscall
qcamera::QCamera3HardwareInterface::getSensorOutputSize
          (QCamera3HardwareInterface *this,cam_dimension_t *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  undefined *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 uVar18;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined in_q10 [16];
  undefined in_q11 [16];
  undefined local_38 [16];
  cam_dimension_t *local_28;
  
  piVar13 = (int *)local_38;
  puVar12 = local_38;
  uVar3 = *(uint *)(this + 0x2c8);
  local_28 = param_1;
  if (uVar3 == 0) {
    iVar9 = 0;
    iVar11 = 0;
  }
  else {
    if (uVar3 < 4) {
      uVar5 = 0;
      iVar11 = 0;
      iVar9 = 0;
      puVar12 = local_38;
    }
    else {
      uVar5 = uVar3 & 0xfffffffc;
      auVar16 = ZEXT816(0);
      puVar6 = (undefined4 *)(this + 0x288);
      auVar19 = ZEXT816(0);
      uVar8 = uVar5;
      do {
        puVar1 = (undefined4 *)0x3a0;
        puVar2 = (undefined4 *)0x3b0;
        lVar15 = 2;
        puVar14 = puVar6;
        while( true ) {
          *puVar1 = *puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar14;
          puVar14 = puVar14 + 1;
          lVar15 = lVar15 + -1;
          if (lVar15 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x3a8;
        puVar2 = (undefined4 *)0x3b8;
        lVar15 = 2;
        while( true ) {
          *puVar1 = *puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar14;
          puVar14 = puVar14 + 1;
          lVar15 = lVar15 + -1;
          if (lVar15 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar6 = puVar6 + 8;
        uVar8 = uVar8 - 4;
        auVar19 = VectorMax(in_q11,auVar19,4,0);
        auVar16 = VectorMax(in_q10,auVar16,4,0);
      } while (uVar8 != 0);
      auVar17 = VectorMax(auVar16,SUB3216(CONCAT1616(auVar16,auVar16) >> 0x40,0),4,0);
      auVar20 = VectorMax(auVar19,SUB3216(CONCAT1616(auVar16,auVar19) >> 0x40,0),4,0);
      uVar18 = SUB164(auVar17 >> 0x20,0);
      auVar16 = ZEXT816(CONCAT44(uVar18,uVar18));
      uVar18 = SUB164(auVar20 >> 0x20,0);
      auVar19 = ZEXT816(CONCAT44(uVar18,uVar18));
      auVar16 = VectorMax(auVar17,auVar16 & auVar16 << 0x40,4,0);
      auVar19 = VectorMax(auVar20,auVar19 & auVar19 << 0x40,4,0);
      iVar11 = VectorGetElement(SUB168(auVar16,0),0,4,0);
      iVar9 = VectorGetElement(SUB168(auVar19,0),0,4,0);
      piVar13 = (int *)puVar12;
      if (uVar3 == uVar5) goto LAB_0008153a;
    }
    do {
      if (iVar9 < *(int *)(this + uVar5 * 8 + 0x28c)) {
        iVar9 = *(int *)(this + uVar5 * 8 + 0x28c);
      }
      if (iVar11 < *(int *)(this + uVar5 * 8 + 0x288)) {
        iVar11 = *(int *)(this + uVar5 * 8 + 0x288);
      }
      uVar5 = uVar5 + 1;
      piVar13 = (int *)puVar12;
    } while (uVar5 < uVar3);
  }
LAB_0008153a:
  pvVar10 = *(void **)(this + 0x1b4);
  if (pvVar10 == (void *)0x0) {
LAB_00081612:
    *piVar13 = 0x2d;
    __android_log_print(6,DAT_00081770 + 0x81622,DAT_00081774 + 0x81624,0);
    if (*(int *)(*(int *)(DAT_00081778 + 0x8162c) + 0x20) != 0) {
      *piVar13 = DAT_0008177c + 0x8163c;
      mm_camera_debug_log(1,1,DAT_00081780 + 0x81644,0x60b);
    }
    return -1;
  }
  __aeabi_memclr8(pvVar10,0x10f);
  *(undefined *)((int)pvVar10 + 0x117aec) = 0;
  *(undefined *)((int)pvVar10 + 0x106974) = 0;
  *(undefined *)((int)pvVar10 + 0xe1f78) = 0;
  *(undefined *)((int)pvVar10 + 0xcfa74) = 0;
  *(undefined *)((int)pvVar10 + 0xcfa08) = 0;
  *(undefined *)((int)pvVar10 + 0xc36b0) = 0;
  *(undefined *)((int)pvVar10 + 0xb86e0) = 0;
  *(undefined *)((int)pvVar10 + 0xb7340) = 0;
  *(undefined *)((int)pvVar10 + 0xb72e8) = 0;
  *(undefined *)((int)pvVar10 + 0x772c8) = 0;
  iVar4 = *(int *)(this + 0x1b4);
  if (iVar4 == 0) goto LAB_00081612;
  *(int *)("updateImpl" + iVar4 + 9) = iVar9;
  *(int *)("updateImpl" + iVar4 + 5) = iVar11;
  *(undefined *)(*(int *)(this + 0x1b4) + 0x2d) = 1;
  iVar9 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x18))
                    (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x1b4));
  if (iVar9 != 0) {
    if (*(int *)(*(int *)(DAT_00081784 + 0x815f6) + 0x20) == 0) {
      return iVar9;
    }
    *piVar13 = DAT_00081788 + 0x81606;
    mm_camera_debug_log(1,1,DAT_0008178c + 0x8160e,0x611);
    return iVar9;
  }
  pvVar10 = *(void **)(this + 0x1b4);
  if (pvVar10 != (void *)0x0) {
    __aeabi_memclr8(pvVar10,0x10f);
    *(undefined *)((int)pvVar10 + 0x117aec) = 0;
    *(undefined *)((int)pvVar10 + 0x106974) = 0;
    *(undefined *)((int)pvVar10 + 0xe1f78) = 0;
    *(undefined *)((int)pvVar10 + 0xcfa74) = 0;
    *(undefined *)((int)pvVar10 + 0xcfa08) = 0;
    *(undefined *)((int)pvVar10 + 0xc36b0) = 0;
    *(undefined *)((int)pvVar10 + 0xb86e0) = 0;
    *(undefined *)((int)pvVar10 + 0xb7340) = 0;
    *(undefined *)((int)pvVar10 + 0xb72e8) = 0;
    *(undefined *)((int)pvVar10 + 0x772c8) = 0;
    if (*(int *)(this + 0x1b4) != 0) {
      *(undefined *)(*(int *)(this + 0x1b4) + 0x2e) = 1;
      goto LAB_000816d2;
    }
  }
  *piVar13 = 0x2e;
  __android_log_print(6,DAT_00081790 + 0x816ce,DAT_00081794 + 0x816d0,0);
LAB_000816d2:
  iVar9 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x1c))
                    (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x1b4));
  if (iVar9 == 0) {
    iVar9 = *(int *)(this + 0x1b4);
    if (iVar9 == 0) {
      *piVar13 = 0x2e;
      __android_log_print(6,DAT_000817a4 + 0x8173c,DAT_000817a8 + 0x8173e,0);
      piVar7 = (int *)piVar13[4];
    }
    else {
      iVar11 = *(int *)("No memory for camera_cmd_t" + iVar9 + 1);
      piVar7 = (int *)piVar13[4];
      *piVar7 = *(int *)(&DAT_00073628 + iVar9);
      piVar7[1] = iVar11;
    }
    if (*(int *)(*(int *)(DAT_000817ac + 0x81748) + 0x28) != 0) {
      iVar9 = *piVar7;
      iVar11 = piVar7[1];
      *piVar13 = DAT_000817b0 + 0x8175a;
      piVar13[1] = iVar9;
      piVar13[2] = iVar11;
      mm_camera_debug_log(1,3,DAT_000817b4 + 0x81768,0x620);
    }
    return 0;
  }
  if (*(int *)(*(int *)(DAT_00081798 + 0x816ea) + 0x20) == 0) {
    return iVar9;
  }
  *piVar13 = DAT_0008179c + 0x816fc;
  mm_camera_debug_log(1,1,DAT_000817a0 + 0x81704,0x61b);
  return iVar9;
}

