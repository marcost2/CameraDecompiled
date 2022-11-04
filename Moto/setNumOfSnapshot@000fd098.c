
/* qcamera::QCameraParametersIntf::setNumOfSnapshot() */

undefined4 __thiscall qcamera::QCameraParametersIntf::setNumOfSnapshot(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setNumOfSnapshot(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd0c8 + 0xfd0c2,DAT_000fd0cc + 0xfd0c4,DAT_000fd0d0 + 0xfd0c6);
}

