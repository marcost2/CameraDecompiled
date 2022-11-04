
/* qcamera::QCameraParametersIntf::getStreamDimension(cam_stream_type_t, cam_dimension_t&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getStreamDimension
          (QCameraParametersIntf *this,cam_stream_type_t param_1,cam_dimension_t *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getStreamDimension(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc014 + 0xfc00e,DAT_000fc018 + 0xfc010,DAT_000fc01c + 0xfc012);
}

