
/* qcamera::QCameraParametersIntf::getCameraPosition() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getCameraPosition(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)this + 0x1d4) + 4);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102ad8 + 0x102ad2,DAT_00102adc + 0x102ad4,DAT_00102ae0 + 0x102ad6);
}

