
/* qcamera::QCameraParametersIntf::getMaxUnmatchedFramesInQueue() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getMaxUnmatchedFramesInQueue(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getMaxUnmatchedFramesInQueue(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc14c + 0xfc146,DAT_000fc150 + 0xfc148,DAT_000fc154 + 0xfc14a);
}

