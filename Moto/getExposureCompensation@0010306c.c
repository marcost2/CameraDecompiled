
/* qcamera::QCameraParametersIntf::getExposureCompensation() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExposureCompensation(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(char **)this != (char *)0x0) {
    uVar1 = android::CameraParameters::getInt(*(char **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_001030a8 + 0x10309c,DAT_001030ac + 0x10309e,DAT_001030b0 + 0x1030a0);
}

