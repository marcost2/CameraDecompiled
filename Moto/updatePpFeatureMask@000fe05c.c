
/* qcamera::QCameraParametersIntf::updatePpFeatureMask(cam_stream_type_t) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updatePpFeatureMask
          (QCameraParametersIntf *this,cam_stream_type_t param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updatePpFeatureMask(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe090 + 0xfe08a,DAT_000fe094 + 0xfe08c,DAT_000fe098 + 0xfe08e);
}

