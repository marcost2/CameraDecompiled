
/* qcamera::QCameraParametersIntf::getASDStateString(cam_auto_scene_t) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getASDStateString
          (QCameraParametersIntf *this,cam_auto_scene_t param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getASDStateString(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd568 + 0xfd562,DAT_000fd56c + 0xfd564,DAT_000fd570 + 0xfd566);
}

