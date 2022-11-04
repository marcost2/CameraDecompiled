
/* qcamera::QCameraParametersIntf::getExifWhiteBalance() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifWhiteBalance(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifWhiteBalance(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_001029a8 + 0x1029a2,DAT_001029ac + 0x1029a4,DAT_001029b0 + 0x1029a6);
}

