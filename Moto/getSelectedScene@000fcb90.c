
/* qcamera::QCameraParametersIntf::getSelectedScene() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getSelectedScene(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getSelectedScene(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcbc0 + 0xfcbba,DAT_000fcbc4 + 0xfcbbc,DAT_000fcbc8 + 0xfcbbe);
}

