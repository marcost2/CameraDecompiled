
/* qcamera::QCameraParametersIntf::setJpegRotation(int) */

void __thiscall
qcamera::QCameraParametersIntf::setJpegRotation(QCameraParametersIntf *this,int param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    QCameraParameters::setJpegRotation(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe8b0 + 0xfe8a8,DAT_000fe8b4 + 0xfe8aa,DAT_000fe8b8 + 0xfe8ac);
}

