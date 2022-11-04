
/* qcamera::QCameraParametersIntf::getDualCameraMode() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getDualCameraMode(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getDualCameraMode(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fbe6c + 0xfbe66,DAT_000fbe70 + 0xfbe68,DAT_000fbe74 + 0xfbe6a);
}

