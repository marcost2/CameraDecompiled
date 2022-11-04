
/* qcamera::QCamera3PicChannel::dataNotifyCB(mm_camera_super_buf_t*, void*) */

void qcamera::QCamera3PicChannel::dataNotifyCB(mm_camera_super_buf_t *param_1,void *param_2)

{
  int iVar1;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *extraout_r1_02;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_stack_ffffffdc;
  ScopedTraceDbg aSStack32 [8];
  int local_18;
  
  piVar3 = *(int **)(DAT_0005bfc0 + 0x5befe);
  local_18 = *piVar3;
  iVar1 = DAT_0005bfc4 + 0x5bf08;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),(char *)param_2);
  iVar4 = *(int *)(DAT_0005bfc8 + 0x5bf1a);
  pcVar2 = extraout_r1;
  if (*(int *)(iVar4 + 0x2c) != 0) {
    iVar1 = DAT_0005bfcc + 0x5bf24;
    mm_camera_debug_log();
    pcVar2 = extraout_r1_00;
  }
  if (param_2 == (void *)0x0) {
    if (*(int *)(iVar4 + 0x20) == 0) goto LAB_0005bfaa;
    iVar1 = DAT_0005bfd4 + 0x5bf6a;
  }
  else if (*(int *)((int)param_2 + 0x44) == 1) {
    if (*(void **)((int)param_2 + 0x24) == (void *)0x0) {
      if (*(int *)(iVar4 + 0x20) == 0) goto LAB_0005bfaa;
      iVar1 = DAT_0005bfe4 + 0x5bf9a;
    }
    else {
      streamCbRoutine((mm_camera_super_buf_t *)param_2,(QCamera3Stream *)param_1,
                      *(void **)((int)param_2 + 0x24));
      pcVar2 = extraout_r1_01;
      if (*(int *)(iVar4 + 0x2c) == 0) goto LAB_0005bfaa;
      iVar1 = DAT_0005bfec + 0x5bf52;
    }
  }
  else {
    if (*(int *)(iVar4 + 0x20) == 0) goto LAB_0005bfaa;
    iVar1 = DAT_0005bfdc + 0x5bf82;
  }
  mm_camera_debug_log();
  pcVar2 = extraout_r1_02;
LAB_0005bfaa:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),pcVar2);
  if (*piVar3 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

