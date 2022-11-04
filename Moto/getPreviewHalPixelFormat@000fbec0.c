
/* qcamera::QCameraParametersIntf::getPreviewHalPixelFormat() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getPreviewHalPixelFormat(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getPreviewHalPixelFormat(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fbef0 + 0xfbeea,DAT_000fbef4 + 0xfbeec,DAT_000fbef8 + 0xfbeee);
}

