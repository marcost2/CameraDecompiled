
/* qcamera::QCameraParametersIntf::getEffectValue() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getEffectValue(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getEffectValue(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc640 + 0xfc63a,DAT_000fc644 + 0xfc63c,DAT_000fc648 + 0xfc63e);
}

