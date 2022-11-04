
/* qcamera::QCameraParametersIntf::updateThermallLevelToDaemon(signed char) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateThermallLevelToDaemon
          (QCameraParametersIntf *this,signed param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateThermallLevelToDaemon(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_001032fc + 0x1032f6,DAT_00103300 + 0x1032f8,DAT_00103304 + 0x1032fa);
}

