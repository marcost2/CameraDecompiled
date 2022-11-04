
/* qcamera::QCameraParametersIntf::getExifAltitude(rat_t*, char*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifAltitude
          (QCameraParametersIntf *this,rat_t *param_1,char *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifAltitude(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc914 + 0xfc90e,DAT_000fc918 + 0xfc910,DAT_000fc91c + 0xfc912);
}

