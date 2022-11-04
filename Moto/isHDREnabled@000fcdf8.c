
/* qcamera::QCameraParametersIntf::isHDREnabled() */

undefined4 __thiscall qcamera::QCameraParametersIntf::isHDREnabled(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isHDREnabled(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fce28 + 0xfce22,DAT_000fce2c + 0xfce24,DAT_000fce30 + 0xfce26);
}

