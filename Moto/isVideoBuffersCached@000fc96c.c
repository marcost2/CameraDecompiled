
/* qcamera::QCameraParametersIntf::isVideoBuffersCached() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::isVideoBuffersCached(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isVideoBuffersCached(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc99c + 0xfc996,DAT_000fc9a0 + 0xfc998,DAT_000fc9a4 + 0xfc99a);
}

