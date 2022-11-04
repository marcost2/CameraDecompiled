
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* qcamera::QCameraParameters::setISType() */

undefined4 __thiscall qcamera::QCameraParameters::setISType(QCameraParameters *this)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  QCameraParameters QVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined (*pauVar10) [16];
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined2 uVar17;
  ulonglong uVar16;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined auVar20 [16];
  ulonglong uVar21;
  undefined auVar22 [16];
  char acStack120 [92];
  int local_1c;
  
  piVar15 = *(int **)(DAT_000f6bd4 + 0xf69fe);
  local_1c = *piVar15;
  iVar8 = *(int *)(this + 0x1d4);
  uVar6 = (uint)*(byte *)(iVar8 + 0x3f6d);
  if (uVar6 == 0) {
    QVar5 = this[0x28b];
LAB_000f6b26:
    if (QVar5 == (QCameraParameters)0x0) {
      iVar8 = 0;
      *(undefined4 *)(this + 0x208) = 0;
    }
    else {
      uVar12 = *(undefined4 *)(DAT_000f6bd8 + 0xf6b30);
      property_get(DAT_000f6bdc + 0xf6b3a,acStack120,uVar12);
      iVar8 = atoi(acStack120);
      *(int *)(this + 0x208) = iVar8;
      if (1 < iVar8) {
        if (*(int *)(*(int *)(DAT_000f6be0 + 0xf6b52) + 0x24) != 0) {
          mm_camera_debug_log(1,2,DAT_000f6be8 + 0xf6b6a,0x36d0,DAT_000f6be4 + 0xf6b62);
        }
        *(undefined4 *)(this + 0x208) = 2;
      }
      property_get(DAT_000f6bec + 0xf6b7e,acStack120,uVar12);
      iVar8 = atoi(acStack120);
      *(int *)(this + 0x20c) = iVar8;
      if (iVar8 < 2) goto LAB_000f6bbc;
      if (*(int *)(*(int *)(DAT_000f6bf0 + 0xf6b94) + 0x24) != 0) {
        mm_camera_debug_log(1,2,DAT_000f6bf8 + 0xf6bac,0x36d7,DAT_000f6bf4 + 0xf6ba4);
      }
      iVar8 = 2;
    }
  }
  else {
    if (uVar6 < 4) {
      uVar11 = 0;
      uVar13 = 0;
      uVar9 = 0;
LAB_000f6a90:
      do {
        uVar7 = *(uint *)(iVar8 + 0x3f70 + uVar11 * 4);
        uVar11 = uVar11 + 1;
        uVar14 = count_leading_zeroes(uVar7 - 5);
        uVar7 = count_leading_zeroes((uVar7 & 0xfffffffe) - 4);
        uVar13 = uVar13 | uVar14 >> 5;
        uVar9 = uVar9 | uVar7 >> 5;
      } while (uVar11 < uVar6);
    }
    else {
      uVar11 = uVar6 & 0xfc;
      uVar16 = 0;
      auVar1 = SIMDExpandImmediate(0,0,5);
      auVar2 = SIMDExpandImmediate(0,0,4);
      uVar18 = 0;
      pauVar10 = (undefined (*) [16])(iVar8 + 0x3f70);
      uVar9 = uVar11;
      do {
        auVar3 = *pauVar10;
        pauVar10 = pauVar10[1];
        uVar9 = uVar9 - 4;
        auVar22 = VectorCompareEqual(auVar3,auVar1,4);
        auVar20 = SIMDExpandImmediate(1,1,1);
        auVar20 = VectorCompareEqual(auVar3 & ~auVar20,auVar2,4);
        uVar21 = VectorCopyNarrow(auVar22,4);
        uVar19 = VectorCopyNarrow(auVar20,4);
        uVar16 = uVar16 | uVar21;
        uVar18 = uVar18 | uVar19;
      } while (uVar9 != 0);
      uVar19 = uVar16 | SUB168(CONCAT88(uVar16,uVar16) >> 0x20,0);
      uVar18 = uVar18 | SUB168(CONCAT88(uVar16,uVar18) >> 0x20,0);
      uVar17 = (undefined2)(uVar19 >> 0x10);
      uVar12 = CONCAT22(uVar17,uVar17);
      uVar17 = (undefined2)(uVar18 >> 0x10);
      uVar4 = CONCAT22(uVar17,uVar17);
      uVar13 = VectorGetElement(uVar19 | CONCAT44(uVar12,uVar12),0,2,1);
      uVar9 = VectorGetElement(uVar18 | CONCAT44(uVar4,uVar4),0,2,1);
      if (uVar11 != uVar6) goto LAB_000f6a90;
    }
    QVar5 = this[0x28b];
    if (QVar5 == (QCameraParameters)0x0) goto LAB_000f6b26;
    if ((uVar9 & 1) == 0) goto LAB_000f6b26;
    property_get(DAT_000f6bfc + 0xf6ace,acStack120,DAT_000f6c00 + 0xf6ad0);
    iVar8 = atoi(acStack120);
    *(int *)(this + 0x208) = iVar8;
    uVar6 = iVar8 - 5;
    if (uVar6 != 0) {
      uVar6 = 1;
    }
    if (((uVar6 | uVar13) & 1) == 0) {
      if (*(int *)(*(int *)(DAT_000f6c04 + 0xf6aee) + 0x24) != 0) {
        mm_camera_debug_log(1,2,DAT_000f6c0c + 0xf6b06,0x36c4,DAT_000f6c08 + 0xf6afe);
      }
      *(undefined4 *)(this + 0x208) = 4;
    }
    property_get(DAT_000f6c10 + 0xf6b1a,acStack120,DAT_000f6c14 + 0xf6b1c);
    iVar8 = atoi(acStack120);
  }
  *(int *)(this + 0x20c) = iVar8;
LAB_000f6bbc:
  if (*piVar15 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

