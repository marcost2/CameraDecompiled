
/* qcamera::QCameraParametersIntf::isOptiZoomEnabled() */

undefined4 __thiscall qcamera::QCameraParametersIntf::isOptiZoomEnabled(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isOptiZoomEnabled(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd9b0 + 0xfd9aa,DAT_000fd9b4 + 0xfd9ac,DAT_000fd9b8 + 0xfd9ae);
}

