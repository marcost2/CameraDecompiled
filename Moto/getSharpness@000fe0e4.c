
/* qcamera::QCameraParametersIntf::getSharpness() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getSharpness(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)this + 0x370);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe114 + 0xfe10c,DAT_000fe118 + 0xfe10e,DAT_000fe11c + 0xfe110);
}

