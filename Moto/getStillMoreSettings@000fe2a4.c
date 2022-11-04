
/* qcamera::QCameraParametersIntf::getStillMoreSettings() */

uint __thiscall qcamera::QCameraParametersIntf::getStillMoreSettings(QCameraParametersIntf *this)

{
  uint3 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(uint3 *)(*(int *)this + 0x28d);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return (uint)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe2d8 + 0xfe2d2,DAT_000fe2dc + 0xfe2d4,DAT_000fe2e0 + 0xfe2d6);
}

