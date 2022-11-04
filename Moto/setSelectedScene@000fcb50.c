
/* qcamera::QCameraParametersIntf::setSelectedScene(cam_scene_mode_type) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setSelectedScene
          (QCameraParametersIntf *this,cam_scene_mode_type param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setSelectedScene(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcb84 + 0xfcb7e,DAT_000fcb88 + 0xfcb80,DAT_000fcb8c + 0xfcb82);
}

