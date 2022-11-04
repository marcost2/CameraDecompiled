
/* qcamera::QCameraParametersIntf::getAecFrameBoundValue() */

undefined __thiscall
qcamera::QCameraParametersIntf::getAecFrameBoundValue(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x7fe);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc6f4 + 0xfc6ec,DAT_000fc6f8 + 0xfc6ee,DAT_000fc6fc + 0xfc6f0);
}

