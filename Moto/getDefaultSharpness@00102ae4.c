
/* qcamera::QCameraParametersIntf::getDefaultSharpness() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getDefaultSharpness(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)this + 0x1d4) + 0x2fa0);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102b18 + 0x102b12,DAT_00102b1c + 0x102b14,DAT_00102b20 + 0x102b16);
}

