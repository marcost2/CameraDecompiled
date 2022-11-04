
/* qcamera::QCameraParametersIntf::isYUVFrameInfoNeeded() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::isYUVFrameInfoNeeded(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isYUVFrameInfoNeeded(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd33c + 0xfd336,DAT_000fd340 + 0xfd338,DAT_000fd344 + 0xfd33a);
}

