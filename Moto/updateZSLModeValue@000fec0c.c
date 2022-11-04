
/* qcamera::QCameraParametersIntf::updateZSLModeValue(bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateZSLModeValue(QCameraParametersIntf *this,bool param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateZSLModeValue(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fec40 + 0xfec3a,DAT_000fec44 + 0xfec3c,DAT_000fec48 + 0xfec3e);
}

