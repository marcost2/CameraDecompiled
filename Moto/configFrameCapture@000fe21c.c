
/* qcamera::QCameraParametersIntf::configFrameCapture(bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::configFrameCapture(QCameraParametersIntf *this,bool param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::configFrameCapture(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe250 + 0xfe24a,DAT_000fe254 + 0xfe24c,DAT_000fe258 + 0xfe24e);
}

