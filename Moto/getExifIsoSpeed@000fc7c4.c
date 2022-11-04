
/* qcamera::QCameraParametersIntf::getExifIsoSpeed() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getExifIsoSpeed(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifIsoSpeed(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc7f4 + 0xfc7ee,DAT_000fc7f8 + 0xfc7f0,DAT_000fc7fc + 0xfc7f2);
}

