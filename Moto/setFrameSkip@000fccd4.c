
/* qcamera::QCameraParametersIntf::setFrameSkip(msm_vfe_frame_skip_pattern) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setFrameSkip
          (QCameraParametersIntf *this,msm_vfe_frame_skip_pattern param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setFrameSkip(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcd08 + 0xfcd02,DAT_000fcd0c + 0xfcd04,DAT_000fcd10 + 0xfcd06);
}

