
/* qcamera::QCamera3SupportChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void qcamera::QCamera3SupportChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2,void *param_3)

{
  if ((param_2 != (QCamera3Stream *)0x0) && (*(int *)(param_2 + 8) == 1)) {
    QCamera3Channel::bufDone((QCamera3Channel *)param_1,(uint)param_2);
    __ThumbV7PILongThunk_free(param_2);
    return;
  }
  if (*(int *)(*(int *)(DAT_0005e2c4 + 0x5e2a2) + 0x20) != 0) {
    mm_camera_debug_log();
    return;
  }
  return;
}

