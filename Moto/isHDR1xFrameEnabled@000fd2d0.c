
/* qcamera::QCameraParametersIntf::isHDR1xFrameEnabled() */

undefined __thiscall
qcamera::QCameraParametersIntf::isHDR1xFrameEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x298);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd300 + 0xfd2f8,DAT_000fd304 + 0xfd2fa,DAT_000fd308 + 0xfd2fc);
}

