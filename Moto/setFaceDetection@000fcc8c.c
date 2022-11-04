
/* qcamera::QCameraParametersIntf::setFaceDetection(bool, bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setFaceDetection
          (QCameraParametersIntf *this,bool param_1,bool param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setFaceDetection(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fccc8 + 0xfccc2,DAT_000fcccc + 0xfccc4,DAT_000fccd0 + 0xfccc6);
}

