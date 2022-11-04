
/* qcamera::QCameraParametersIntf::isDISEnabled() */

undefined4 __thiscall qcamera::QCameraParametersIntf::isDISEnabled(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isDISEnabled(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcf24 + 0xfcf1e,DAT_000fcf28 + 0xfcf20,DAT_000fcf2c + 0xfcf22);
}

