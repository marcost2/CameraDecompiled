
/* qcamera::QCameraParametersIntf::isAutoHDREnabled() */

undefined4 __thiscall qcamera::QCameraParametersIntf::isAutoHDREnabled(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isAutoHDREnabled(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fce64 + 0xfce5e,DAT_000fce68 + 0xfce60,DAT_000fce6c + 0xfce62);
}

