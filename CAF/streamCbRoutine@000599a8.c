
/* qcamera::QCamera3RawDumpChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void qcamera::QCamera3RawDumpChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00059a1c + 0x599b6);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  if ((param_2 != (QCamera3Stream *)0x0) && (*(int *)(param_2 + 8) == 1)) {
    if (param_1[0x98] != (mm_camera_super_buf_t)0x0) {
      dumpRawSnapshot((QCamera3RawDumpChannel *)param_1,*(mm_camera_buf_def **)(param_2 + 0x10));
    }
    QCamera3Channel::bufDone((QCamera3Channel *)param_1,(uint)param_2);
    __ThumbV7PILongThunk_free(param_2);
    return;
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    mm_camera_debug_log();
    return;
  }
  return;
}

