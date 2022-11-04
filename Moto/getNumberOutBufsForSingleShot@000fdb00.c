
/* qcamera::QCameraParametersIntf::getNumberOutBufsForSingleShot() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getNumberOutBufsForSingleShot(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getNumberOutBufsForSingleShot(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdb30 + 0xfdb2a,DAT_000fdb34 + 0xfdb2c,DAT_000fdb38 + 0xfdb2e);
}

