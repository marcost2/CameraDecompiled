
/* qcamera::QCameraParametersIntf::addOnlineRotation(unsigned int, unsigned int, int) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::addOnlineRotation
          (QCameraParametersIntf *this,uint param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::addOnlineRotation
                      (*(QCameraParameters **)this,param_1,param_2,param_3);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd688 + 0xfd682,DAT_000fd68c + 0xfd684,DAT_000fd690 + 0xfd686);
}

