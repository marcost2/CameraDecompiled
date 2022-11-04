
/* qcamera::QCamera3Channel::dumpYUV(mm_camera_buf_def*, cam_dimension_t, cam_frame_len_offset_t,
   unsigned char) */

void __thiscall
qcamera::QCamera3Channel::dumpYUV
          (QCamera3Channel *this,mm_camera_buf_def *param_1,cam_dimension_t param_2,
          cam_frame_len_offset_t param_3,uchar param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  size_t __n;
  int iVar9;
  undefined3 in_stack_00000001;
  uint in_stack_00000188;
  char acStack4228 [92];
  char acStack4136 [4092];
  int aiStack44 [2];
  
  piVar7 = *(int **)(DAT_00056e40 + 0x56be4);
  aiStack44[1] = *piVar7;
  __aeabi_memclr4(acStack4136,0x1000);
  property_get();
  uVar1 = atoi(acStack4228);
  *(uint *)(this + 0x70) = uVar1;
  if ((uVar1 & in_stack_00000188) == 0) goto LAB_00056e24;
  uVar5 = (uVar1 << 0x10) >> 0x18;
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  *(uint *)(this + 0x88) = uVar5;
  uVar4 = uVar1 >> 0x10;
  if (uVar1 >> 0x10 == 0) {
    uVar4 = 10;
  }
  if (0xff < uVar4) {
    uVar4 = 0x100;
  }
  *(uint *)(this + 0x80) = uVar4;
  if (*(int *)(this + 0x8c) == 0) {
    *(undefined4 *)(this + 0x8c) = 1;
  }
  uVar1 = *(uint *)(this + 0x8c);
  if (uVar1 != (uVar1 / uVar5) * uVar5) {
    *(uint *)(this + 0x8c) = uVar1 + 1;
    goto LAB_00056e24;
  }
  if (uVar4 < *(uint *)(this + 0x84)) goto LAB_00056e24;
  switch(in_stack_00000188) {
  case 1:
    uVar2 = *(undefined4 *)(DAT_00056e54 + 0x56c8a);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    iVar6 = DAT_00056e58 + 0x56c9a;
    break;
  case 2:
    uVar2 = *(undefined4 *)(DAT_00056e5c + 0x56cde);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    iVar6 = DAT_00056e60 + 0x56cee;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
switchD_00056c78_caseD_3:
    if (*(int *)(*(int *)(DAT_00056e74 + 0x56cba) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    goto LAB_00056d24;
  case 4:
    uVar2 = *(undefined4 *)(DAT_00056e64 + 0x56cf4);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    iVar6 = DAT_00056e68 + 0x56d04;
    break;
  case 8:
    uVar2 = *(undefined4 *)(DAT_00056e6c + 0x56d0a);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    iVar6 = DAT_00056e70 + 0x56d1a;
    break;
  default:
    if (in_stack_00000188 != 0x40) goto switchD_00056c78_caseD_3;
    uVar2 = *(undefined4 *)(DAT_00056e4c + 0x56ca4);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    iVar6 = DAT_00056e50 + 0x56cb4;
  }
  snprintf(acStack4136,0x1000,(char *)0x1000,iVar6,uVar2,uVar3,(uint)(byte)param_2,
           (uint)(byte)param_3);
LAB_00056d24:
  *(int *)(DAT_00056e80 + 0x56d2a) = *(int *)(DAT_00056e80 + 0x56d2a) + 1;
  iVar6 = open(acStack4136,0x42,0x1ff);
  if (iVar6 < 0) {
    if (*(int *)(*(int *)(DAT_00056e90 + 0x56dd0) + 0x20) != 0) {
      mm_camera_debug_log();
    }
  }
  else {
    fchmod(iVar6,0x1a4);
    if (_param_4 != 0) {
      uVar1 = 0;
      do {
        iVar9 = *(int *)(&stack0x00000008 + uVar1 * 0x30);
        if (uVar1 != 0) {
          iVar9 = iVar9 + aiStack44[uVar1 * 0xc];
        }
        if (0 < *(int *)(&stack0x00000024 + uVar1 * 0x30)) {
          __n = *(size_t *)(&stack0x00000020 + uVar1 * 0x30);
          iVar8 = 0;
          do {
            write(iVar6,(void *)(*(int *)(param_1 + 0x208) + iVar9),__n);
            iVar9 = iVar9 + *(int *)(&stack0x00000014 + uVar1 * 0x30);
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(&stack0x00000024 + uVar1 * 0x30));
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < _param_4);
    }
    if (*(int *)(*(int *)(DAT_00056e84 + 0x56df4) + 0x28) != 0) {
      mm_camera_debug_log();
    }
    *(int *)(this + 0x84) = *(int *)(this + 0x84) + 1;
    close(iVar6);
  }
LAB_00056e24:
  if (*piVar7 == aiStack44[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

