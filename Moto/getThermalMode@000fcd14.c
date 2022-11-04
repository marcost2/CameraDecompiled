
/* qcamera::QCameraParametersIntf::getThermalMode() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getThermalMode(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)this + 0x26c);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcd44 + 0xfcd3c,DAT_000fcd48 + 0xfcd3e,DAT_000fcd4c + 0xfcd40);
}

