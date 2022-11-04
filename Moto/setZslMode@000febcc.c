
/* qcamera::QCameraParametersIntf::setZslMode(bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setZslMode(QCameraParametersIntf *this,bool param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setZslMode(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fec00 + 0xfebfa,DAT_000fec04 + 0xfebfc,DAT_000fec08 + 0xfebfe);
}

