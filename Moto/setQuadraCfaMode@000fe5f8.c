
/* qcamera::QCameraParametersIntf::setQuadraCfaMode(unsigned int, bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setQuadraCfaMode
          (QCameraParametersIntf *this,uint param_1,bool param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setQuadraCfaMode(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe634 + 0xfe62e,DAT_000fe638 + 0xfe630,DAT_000fe63c + 0xfe632);
}

