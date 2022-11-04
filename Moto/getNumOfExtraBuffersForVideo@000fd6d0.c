
/* qcamera::QCameraParametersIntf::getNumOfExtraBuffersForVideo() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getNumOfExtraBuffersForVideo(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getNumOfExtraBuffersForVideo(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd700 + 0xfd6fa,DAT_000fd704 + 0xfd6fc,DAT_000fd708 + 0xfd6fe);
}

