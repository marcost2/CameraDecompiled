
/* qcamera::QCameraParametersIntf::isHDR1xExtraBufferNeeded() */

undefined __thiscall
qcamera::QCameraParametersIntf::isHDR1xExtraBufferNeeded(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x29b);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd3b8 + 0xfd3b0,DAT_000fd3bc + 0xfd3b2,DAT_000fd3c0 + 0xfd3b4);
}

