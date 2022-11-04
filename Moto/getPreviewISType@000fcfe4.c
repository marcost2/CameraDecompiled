
/* qcamera::QCameraParametersIntf::getPreviewISType() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getPreviewISType(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getPreviewISType(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd014 + 0xfd00e,DAT_000fd018 + 0xfd010,DAT_000fd01c + 0xfd012);
}

