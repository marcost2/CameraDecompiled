
/* qcamera::QCameraParametersIntf::setFaceDetectionOption(bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setFaceDetectionOption(QCameraParametersIntf *this,bool param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setFaceDetectionOption(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcc40 + 0xfcc3a,DAT_000fcc44 + 0xfcc3c,DAT_000fcc48 + 0xfcc3e);
}

