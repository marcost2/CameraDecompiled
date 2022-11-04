
/* qcamera::QCameraParametersIntf::updateDebugLevel() */

undefined4 __thiscall qcamera::QCameraParametersIntf::updateDebugLevel(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateDebugLevel(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fde7c + 0xfde76,DAT_000fde80 + 0xfde78,DAT_000fde84 + 0xfde7a);
}

