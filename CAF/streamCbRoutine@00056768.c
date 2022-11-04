
/* qcamera::QCamera3Channel::streamCbRoutine(mm_camera_super_buf_t*, qcamera::QCamera3Stream*,
   void*) */

void qcamera::QCamera3Channel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2,void *param_3)

{
  if (param_3 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00056778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x2c))(param_3,param_1,param_2);
    return;
  }
  if (*(int *)(*(int *)(DAT_000567a4 + 0x56780) + 0x20) != 0) {
    mm_camera_debug_log();
    return;
  }
  return;
}

