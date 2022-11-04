
/* qcamera::QCameraParametersIntf::fdModeInVideo() */

undefined4 __thiscall qcamera::QCameraParametersIntf::fdModeInVideo(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = QCameraParameters::fdModeInVideo();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000feb84 + 0xfeb7e,DAT_000feb88 + 0xfeb80,DAT_000feb8c + 0xfeb82);
}

