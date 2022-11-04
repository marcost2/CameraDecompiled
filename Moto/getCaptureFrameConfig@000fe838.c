
/* qcamera::QCameraParametersIntf::getCaptureFrameConfig() */

void qcamera::QCameraParametersIntf::getCaptureFrameConfig(void)

{
  void *in_r0;
  int *in_r1;
  
  pthread_mutex_lock((pthread_mutex_t *)(in_r1 + 1));
  if (*in_r1 != 0) {
    __aeabi_memcpy8(in_r0,(void *)(*in_r1 + 0x390),0x408);
    pthread_mutex_unlock((pthread_mutex_t *)(in_r1 + 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe870 + 0xfe86a,DAT_000fe874 + 0xfe86c,DAT_000fe878 + 0xfe86e);
}

