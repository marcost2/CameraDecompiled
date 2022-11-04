
/* qcamera::QCameraParametersIntf::isSnapshotFlipChanged() */

undefined __thiscall
qcamera::QCameraParametersIntf::isSnapshotFlipChanged(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x268);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd4a8 + 0xfd4a0,DAT_000fd4ac + 0xfd4a2,DAT_000fd4b0 + 0xfd4a4);
}

