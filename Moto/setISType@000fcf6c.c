
/* qcamera::QCameraParametersIntf::setISType() */

undefined4 __thiscall qcamera::QCameraParametersIntf::setISType(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setISType(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcf9c + 0xfcf96,DAT_000fcfa0 + 0xfcf98,DAT_000fcfa4 + 0xfcf9a);
}

