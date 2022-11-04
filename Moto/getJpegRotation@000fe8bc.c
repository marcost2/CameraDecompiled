
/* qcamera::QCameraParametersIntf::getJpegRotation() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getJpegRotation(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)this + 0x7a0);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe8ec + 0xfe8e4,DAT_000fe8f0 + 0xfe8e6,DAT_000fe8f4 + 0xfe8e8);
}

