
/* qcamera::QCameraParametersIntf::updateRecordingHintValue(int) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateRecordingHintValue(QCameraParametersIntf *this,int param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateRecordingHintValue(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcd84 + 0xfcd7e,DAT_000fcd88 + 0xfcd80,DAT_000fcd8c + 0xfcd82);
}

