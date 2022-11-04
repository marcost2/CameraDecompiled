
/* qcamera::QCameraParametersIntf::adjustPreviewFpsRange(cam_fps_range_t*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::adjustPreviewFpsRange
          (QCameraParametersIntf *this,cam_fps_range_t *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::adjustPreviewFpsRange(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd108 + 0xfd102,DAT_000fd10c + 0xfd104,DAT_000fd110 + 0xfd106);
}

