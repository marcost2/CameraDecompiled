
/* qcamera::QCameraParametersIntf::getExifSharpness() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getExifSharpness(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifSharpness(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_001028b4 + 0x1028ae,DAT_001028b8 + 0x1028b0,DAT_001028bc + 0x1028b2);
}

