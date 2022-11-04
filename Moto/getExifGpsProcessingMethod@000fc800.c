
/* qcamera::QCameraParametersIntf::getExifGpsProcessingMethod(char*, unsigned int&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifGpsProcessingMethod
          (QCameraParametersIntf *this,char *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifGpsProcessingMethod
                      (*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc83c + 0xfc836,DAT_000fc840 + 0xfc838,DAT_000fc844 + 0xfc83a);
}

