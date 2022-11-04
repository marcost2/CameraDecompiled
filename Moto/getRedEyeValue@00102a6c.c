
/* qcamera::QCameraParametersIntf::getRedEyeValue() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getRedEyeValue(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getRedEyeValue(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102a9c + 0x102a96,DAT_00102aa0 + 0x102a98,DAT_00102aa4 + 0x102a9a);
}

