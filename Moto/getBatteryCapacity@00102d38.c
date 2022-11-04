
/* qcamera::QCameraParametersIntf::getBatteryCapacity() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getBatteryCapacity(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = QCameraParameters::getBatteryCapacity();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102d68 + 0x102d62,DAT_00102d6c + 0x102d64,DAT_00102d70 + 0x102d66);
}

