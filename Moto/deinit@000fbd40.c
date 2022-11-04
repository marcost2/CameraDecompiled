
/* qcamera::QCameraParametersIntf::deinit() */

void __thiscall qcamera::QCameraParametersIntf::deinit(QCameraParametersIntf *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    QCameraParameters::deinit(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fbd70 + 0xfbd68,DAT_000fbd74 + 0xfbd6a,DAT_000fbd78 + 0xfbd6c);
}

