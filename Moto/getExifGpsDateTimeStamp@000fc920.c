
/* qcamera::QCameraParametersIntf::getExifGpsDateTimeStamp(char*, unsigned int, rat_t*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifGpsDateTimeStamp
          (QCameraParametersIntf *this,char *param_1,uint param_2,rat_t *param_3)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifGpsDateTimeStamp
                      (*(QCameraParameters **)this,param_1,param_2,param_3);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc960 + 0xfc95a,DAT_000fc964 + 0xfc95c,DAT_000fc968 + 0xfc95e);
}

