
/* qcamera::QCameraParametersIntf::configureAEBracketing(cam_capture_frame_config_t&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::configureAEBracketing
          (QCameraParametersIntf *this,cam_capture_frame_config_t *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::configureAEBracketing(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe1d0 + 0xfe1ca,DAT_000fe1d4 + 0xfe1cc,DAT_000fe1d8 + 0xfe1ce);
}

