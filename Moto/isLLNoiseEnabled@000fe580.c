
/* qcamera::QCameraParametersIntf::isLLNoiseEnabled() */

undefined4 __thiscall qcamera::QCameraParametersIntf::isLLNoiseEnabled(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isLLNoiseEnabled(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe5b0 + 0xfe5aa,DAT_000fe5b4 + 0xfe5ac,DAT_000fe5b8 + 0xfe5ae);
}

