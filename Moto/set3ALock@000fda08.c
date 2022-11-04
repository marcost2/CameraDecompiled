
/* qcamera::QCameraParametersIntf::set3ALock(bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::set3ALock(QCameraParametersIntf *this,bool param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::set3ALock(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fda3c + 0xfda36,DAT_000fda40 + 0xfda38,DAT_000fda44 + 0xfda3a);
}

