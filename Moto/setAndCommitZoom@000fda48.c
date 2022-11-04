
/* qcamera::QCameraParametersIntf::setAndCommitZoom(int) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setAndCommitZoom(QCameraParametersIntf *this,int param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setAndCommitZoom(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fda7c + 0xfda76,DAT_000fda80 + 0xfda78,DAT_000fda84 + 0xfda7a);
}

