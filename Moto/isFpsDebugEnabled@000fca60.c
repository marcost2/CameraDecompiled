
/* qcamera::QCameraParametersIntf::isFpsDebugEnabled() */

undefined __thiscall qcamera::QCameraParametersIntf::isFpsDebugEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x21d);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fca90 + 0xfca88,DAT_000fca94 + 0xfca8a,DAT_000fca98 + 0xfca8c);
}

