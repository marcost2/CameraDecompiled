
/* qcamera::QCameraParametersIntf::isWNREnabled() */

undefined __thiscall qcamera::QCameraParametersIntf::isWNREnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x232);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc278 + 0xfc270,DAT_000fc27c + 0xfc272,DAT_000fc280 + 0xfc274);
}

