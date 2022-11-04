
/* qcamera::QCameraParametersIntf::getTPMaxMetaSize() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getTPMaxMetaSize(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)this + 0x1d4) + 0x3e98);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd8fc + 0xfd8f6,DAT_000fd900 + 0xfd8f8,DAT_000fd904 + 0xfd8fa);
}

