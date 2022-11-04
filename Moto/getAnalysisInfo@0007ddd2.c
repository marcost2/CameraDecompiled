
/* qcamera::QCameraCommon::getAnalysisInfo(bool, bool, unsigned long long, cam_analysis_info_t*) */

undefined4
qcamera::QCameraCommon::getAnalysisInfo
          (bool param_1,bool param_2,ulonglong param_3,cam_analysis_info_t *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *in_stack_00000008;
  
  if (in_stack_00000008 == (undefined8 *)0x0) {
    return 0xffffffea;
  }
  *(char *)in_stack_00000008 = '\0';
  iVar6 = *(int *)(uint)param_1;
  if ((((param_2 == false) || (param_4 != (cam_analysis_info_t *)0x0)) ||
      (*(char *)(iVar6 + 0x3f05) == '\0')) || (*(char *)(iVar6 + 0x3f04) == '\0')) {
    if (*(char *)(iVar6 + 0x3ed0) != '\0') {
      uVar13 = *(undefined8 *)(iVar6 + 0x3ed0);
      uVar14 = *(undefined8 *)(iVar6 + 0x3ed8);
      uVar12 = *(undefined8 *)(iVar6 + 0x3ee8);
      uVar10 = *(undefined8 *)(iVar6 + 0x3ef0);
      uVar11 = *(undefined8 *)(iVar6 + 0x3ef8);
      in_stack_00000008[2] = *(undefined8 *)(iVar6 + 0x3ee0);
      in_stack_00000008[3] = uVar12;
      in_stack_00000008[4] = uVar10;
      in_stack_00000008[5] = uVar11;
      *in_stack_00000008 = uVar13;
      in_stack_00000008[1] = uVar14;
      *(undefined4 *)(in_stack_00000008 + 6) = *(undefined4 *)(iVar6 + 0x3f00);
      if (param_4 != (cam_analysis_info_t *)0x0) {
        *(undefined4 *)((int)in_stack_00000008 + 4) = *(undefined4 *)((int)in_stack_00000008 + 0x2c)
        ;
        *(undefined4 *)(in_stack_00000008 + 1) = *(undefined4 *)(in_stack_00000008 + 6);
      }
    }
  }
  else {
    uVar13 = *(undefined8 *)(iVar6 + 0x3f04);
    uVar14 = *(undefined8 *)(iVar6 + 0x3f0c);
    uVar12 = *(undefined8 *)(iVar6 + 0x3f1c);
    uVar10 = *(undefined8 *)(iVar6 + 0x3f24);
    uVar11 = *(undefined8 *)(iVar6 + 0x3f2c);
    in_stack_00000008[2] = *(undefined8 *)(iVar6 + 0x3f14);
    in_stack_00000008[3] = uVar12;
    in_stack_00000008[4] = uVar10;
    in_stack_00000008[5] = uVar11;
    *in_stack_00000008 = uVar13;
    in_stack_00000008[1] = uVar14;
    *(undefined4 *)(in_stack_00000008 + 6) = *(undefined4 *)(iVar6 + 0x3f34);
  }
  if (((param_3 & 0x100000000) != 0) &&
     (iVar6 = *(int *)(uint)param_1, *(char *)(iVar6 + 0x3f38) != '\0')) {
    if (*(char *)in_stack_00000008 == '\0') {
      uVar13 = *(undefined8 *)(iVar6 + 0x3f38);
      uVar14 = *(undefined8 *)(iVar6 + 0x3f40);
      uVar12 = *(undefined8 *)(iVar6 + 0x3f50);
      uVar10 = *(undefined8 *)(iVar6 + 0x3f58);
      uVar11 = *(undefined8 *)(iVar6 + 0x3f60);
      in_stack_00000008[2] = *(undefined8 *)(iVar6 + 0x3f48);
      in_stack_00000008[3] = uVar12;
      in_stack_00000008[4] = uVar10;
      in_stack_00000008[5] = uVar11;
      *in_stack_00000008 = uVar13;
      in_stack_00000008[1] = uVar14;
      *(undefined4 *)(in_stack_00000008 + 6) = *(undefined4 *)(iVar6 + 0x3f68);
    }
    else {
      uVar5 = *(uint *)(in_stack_00000008 + 2);
      iVar1 = *(int *)(iVar6 + 0x3f3c);
      if (*(int *)(iVar6 + 0x3f3c) < *(int *)((int)in_stack_00000008 + 4)) {
        iVar1 = *(int *)((int)in_stack_00000008 + 4);
      }
      *(int *)((int)in_stack_00000008 + 4) = iVar1;
      iVar1 = *(int *)(iVar6 + 0x3f40);
      if (*(int *)(iVar6 + 0x3f40) < *(int *)(in_stack_00000008 + 1)) {
        iVar1 = *(int *)(in_stack_00000008 + 1);
      }
      *(int *)(in_stack_00000008 + 1) = iVar1;
      uVar2 = *(uint *)(iVar6 + 0x3f48);
      uVar4 = uVar2;
      if ((int)uVar2 < 1) {
        uVar4 = 0;
      }
      uVar8 = uVar5;
      if (0 < (int)uVar5) {
        uVar8 = uVar2;
        uVar4 = uVar5;
      }
      if (0 < (int)uVar8) {
        uVar4 = uVar2;
        uVar8 = uVar2;
        if ((int)uVar2 < (int)uVar5) {
          uVar4 = uVar5;
          uVar8 = uVar5;
        }
        while ((uVar4 != (uVar4 / uVar5) * uVar5 || (uVar4 != (uVar4 / uVar2) * uVar2))) {
          uVar4 = uVar4 + uVar8;
        }
      }
      *(uint *)(in_stack_00000008 + 2) = uVar4;
      uVar2 = *(uint *)(iVar6 + 0x3f44);
      uVar5 = uVar2;
      if ((int)uVar2 < 1) {
        uVar5 = 0;
      }
      uVar7 = *(uint *)((int)in_stack_00000008 + 0xc);
      uVar8 = uVar7;
      if (0 < (int)uVar7) {
        uVar8 = uVar2;
        uVar5 = uVar7;
      }
      if (0 < (int)uVar8) {
        uVar5 = uVar2;
        uVar8 = uVar2;
        if ((int)uVar2 < (int)uVar7) {
          uVar5 = uVar7;
          uVar8 = uVar7;
        }
        while ((uVar5 != (uVar5 / uVar7) * uVar7 || (uVar5 != (uVar5 / uVar2) * uVar2))) {
          uVar5 = uVar5 + uVar8;
        }
      }
      *(uint *)((int)in_stack_00000008 + 0xc) = uVar5;
      uVar8 = *(uint *)(iVar6 + 0x3f4c);
      uVar2 = uVar8;
      if ((int)uVar8 < 1) {
        uVar2 = 0;
      }
      uVar9 = *(uint *)((int)in_stack_00000008 + 0x14);
      uVar7 = uVar9;
      if (0 < (int)uVar9) {
        uVar7 = uVar8;
        uVar2 = uVar9;
      }
      if (0 < (int)uVar7) {
        uVar2 = uVar8;
        uVar7 = uVar8;
        if ((int)uVar8 < (int)uVar9) {
          uVar2 = uVar9;
          uVar7 = uVar9;
        }
        while ((uVar2 != (uVar2 / uVar9) * uVar9 || (uVar2 != (uVar2 / uVar8) * uVar8))) {
          uVar2 = uVar2 + uVar7;
        }
      }
      *(uint *)((int)in_stack_00000008 + 0x14) = uVar2;
      uVar2 = *(uint *)(iVar6 + 0x3f50);
      if (*(uint *)(iVar6 + 0x3f50) < *(uint *)(in_stack_00000008 + 3)) {
        uVar2 = *(uint *)(in_stack_00000008 + 3);
      }
      *(uint *)(in_stack_00000008 + 3) = uVar2 + uVar5 & ~uVar5;
      uVar5 = *(uint *)(iVar6 + 0x3f54);
      if (*(uint *)(iVar6 + 0x3f54) < *(uint *)((int)in_stack_00000008 + 0x1c)) {
        uVar5 = *(uint *)((int)in_stack_00000008 + 0x1c);
      }
      *(uint *)((int)in_stack_00000008 + 0x1c) = uVar5 + uVar4 & ~uVar4;
      *(byte *)((int)in_stack_00000008 + 1) =
           *(byte *)(iVar6 + 0x3f39) | *(byte *)((int)in_stack_00000008 + 1);
    }
  }
  uVar3 = 0;
  if (*(char *)in_stack_00000008 == '\0') {
    uVar3 = 0xffffffea;
  }
  return uVar3;
}

