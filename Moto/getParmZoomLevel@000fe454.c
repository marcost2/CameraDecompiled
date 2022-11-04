
/* qcamera::QCameraParametersIntf::getParmZoomLevel() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getParmZoomLevel(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)this + 0x37c);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe484 + 0xfe47c,DAT_000fe488 + 0xfe47e,DAT_000fe48c + 0xfe480);
}

