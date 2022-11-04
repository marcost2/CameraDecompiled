
/* qcamera::QCameraParametersIntf::updateFlashMode(cam_flash_mode_t) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateFlashMode
          (QCameraParametersIntf *this,cam_flash_mode_t param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateFlashMode(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe190 + 0xfe18a,DAT_000fe194 + 0xfe18c,DAT_000fe198 + 0xfe18e);
}

