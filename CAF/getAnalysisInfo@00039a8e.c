
/* qcamera::QCameraCommon::getAnalysisInfo(bool, bool, unsigned long long, cam_analysis_info_t*) */

undefined4
qcamera::QCameraCommon::getAnalysisInfo
          (bool param_1,bool param_2,ulonglong param_3,cam_analysis_info_t *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *in_stack_00000008;
  
  piVar1 = (int *)(uint)param_1;
  if (in_stack_00000008 == (undefined8 *)0x0) {
    return 0xffffffea;
  }
  *(char *)in_stack_00000008 = '\0';
  if ((((param_2 == false) || (param_4 != (cam_analysis_info_t *)0x0)) ||
      (iVar6 = *piVar1, *(char *)(iVar6 + 0x3e0d) == '\0')) || (*(char *)(iVar6 + 0x3e0c) == '\0'))
  {
    iVar6 = *piVar1;
    if (*(char *)(iVar6 + 0x3dd8) != '\0') {
      uVar8 = *(undefined8 *)(iVar6 + 0x3e00);
      uVar9 = *(undefined8 *)(iVar6 + 0x3de8);
      uVar10 = *(undefined8 *)(iVar6 + 0x3df0);
      uVar11 = *(undefined8 *)(iVar6 + 0x3dd8);
      uVar12 = *(undefined8 *)(iVar6 + 0x3de0);
      in_stack_00000008[4] = *(undefined8 *)(iVar6 + 0x3df8);
      in_stack_00000008[5] = uVar8;
      in_stack_00000008[2] = uVar9;
      in_stack_00000008[3] = uVar10;
      *in_stack_00000008 = uVar11;
      in_stack_00000008[1] = uVar12;
      *(undefined4 *)(in_stack_00000008 + 6) = *(undefined4 *)(iVar6 + 0x3e08);
      if (param_4 != (cam_analysis_info_t *)0x0) {
        *(undefined4 *)((int)in_stack_00000008 + 4) = *(undefined4 *)((int)in_stack_00000008 + 0x2c)
        ;
        *(undefined4 *)(in_stack_00000008 + 1) = *(undefined4 *)(in_stack_00000008 + 6);
      }
    }
  }
  else {
    uVar8 = *(undefined8 *)(iVar6 + 0x3e34);
    uVar9 = *(undefined8 *)(iVar6 + 0x3e1c);
    uVar10 = *(undefined8 *)(iVar6 + 0x3e24);
    uVar11 = *(undefined8 *)(iVar6 + 0x3e0c);
    uVar12 = *(undefined8 *)(iVar6 + 0x3e14);
    in_stack_00000008[4] = *(undefined8 *)(iVar6 + 0x3e2c);
    in_stack_00000008[5] = uVar8;
    in_stack_00000008[2] = uVar9;
    in_stack_00000008[3] = uVar10;
    *in_stack_00000008 = uVar11;
    in_stack_00000008[1] = uVar12;
    *(undefined4 *)(in_stack_00000008 + 6) = *(undefined4 *)(iVar6 + 0x3e3c);
  }
  if (((param_3 & 0x100000000) != 0) && (iVar6 = *piVar1, *(char *)(iVar6 + 0x3e40) != '\0')) {
    if (*(char *)in_stack_00000008 == '\0') {
      uVar8 = *(undefined8 *)(iVar6 + 0x3e68);
      uVar9 = *(undefined8 *)(iVar6 + 0x3e50);
      uVar10 = *(undefined8 *)(iVar6 + 0x3e58);
      uVar11 = *(undefined8 *)(iVar6 + 0x3e40);
      uVar12 = *(undefined8 *)(iVar6 + 0x3e48);
      in_stack_00000008[4] = *(undefined8 *)(iVar6 + 0x3e60);
      in_stack_00000008[5] = uVar8;
      in_stack_00000008[2] = uVar9;
      in_stack_00000008[3] = uVar10;
      *in_stack_00000008 = uVar11;
      in_stack_00000008[1] = uVar12;
      *(undefined4 *)(in_stack_00000008 + 6) = *(undefined4 *)(iVar6 + 0x3e70);
    }
    else {
      iVar7 = *(int *)(iVar6 + 0x3e44);
      if (*(int *)(iVar6 + 0x3e44) < *(int *)((int)in_stack_00000008 + 4)) {
        iVar7 = *(int *)((int)in_stack_00000008 + 4);
      }
      *(int *)((int)in_stack_00000008 + 4) = iVar7;
      iVar7 = *(int *)(iVar6 + 0x3e48);
      if (*(int *)(iVar6 + 0x3e48) < *(int *)(in_stack_00000008 + 1)) {
        iVar7 = *(int *)(in_stack_00000008 + 1);
      }
      *(int *)(in_stack_00000008 + 1) = iVar7;
      uVar2 = calculateLCM(*(int *)(in_stack_00000008 + 2),*(int *)(iVar6 + 0x3e50));
      *(uint *)(in_stack_00000008 + 2) = uVar2;
      uVar3 = calculateLCM(*(int *)((int)in_stack_00000008 + 0xc),*(int *)(iVar6 + 0x3e4c));
      *(uint *)((int)in_stack_00000008 + 0xc) = uVar3;
      uVar5 = calculateLCM(*(int *)((int)in_stack_00000008 + 0x14),*(int *)(iVar6 + 0x3e54));
      *(undefined4 *)((int)in_stack_00000008 + 0x14) = uVar5;
      uVar4 = *(uint *)(iVar6 + 0x3e58);
      if (*(uint *)(iVar6 + 0x3e58) < *(uint *)(in_stack_00000008 + 3)) {
        uVar4 = *(uint *)(in_stack_00000008 + 3);
      }
      *(uint *)(in_stack_00000008 + 3) = uVar4 + uVar3 & ~uVar3;
      uVar4 = *(uint *)(iVar6 + 0x3e5c);
      if (*(uint *)(iVar6 + 0x3e5c) < *(uint *)((int)in_stack_00000008 + 0x1c)) {
        uVar4 = *(uint *)((int)in_stack_00000008 + 0x1c);
      }
      *(uint *)((int)in_stack_00000008 + 0x1c) = uVar4 + uVar2 & ~uVar2;
      *(byte *)((int)in_stack_00000008 + 1) =
           *(byte *)(iVar6 + 0x3e41) | *(byte *)((int)in_stack_00000008 + 1);
    }
  }
  uVar5 = 0;
  if (*(char *)in_stack_00000008 == '\0') {
    uVar5 = 0xffffffea;
  }
  return uVar5;
}

