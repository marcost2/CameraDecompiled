
/* qcamera::QCameraParametersIntf::getBrightness() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getBrightness(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getBrightness(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdf30 + 0xfdf2a,DAT_000fdf34 + 0xfdf2c,DAT_000fdf38 + 0xfdf2e);
}

