
/* qcamera::QCameraParametersIntf::getFocusModeStr() const */

undefined4 __thiscall qcamera::QCameraParametersIntf::getFocusModeStr(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getFocusModeStr(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102ea0 + 0x102e9a,DAT_00102ea4 + 0x102e9c,DAT_00102ea8 + 0x102e9e);
}

