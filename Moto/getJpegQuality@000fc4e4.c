
/* qcamera::QCameraParametersIntf::getJpegQuality() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getJpegQuality(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getJpegQuality(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc514 + 0xfc50e,DAT_000fc518 + 0xfc510,DAT_000fc51c + 0xfc512);
}

