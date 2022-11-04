
/* qcamera::QCameraParametersIntf::isInstantAECEnabled() */

undefined __thiscall
qcamera::QCameraParametersIntf::isInstantAECEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x7fc);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc67c + 0xfc674,DAT_000fc680 + 0xfc676,DAT_000fc684 + 0xfc678);
}

