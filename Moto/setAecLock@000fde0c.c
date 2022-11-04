
/* qcamera::QCameraParametersIntf::setAecLock(char const*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setAecLock(QCameraParametersIntf *this,char *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setAecLock(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fde40 + 0xfde3a,DAT_000fde44 + 0xfde3c,DAT_000fde48 + 0xfde3e);
}

