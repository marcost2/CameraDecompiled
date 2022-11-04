
/* qcamera::QCameraParametersIntf::getExifLongitude(rat_t*, char*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifLongitude
          (QCameraParametersIntf *this,rat_t *param_1,char *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifLongitude(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc8cc + 0xfc8c6,DAT_000fc8d0 + 0xfc8c8,DAT_000fc8d4 + 0xfc8ca);
}

