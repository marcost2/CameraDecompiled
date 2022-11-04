
/* qcamera::QCameraParametersIntf::isStillMoreEnabled() */

undefined __thiscall qcamera::QCameraParametersIntf::isStillMoreEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x2d9);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd974 + 0xfd96c,DAT_000fd978 + 0xfd96e,DAT_000fd97c + 0xfd970);
}

