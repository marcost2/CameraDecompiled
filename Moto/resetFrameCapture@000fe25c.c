
/* qcamera::QCameraParametersIntf::resetFrameCapture(bool, bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::resetFrameCapture
          (QCameraParametersIntf *this,bool param_1,bool param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::resetFrameCapture(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe298 + 0xfe292,DAT_000fe29c + 0xfe294,DAT_000fe2a0 + 0xfe296);
}

