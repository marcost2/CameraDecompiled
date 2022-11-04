
/* qcamera::QCameraParametersIntf::getLog3A() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getLog3A(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)this + 0xd20);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_001031bc + 0x1031b4,DAT_001031c0 + 0x1031b6,DAT_001031c4 + 0x1031b8);
}

