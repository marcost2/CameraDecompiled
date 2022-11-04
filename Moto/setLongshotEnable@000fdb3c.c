
/* qcamera::QCameraParametersIntf::setLongshotEnable(bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setLongshotEnable(QCameraParametersIntf *this,bool param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setLongshotEnable(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdb70 + 0xfdb6a,DAT_000fdb74 + 0xfdb6c,DAT_000fdb78 + 0xfdb6e);
}

