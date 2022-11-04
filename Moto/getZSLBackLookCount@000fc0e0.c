
/* qcamera::QCameraParametersIntf::getZSLBackLookCount() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getZSLBackLookCount(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getZSLBackLookCount(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc110 + 0xfc10a,DAT_000fc114 + 0xfc10c,DAT_000fc118 + 0xfc10e);
}

