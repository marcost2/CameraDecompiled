
/* qcamera::QCameraParametersIntf::getMobicatMask() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getMobicatMask(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getMobicatMask(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd050 + 0xfd04a,DAT_000fd054 + 0xfd04c,DAT_000fd058 + 0xfd04e);
}

