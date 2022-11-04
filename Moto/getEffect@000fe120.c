
/* qcamera::QCameraParametersIntf::getEffect() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getEffect(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)this + 0x388);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe150 + 0xfe148,DAT_000fe154 + 0xfe14a,DAT_000fe158 + 0xfe14c);
}

