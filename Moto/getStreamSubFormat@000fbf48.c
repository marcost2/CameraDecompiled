
/* qcamera::QCameraParametersIntf::getStreamSubFormat(cam_stream_type_t, cam_sub_format_type_t&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getStreamSubFormat
          (QCameraParametersIntf *this,cam_stream_type_t param_1,cam_sub_format_type_t *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getStreamSubFormat(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fbf84 + 0xfbf7e,DAT_000fbf88 + 0xfbf80,DAT_000fbf8c + 0xfbf82);
}

