
/* qcamera::QCameraParametersIntf::bundleRelatedCameras(bool, unsigned int) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::bundleRelatedCameras
          (QCameraParametersIntf *this,bool param_1,uint param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::bundleRelatedCameras(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000feb48 + 0xfeb42,DAT_000feb4c + 0xfeb44,DAT_000feb50 + 0xfeb46);
}

