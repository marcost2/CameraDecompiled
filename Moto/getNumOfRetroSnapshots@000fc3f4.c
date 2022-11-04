
/* qcamera::QCameraParametersIntf::getNumOfRetroSnapshots() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getNumOfRetroSnapshots(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getNumOfRetroSnapshots(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc424 + 0xfc41e,DAT_000fc428 + 0xfc420,DAT_000fc42c + 0xfc422);
}

