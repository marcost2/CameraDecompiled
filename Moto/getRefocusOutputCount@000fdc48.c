
/* qcamera::QCameraParametersIntf::getRefocusOutputCount() */

undefined __thiscall
qcamera::QCameraParametersIntf::getRefocusOutputCount(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)(*(int *)this + 0x1d4) + 0x384f);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdc7c + 0xfdc76,DAT_000fdc80 + 0xfdc78,DAT_000fdc84 + 0xfdc7a);
}

