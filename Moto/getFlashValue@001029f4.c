
/* qcamera::QCameraParametersIntf::getFlashValue() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getFlashValue(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getFlashValue(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102a24 + 0x102a1e,DAT_00102a28 + 0x102a20,DAT_00102a2c + 0x102a22);
}

