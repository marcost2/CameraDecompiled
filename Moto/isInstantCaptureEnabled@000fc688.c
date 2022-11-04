
/* qcamera::QCameraParametersIntf::isInstantCaptureEnabled() */

undefined __thiscall
qcamera::QCameraParametersIntf::isInstantCaptureEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x7fd);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc6b8 + 0xfc6b0,DAT_000fc6bc + 0xfc6b2,DAT_000fc6c0 + 0xfc6b4);
}

