
/* qcamera::QCameraParametersIntf::getExifDigitalZoom(rat_t*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifDigitalZoom(QCameraParametersIntf *this,rat_t *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifDigitalZoom(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_001029e8 + 0x1029e2,DAT_001029ec + 0x1029e4,DAT_001029f0 + 0x1029e6);
}

