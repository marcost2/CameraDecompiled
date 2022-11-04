
/* qcamera::QCameraParametersIntf::isTruePortraitEnabled() */

undefined __thiscall
qcamera::QCameraParametersIntf::isTruePortraitEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x302);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd8bc + 0xfd8b4,DAT_000fd8c0 + 0xfd8b6,DAT_000fd8c4 + 0xfd8b8);
}

