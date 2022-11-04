
/* qcamera::QCameraParametersIntf::setHDRSceneEnable(bool) */

void __thiscall
qcamera::QCameraParametersIntf::setHDRSceneEnable(QCameraParametersIntf *this,bool param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    QCameraParameters::setHDRSceneEnable(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd4e8 + 0xfd4e0,DAT_000fd4ec + 0xfd4e2,DAT_000fd4f0 + 0xfd4e4);
}

