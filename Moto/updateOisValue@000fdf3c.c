
/* qcamera::QCameraParametersIntf::updateOisValue(bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateOisValue(QCameraParametersIntf *this,bool param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateOisValue(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdf70 + 0xfdf6a,DAT_000fdf74 + 0xfdf6c,DAT_000fdf78 + 0xfdf6e);
}

