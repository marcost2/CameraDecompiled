
/* qcamera::QCameraParametersIntf::isUbiFocusEnabled() */

uint __thiscall qcamera::QCameraParametersIntf::isUbiFocusEnabled(QCameraParametersIntf *this)

{
  int iVar1;
  uint uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x2c8) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = count_leading_zeroes((uint)*(byte *)(iVar1 + 0x2c9));
      uVar2 = uVar2 >> 5;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd808 + 0xfd800,DAT_000fd80c + 0xfd802,DAT_000fd810 + 0xfd804);
}

