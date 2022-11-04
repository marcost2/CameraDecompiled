
/* qcamera::QCameraParametersIntf::getSceneModeStr() const */

undefined4 __thiscall qcamera::QCameraParametersIntf::getSceneModeStr(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getSceneModeStr(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102f18 + 0x102f12,DAT_00102f1c + 0x102f14,DAT_00102f20 + 0x102f16);
}

