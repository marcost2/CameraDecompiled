
/* qcamera::QCameraParametersIntf::getSupportedPictureSizes(android::Vector<android::Size>&) */

void qcamera::QCameraParametersIntf::getSupportedPictureSizes(Vector *param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  if (*(Vector **)param_1 != (Vector *)0x0) {
    android::CameraParameters::getSupportedPictureSizes(*(Vector **)param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102fa0 + 0x102f98,DAT_00102fa4 + 0x102f9a,DAT_00102fa8 + 0x102f9c);
}

