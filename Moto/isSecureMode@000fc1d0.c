
/* qcamera::QCameraParametersIntf::isSecureMode() */

undefined __thiscall qcamera::QCameraParametersIntf::isSecureMode(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x2ef);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc200 + 0xfc1f8,DAT_000fc204 + 0xfc1fa,DAT_000fc208 + 0xfc1fc);
}

