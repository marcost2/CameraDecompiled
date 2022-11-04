
/* qcamera::QCameraParametersIntf::getStillMoreCapability() */

uint __thiscall qcamera::QCameraParametersIntf::getStillMoreCapability(QCameraParametersIntf *this)

{
  uint3 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(uint3 *)(*(int *)(*(int *)this + 0x1d4) + 0x3857);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return (uint)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe364 + 0xfe35e,DAT_000fe368 + 0xfe360,DAT_000fe36c + 0xfe362);
}

