
/* qcamera::QCameraParametersIntf::updateCalibrationInfo() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateCalibrationInfo(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = QCameraParameters::updateCalibrationInfo();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00103018 + 0x103012,DAT_0010301c + 0x103014,DAT_00103020 + 0x103016);
}

