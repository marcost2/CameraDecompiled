
/* qcamera::QCameraParametersIntf::isReprocScaleEnabled() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::isReprocScaleEnabled(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isReprocScaleEnabled(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fec7c + 0xfec76,DAT_000fec80 + 0xfec78,DAT_000fec84 + 0xfec7a);
}

