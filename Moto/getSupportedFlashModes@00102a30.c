
/* qcamera::QCameraParametersIntf::getSupportedFlashModes() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getSupportedFlashModes(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getSupportedFlashModes(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102a60 + 0x102a5a,DAT_00102a64 + 0x102a5c,DAT_00102a68 + 0x102a5e);
}

