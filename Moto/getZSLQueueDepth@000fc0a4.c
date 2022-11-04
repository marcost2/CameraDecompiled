
/* qcamera::QCameraParametersIntf::getZSLQueueDepth() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getZSLQueueDepth(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getZSLQueueDepth(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc0d4 + 0xfc0ce,DAT_000fc0d8 + 0xfc0d0,DAT_000fc0dc + 0xfc0d2);
}

