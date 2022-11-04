
/* qcamera::QCameraParametersIntf::isFaceDetectionEnabled() */

uint __thiscall qcamera::QCameraParametersIntf::isFaceDetectionEnabled(QCameraParametersIntf *this)

{
  uint uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(uint *)(*(int *)this + 0x218);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    uVar1 = uVar1 & 5;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcc00 + 0xfcbfa,DAT_000fcc04 + 0xfcbfc,DAT_000fcc08 + 0xfcbfe);
}

