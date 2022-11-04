
/* qcamera::QCameraParametersIntf::getFocusMode() const */

undefined4 __thiscall qcamera::QCameraParametersIntf::getFocusMode(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)this + 0x220);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd08c + 0xfd084,DAT_000fd090 + 0xfd086,DAT_000fd094 + 0xfd088);
}

