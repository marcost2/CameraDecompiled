
/* qcamera::QCameraParametersIntf::dump() */

void qcamera::QCameraParametersIntf::dump(void)

{
  int *in_r1;
  
  pthread_mutex_lock((pthread_mutex_t *)(in_r1 + 1));
  if (*in_r1 != 0) {
    QCameraParameters::dump();
    pthread_mutex_unlock((pthread_mutex_t *)(in_r1 + 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdbac + 0xfdba6,DAT_000fdbb0 + 0xfdba8,DAT_000fdbb4 + 0xfdbaa);
}

