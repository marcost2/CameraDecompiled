
/* qcamera::QCameraParametersIntf::updateAWBParams(cam_awb_params_t&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateAWBParams
          (QCameraParametersIntf *this,cam_awb_params_t *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateAWBParams(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd528 + 0xfd522,DAT_000fd52c + 0xfd524,DAT_000fd530 + 0xfd526);
}

