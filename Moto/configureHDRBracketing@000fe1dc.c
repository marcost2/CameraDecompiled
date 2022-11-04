
/* qcamera::QCameraParametersIntf::configureHDRBracketing(cam_capture_frame_config_t&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::configureHDRBracketing
          (QCameraParametersIntf *this,cam_capture_frame_config_t *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::configureHDRBracketing(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe210 + 0xfe20a,DAT_000fe214 + 0xfe20c,DAT_000fe218 + 0xfe20e);
}

