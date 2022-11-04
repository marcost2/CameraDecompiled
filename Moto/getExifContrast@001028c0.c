
/* qcamera::QCameraParametersIntf::getExifContrast() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getExifContrast(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifContrast(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_001028f0 + 0x1028ea,DAT_001028f4 + 0x1028ec,DAT_001028f8 + 0x1028ee);
}

