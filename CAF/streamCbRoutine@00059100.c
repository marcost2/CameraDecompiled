
/* qcamera::QCamera3MetadataChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void qcamera::QCamera3MetadataChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2,void *param_3)

{
  int iVar1;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *pcVar2;
  int *piVar3;
  undefined4 in_stack_ffffffdc;
  ScopedTraceDbg aSStack32 [12];
  int local_14;
  
  piVar3 = *(int **)(DAT_0005917c + 0x5910e);
  local_14 = *piVar3;
  iVar1 = DAT_00059180 + 0x59118;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),(char *)param_2);
  pcVar2 = extraout_r1;
  if ((param_2 == (QCamera3Stream *)0x0) || (*(int *)(param_2 + 8) != 1)) {
    if (*(int *)(*(int *)(DAT_00059184 + 0x5914c) + 0x20) != 0) {
      iVar1 = DAT_00059188 + 0x59156;
      mm_camera_debug_log();
      pcVar2 = extraout_r1_01;
    }
  }
  else if (*(code **)(param_1 + 0x60) != (code *)0x0) {
    iVar1 = *(int *)(param_1 + 4);
    (**(code **)(param_1 + 0x60))(param_2,0,0,0);
    pcVar2 = extraout_r1_00;
  }
  ScopedTraceDbg::_ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),pcVar2);
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

