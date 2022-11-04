
/* qcamera::QCameraParametersIntf::getExposureTime() */

undefined8 __thiscall qcamera::QCameraParametersIntf::getExposureTime(QCameraParametersIntf *this)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined8 *)(*(int *)this + 0x7b0);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe82c + 0xfe826,DAT_000fe830 + 0xfe828,DAT_000fe834 + 0xfe82a);
}

