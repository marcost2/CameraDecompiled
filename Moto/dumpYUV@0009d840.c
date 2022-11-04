
/* qcamera::QCamera3Channel::dumpYUV(mm_camera_buf_def*, cam_dimension_t, cam_frame_len_offset_t,
   unsigned char) */

void __thiscall
qcamera::QCamera3Channel::dumpYUV
          (QCamera3Channel *this,mm_camera_buf_def *param_1,cam_dimension_t param_2,
          cam_frame_len_offset_t param_3,uchar param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ssize_t sVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  size_t __n;
  int iVar13;
  int iVar14;
  undefined3 in_stack_00000001;
  uint in_stack_00000188;
  char acStack4236 [92];
  char acStack4144 [4100];
  int aiStack44 [2];
  
  piVar11 = *(int **)(DAT_0009dab8 + 0x9d85e);
  iVar2 = *piVar11;
  __aeabi_memclr8(acStack4144,0x1000);
  property_get(DAT_0009dabc + 0x9d874,acStack4236,DAT_0009dac0 + 0x9d876);
  uVar3 = atoi(acStack4236);
  *(uint *)(this + 0x70) = uVar3;
  if ((uVar3 & in_stack_00000188) == 0) goto LAB_0009daa2;
  uVar8 = (uVar3 << 0x10) >> 0x18;
  if (uVar8 == 0) {
    uVar8 = 1;
  }
  *(uint *)(this + 0x88) = uVar8;
  uVar7 = uVar3 >> 0x10;
  if (uVar3 >> 0x10 == 0) {
    uVar7 = 10;
  }
  if (0xff < uVar7) {
    uVar7 = 0x100;
  }
  *(uint *)(this + 0x80) = uVar7;
  uVar3 = *(uint *)(this + 0x8c);
  if (uVar3 == 0) {
    uVar3 = 1;
    *(undefined4 *)(this + 0x8c) = 1;
  }
  if (uVar3 != (uVar3 / uVar8) * uVar8) {
    *(uint *)(this + 0x8c) = uVar3 + 1;
    goto LAB_0009daa2;
  }
  if (uVar7 < *(uint *)(this + 0x84)) goto LAB_0009daa2;
  switch(in_stack_00000188) {
  case 1:
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(undefined4 *)(DAT_0009dacc + 0x9d8fa);
    iVar9 = DAT_0009dad0 + 0x9d90a;
    break;
  case 2:
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(undefined4 *)(DAT_0009dad4 + 0x9d956);
    iVar9 = DAT_0009dad8 + 0x9d966;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
switchD_0009d8e4_caseD_3:
    if (*(int *)(*(int *)(DAT_0009daec + 0x9d92e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009daf4 + 0x9d948,0x23f,DAT_0009daf0 + 0x9d93c,in_stack_00000188)
      ;
    }
    goto LAB_0009d9a4;
  case 4:
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(undefined4 *)(DAT_0009dadc + 0x9d970);
    iVar9 = DAT_0009dae0 + 0x9d980;
    break;
  case 8:
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(undefined4 *)(DAT_0009dae4 + 0x9d98a);
    iVar9 = DAT_0009dae8 + 0x9d99a;
    break;
  default:
    if (in_stack_00000188 != 0x40) goto switchD_0009d8e4_caseD_3;
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(undefined4 *)(DAT_0009dac4 + 0x9d918);
    iVar9 = DAT_0009dac8 + 0x9d928;
  }
  snprintf(acStack4144,0x1000,(char *)0x1000,iVar9,uVar4,uVar6,(uint)(byte)param_2,
           (uint)(byte)param_3);
LAB_0009d9a4:
  *(int *)(DAT_0009daf8 + 0x9d9ae) = *(int *)(DAT_0009daf8 + 0x9d9ae) + 1;
  iVar9 = open(acStack4144,0x42,0x1ff);
  if (iVar9 < 0) {
    if (*(int *)(*(int *)(DAT_0009db08 + 0x9da4c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009db10 + 0x9da64,600,DAT_0009db0c + 0x9da5c);
    }
  }
  else {
    fchmod(iVar9,0x1a4);
    if (_param_4 == 0) {
      iVar10 = 0;
    }
    else {
      uVar3 = 0;
      iVar10 = 0;
      do {
        iVar1 = uVar3 * 0x30;
        iVar13 = *(int *)(&stack0x00000008 + iVar1);
        if (uVar3 != 0) {
          iVar13 = iVar13 + aiStack44[uVar3 * 0xc];
        }
        iVar14 = *(int *)(&stack0x00000024 + iVar1);
        if (0 < iVar14) {
          __n = *(size_t *)(&stack0x00000020 + iVar1);
          iVar12 = 0;
          do {
            sVar5 = write(iVar9,(void *)(*(int *)(param_1 + 0x208) + iVar13),__n);
            iVar10 = iVar10 + sVar5;
            iVar12 = iVar12 + 1;
            iVar13 = iVar13 + *(int *)(&stack0x00000014 + iVar1);
          } while (iVar12 < iVar14);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < _param_4);
    }
    if (*(int *)(*(int *)(DAT_0009dafc + 0x9da70) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_0009db04 + 0x9da8a,0x254,DAT_0009db00 + 0x9da80,iVar10);
    }
    *(int *)(this + 0x84) = *(int *)(this + 0x84) + 1;
    close(iVar9);
  }
LAB_0009daa2:
  if (*piVar11 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

