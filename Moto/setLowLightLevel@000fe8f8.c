
/* qcamera::QCameraParametersIntf::setLowLightLevel(cam_low_light_mode_t) */

void __thiscall
qcamera::QCameraParametersIntf::setLowLightLevel
          (QCameraParametersIntf *this,cam_low_light_mode_t param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    *(cam_low_light_mode_t *)(*(int *)this + 0x7a8) = param_1;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe928 + 0xfe922,DAT_000fe92c + 0xfe924,DAT_000fe930 + 0xfe926);
}

