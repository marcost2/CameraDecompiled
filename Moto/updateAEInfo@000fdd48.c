
/* qcamera::QCameraParametersIntf::updateAEInfo(cam_3a_params_t&) */

void __thiscall
qcamera::QCameraParametersIntf::updateAEInfo(QCameraParametersIntf *this,cam_3a_params_t *param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    QCameraParameters::updateAEInfo(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdd7c + 0xfdd74,DAT_000fdd80 + 0xfdd76,DAT_000fdd84 + 0xfdd78);
}

