
/* qcamera::QCameraParametersIntf::isAEBracketEnabled() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::isAEBracketEnabled(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isAEBracketEnabled(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fca18 + 0xfca12,DAT_000fca1c + 0xfca14,DAT_000fca20 + 0xfca16);
}

