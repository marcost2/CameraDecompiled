
/* qcamera::QCameraParametersIntf::getISOValueStr() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getISOValueStr(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getISOValueStr(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00103420 + 0x10341a,DAT_00103424 + 0x10341c,DAT_00103428 + 0x10341e);
}

