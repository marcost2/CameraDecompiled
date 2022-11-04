
/* qcamera::QCameraParametersIntf::getExifDateTime(android::String8&, android::String8&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifDateTime
          (QCameraParametersIntf *this,String8 *param_1,String8 *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifDateTime(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc778 + 0xfc772,DAT_000fc77c + 0xfc774,DAT_000fc780 + 0xfc776);
}

