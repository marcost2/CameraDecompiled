
/* qcamera::QCameraParametersIntf::getWhiteBalanceStr() const */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getWhiteBalanceStr(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getWhiteBalanceStr(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102edc + 0x102ed6,DAT_00102ee0 + 0x102ed8,DAT_00102ee4 + 0x102eda);
}

