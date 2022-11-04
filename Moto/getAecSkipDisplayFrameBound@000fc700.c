
/* qcamera::QCameraParametersIntf::getAecSkipDisplayFrameBound() */

undefined __thiscall
qcamera::QCameraParametersIntf::getAecSkipDisplayFrameBound(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x7ff);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc730 + 0xfc728,DAT_000fc734 + 0xfc72a,DAT_000fc738 + 0xfc72c);
}

