
/* qcamera::QCameraParametersIntf::updateFocusDistances(cam_focus_distances_info_t*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateFocusDistances
          (QCameraParametersIntf *this,cam_focus_distances_info_t *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateFocusDistances(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc9dc + 0xfc9d6,DAT_000fc9e0 + 0xfc9d8,DAT_000fc9e4 + 0xfc9da);
}

