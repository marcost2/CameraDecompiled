
/* qcamera::QCameraParametersIntf::commitAFBracket(cam_af_bracketing_t) */

undefined4 qcamera::QCameraParametersIntf::commitAFBracket(cam_af_bracketing_t param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  if (*(cam_af_bracketing_t *)param_1 != 0) {
    uVar1 = QCameraParameters::commitAFBracket(*(cam_af_bracketing_t *)param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd9fc + 0xfd9f6,DAT_000fda00 + 0xfd9f8,DAT_000fda04 + 0xfd9fa);
}

