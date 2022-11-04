
/* qcamera::QCameraParametersIntf::setFrameSyncEnabled(bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setFrameSyncEnabled(QCameraParametersIntf *this,bool param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setFrameSyncEnabled(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fea84 + 0xfea7e,DAT_000fea88 + 0xfea80,DAT_000fea8c + 0xfea82);
}

