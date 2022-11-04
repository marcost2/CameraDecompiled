
/* qcamera::QCameraParametersIntf::getMaxZoom() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getMaxZoom(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)this + 0x1d4) + 0x4c);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00103274 + 0x10326e,DAT_00103278 + 0x103270,DAT_0010327c + 0x103272);
}

