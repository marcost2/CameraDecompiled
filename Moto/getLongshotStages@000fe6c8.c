
/* qcamera::QCameraParametersIntf::getLongshotStages() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getLongshotStages(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getLongshotStages(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe6f8 + 0xfe6f2,DAT_000fe6fc + 0xfe6f4,DAT_000fe700 + 0xfe6f6);
}

