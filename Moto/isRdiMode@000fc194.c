
/* qcamera::QCameraParametersIntf::isRdiMode() */

undefined __thiscall qcamera::QCameraParametersIntf::isRdiMode(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x2ee);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc1c4 + 0xfc1bc,DAT_000fc1c8 + 0xfc1be,DAT_000fc1cc + 0xfc1c0);
}

