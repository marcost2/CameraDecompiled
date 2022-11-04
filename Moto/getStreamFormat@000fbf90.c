
/* qcamera::QCameraParametersIntf::getStreamFormat(cam_stream_type_t, cam_format_t&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getStreamFormat
          (QCameraParametersIntf *this,cam_stream_type_t param_1,cam_format_t *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getStreamFormat(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fbfcc + 0xfbfc6,DAT_000fbfd0 + 0xfbfc8,DAT_000fbfd4 + 0xfbfca);
}

