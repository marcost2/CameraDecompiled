
/* qcamera::QCameraParametersIntf::getNumOfExtraBuffersForPreview() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getNumOfExtraBuffersForPreview(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getNumOfExtraBuffersForPreview(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd73c + 0xfd736,DAT_000fd740 + 0xfd738,DAT_000fd744 + 0xfd73a);
}

