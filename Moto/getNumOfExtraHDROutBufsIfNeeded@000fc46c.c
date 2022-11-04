
/* qcamera::QCameraParametersIntf::getNumOfExtraHDROutBufsIfNeeded() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getNumOfExtraHDROutBufsIfNeeded(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getNumOfExtraHDROutBufsIfNeeded(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc49c + 0xfc496,DAT_000fc4a0 + 0xfc498,DAT_000fc4a4 + 0xfc49a);
}

