
/* qcamera::QCameraParametersIntf::getBatteryTemp() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getBatteryTemp(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = QCameraParameters::getBatteryTemp();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102da4 + 0x102d9e,DAT_00102da8 + 0x102da0,DAT_00102dac + 0x102da2);
}

