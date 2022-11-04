
/* qcamera::QCameraParametersIntf::getStreamPpMask(cam_stream_type_t, unsigned long long&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getStreamPpMask
          (QCameraParametersIntf *this,cam_stream_type_t param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getStreamPpMask(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe0d8 + 0xfe0d2,DAT_000fe0dc + 0xfe0d4,DAT_000fe0e0 + 0xfe0d6);
}

