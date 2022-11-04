
/* qcamera::QCameraParametersIntf::setAEBracketing() */

undefined4 __thiscall qcamera::QCameraParametersIntf::setAEBracketing(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setAEBracketing(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fca54 + 0xfca4e,DAT_000fca58 + 0xfca50,DAT_000fca5c + 0xfca52);
}

