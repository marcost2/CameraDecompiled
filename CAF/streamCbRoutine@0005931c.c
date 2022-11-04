
/* qcamera::QCamera3RawChannel::streamCbRoutine(mm_camera_super_buf_t*, qcamera::QCamera3Stream*) */

void qcamera::QCamera3RawChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  char *extraout_r1;
  int *piVar3;
  undefined4 in_stack_ffffffdc;
  ScopedTraceDbg aSStack32 [8];
  int local_18;
  
  piVar3 = *(int **)(DAT_000593a0 + 0x5932c);
  local_18 = *piVar3;
  iVar1 = DAT_000593a4 + 0x59336;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),(char *)param_2);
  if (param_1[12000] != (mm_camera_super_buf_t)0x0) {
    dumpRawSnapshot((QCamera3RawChannel *)param_1,*(mm_camera_buf_def **)(param_2 + 0x10));
  }
  if ((QCamera3Channel *)(uint)(byte)param_1[0x2ee1] != (QCamera3Channel *)0x0) {
    iVar2 = QCamera3Channel::getStreamDefaultFormat
                      ((QCamera3Channel *)(uint)(byte)param_1[0x2ee1],8);
    if (iVar2 == 0x1c) {
      convertMipiToRaw16((QCamera3RawChannel *)param_1,*(mm_camera_buf_def **)(param_2 + 0x10));
    }
    else {
      convertLegacyToRaw16((QCamera3RawChannel *)param_1,*(mm_camera_buf_def **)(param_2 + 0x10));
    }
  }
  QCamera3StreamMem::cleanInvalidateCache
            ((QCamera3StreamMem *)(param_1 + 0x408),*(uint *)(*(int *)(param_2 + 0x10) + 0xc));
  QCamera3ProcessingChannel::streamCbRoutine(param_1,param_2,param_3);
  ScopedTraceDbg::_ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),extraout_r1);
  if (*piVar3 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

