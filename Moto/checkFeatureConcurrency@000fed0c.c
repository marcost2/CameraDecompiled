
/* qcamera::QCameraParametersIntf::checkFeatureConcurrency() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::checkFeatureConcurrency(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::checkFeatureConcurrency(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fed3c + 0xfed36,DAT_000fed40 + 0xfed38,DAT_000fed44 + 0xfed3a);
}

