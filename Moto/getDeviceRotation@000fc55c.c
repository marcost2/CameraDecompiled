
/* qcamera::QCameraParametersIntf::getDeviceRotation() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getDeviceRotation(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getDeviceRotation(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc58c + 0xfc586,DAT_000fc590 + 0xfc588,DAT_000fc594 + 0xfc58a);
}

