
/* qcamera::QCameraParametersIntf::getFrameFmtString(cam_format_t) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getFrameFmtString(QCameraParametersIntf *this,cam_format_t param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getFrameFmtString(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd37c + 0xfd376,DAT_000fd380 + 0xfd378,DAT_000fd384 + 0xfd37a);
}

