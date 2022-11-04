
/* qcamera::QCameraParametersIntf::isTNRSnapshotEnabled() */

undefined __thiscall
qcamera::QCameraParametersIntf::isTNRSnapshotEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x235);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc2b4 + 0xfc2ac,DAT_000fc2b8 + 0xfc2ae,DAT_000fc2bc + 0xfc2b0);
}

