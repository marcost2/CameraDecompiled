
/* qcamera::QCameraParametersIntf::getBurstCountForAdvancedCapture() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getBurstCountForAdvancedCapture(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getBurstCountForAdvancedCapture(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdab8 + 0xfdab2,DAT_000fdabc + 0xfdab4,DAT_000fdac0 + 0xfdab6);
}

