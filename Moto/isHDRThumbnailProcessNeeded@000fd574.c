
/* qcamera::QCameraParametersIntf::isHDRThumbnailProcessNeeded() */

undefined __thiscall
qcamera::QCameraParametersIntf::isHDRThumbnailProcessNeeded(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x29a);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd5a4 + 0xfd59c,DAT_000fd5a8 + 0xfd59e,DAT_000fd5ac + 0xfd5a0);
}

