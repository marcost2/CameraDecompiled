
/* qcamera::QCameraParametersIntf::isZSLMode() */

undefined4 __thiscall qcamera::QCameraParametersIntf::isZSLMode(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isZSLMode(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc188 + 0xfc182,DAT_000fc18c + 0xfc184,DAT_000fc190 + 0xfc186);
}

