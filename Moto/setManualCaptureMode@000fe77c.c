
/* qcamera::QCameraParametersIntf::setManualCaptureMode(cam_manual_capture_type) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setManualCaptureMode
          (QCameraParametersIntf *this,cam_manual_capture_type param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setManualCaptureMode(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe7b0 + 0xfe7aa,DAT_000fe7b4 + 0xfe7ac,DAT_000fe7b8 + 0xfe7ae);
}

