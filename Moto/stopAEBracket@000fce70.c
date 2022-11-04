
/* qcamera::QCameraParametersIntf::stopAEBracket() */

undefined4 __thiscall qcamera::QCameraParametersIntf::stopAEBracket(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::stopAEBracket(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcea0 + 0xfce9a,DAT_000fcea4 + 0xfce9c,DAT_000fcea8 + 0xfce9e);
}

