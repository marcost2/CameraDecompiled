
/* qcamera::QCameraParametersIntf::getCpuInfo() */

void qcamera::QCameraParametersIntf::getCpuInfo(void)

{
  QCameraParameters *in_r0;
  int *in_r1;
  
  pthread_mutex_lock((pthread_mutex_t *)(in_r1 + 1));
  if (*in_r1 != 0) {
    QCameraParameters::getCpuInfo(in_r0);
    pthread_mutex_unlock((pthread_mutex_t *)(in_r1 + 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102d2c + 0x102d26,DAT_00102d30 + 0x102d28,DAT_00102d34 + 0x102d2a);
}

