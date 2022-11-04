
/* qcamera::QCameraParametersIntf::isNoDisplayMode() */

undefined __thiscall qcamera::QCameraParametersIntf::isNoDisplayMode(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x231);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc23c + 0xfc234,DAT_000fc240 + 0xfc236,DAT_000fc244 + 0xfc238);
}

