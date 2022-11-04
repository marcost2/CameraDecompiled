
/* qcamera::QCameraParametersIntf::getStreamRotation(cam_stream_type_t, cam_pp_feature_config_t&,
   cam_dimension_t&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getStreamRotation
          (QCameraParametersIntf *this,cam_stream_type_t param_1,cam_pp_feature_config_t *param_2,
          cam_dimension_t *param_3)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getStreamRotation
                      (*(QCameraParameters **)this,param_1,param_2,param_3);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fbf3c + 0xfbf36,DAT_000fbf40 + 0xfbf38,DAT_000fbf44 + 0xfbf3a);
}

