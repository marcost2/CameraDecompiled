
/* qcamera::QCameraParametersIntf::setReprocCount() */

void __thiscall qcamera::QCameraParametersIntf::setReprocCount(QCameraParametersIntf *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    QCameraParameters::setReprocCount(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe538 + 0xfe530,DAT_000fe53c + 0xfe532,DAT_000fe540 + 0xfe534);
}

