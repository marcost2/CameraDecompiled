
/* qcamera::QCameraParametersIntf::forceInitBatchUpdate() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::forceInitBatchUpdate(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::forceInitBatchUpdate(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_001031f8 + 0x1031f2,DAT_001031fc + 0x1031f4,DAT_00103200 + 0x1031f6);
}

