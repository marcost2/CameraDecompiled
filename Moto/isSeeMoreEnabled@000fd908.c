
/* qcamera::QCameraParametersIntf::isSeeMoreEnabled() */

undefined __thiscall qcamera::QCameraParametersIntf::isSeeMoreEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x2d8);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd938 + 0xfd930,DAT_000fd93c + 0xfd932,DAT_000fd940 + 0xfd934);
}

