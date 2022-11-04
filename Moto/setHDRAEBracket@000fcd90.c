
/* qcamera::QCameraParametersIntf::setHDRAEBracket(cam_exp_bracketing_t) */

undefined4 qcamera::QCameraParametersIntf::setHDRAEBracket(cam_exp_bracketing_t param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  if (*(cam_exp_bracketing_t *)param_1 != 0) {
    uVar1 = QCameraParameters::setHDRAEBracket(*(cam_exp_bracketing_t *)param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcdec + 0xfcde6,DAT_000fcdf0 + 0xfcde8,DAT_000fcdf4 + 0xfcdea);
}

