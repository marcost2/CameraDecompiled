
/* qcamera::QCameraParametersIntf::getParameters() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getParameters(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = QCameraParameters::getParameters();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fbe30 + 0xfbe2a,DAT_000fbe34 + 0xfbe2c,DAT_000fbe38 + 0xfbe2e);
}

