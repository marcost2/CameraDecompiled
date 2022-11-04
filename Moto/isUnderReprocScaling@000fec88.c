
/* qcamera::QCameraParametersIntf::isUnderReprocScaling() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::isUnderReprocScaling(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isUnderReprocScaling(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fecb8 + 0xfecb2,DAT_000fecbc + 0xfecb4,DAT_000fecc0 + 0xfecb6);
}

