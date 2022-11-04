
/* qcamera::QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getNumOfExtraHDRInBufsIfNeeded(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc460 + 0xfc45a,DAT_000fc464 + 0xfc45c,DAT_000fc468 + 0xfc45e);
}

