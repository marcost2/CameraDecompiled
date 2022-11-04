
/* qcamera::QCameraParametersIntf::getFlipMode(cam_stream_type_t) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getFlipMode(QCameraParametersIntf *this,cam_stream_type_t param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getFlipMode(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd288 + 0xfd282,DAT_000fd28c + 0xfd284,DAT_000fd290 + 0xfd286);
}

