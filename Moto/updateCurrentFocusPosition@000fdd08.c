
/* qcamera::QCameraParametersIntf::updateCurrentFocusPosition(cam_focus_pos_info_t&) */

void __thiscall
qcamera::QCameraParametersIntf::updateCurrentFocusPosition
          (QCameraParametersIntf *this,cam_focus_pos_info_t *param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    QCameraParameters::updateCurrentFocusPosition(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdd3c + 0xfdd34,DAT_000fdd40 + 0xfdd36,DAT_000fdd44 + 0xfdd38);
}

