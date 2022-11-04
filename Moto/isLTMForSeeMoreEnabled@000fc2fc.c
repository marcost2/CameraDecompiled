
/* qcamera::QCameraParametersIntf::isLTMForSeeMoreEnabled() */

undefined __thiscall
qcamera::QCameraParametersIntf::isLTMForSeeMoreEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x7ac);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc32c + 0xfc324,DAT_000fc330 + 0xfc326,DAT_000fc334 + 0xfc328);
}

