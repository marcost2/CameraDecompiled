
/* qcamera::QCameraParametersIntf::getRelatedCamCalibration(cam_related_system_calibration_data_t*)
    */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getRelatedCamCalibration
          (QCameraParametersIntf *this,cam_related_system_calibration_data_t *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getRelatedCamCalibration(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000feb00 + 0xfeafa,DAT_000feb04 + 0xfeafc,DAT_000feb08 + 0xfeafe);
}

