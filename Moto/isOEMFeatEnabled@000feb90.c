
/* qcamera::QCameraParametersIntf::isOEMFeatEnabled() */

undefined __thiscall qcamera::QCameraParametersIntf::isOEMFeatEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x7b8);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000febc0 + 0xfebb8,DAT_000febc4 + 0xfebba,DAT_000febc8 + 0xfebbc);
}

