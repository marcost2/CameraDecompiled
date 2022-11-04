
/* qcamera::QCameraParametersIntf::getZSLBurstInterval() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getZSLBurstInterval(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getZSLBurstInterval(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc098 + 0xfc092,DAT_000fc09c + 0xfc094,DAT_000fc0a0 + 0xfc096);
}

