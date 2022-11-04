
/* qcamera::QCameraParametersIntf::getExifLatitude(rat_t*, char*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifLatitude
          (QCameraParametersIntf *this,rat_t *param_1,char *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifLatitude(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc884 + 0xfc87e,DAT_000fc888 + 0xfc880,DAT_000fc88c + 0xfc882);
}

