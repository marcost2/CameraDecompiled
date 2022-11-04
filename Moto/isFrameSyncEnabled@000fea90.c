
/* qcamera::QCameraParametersIntf::isFrameSyncEnabled() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::isFrameSyncEnabled(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isFrameSyncEnabled(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000feac0 + 0xfeaba,DAT_000feac4 + 0xfeabc,DAT_000feac8 + 0xfeabe);
}

