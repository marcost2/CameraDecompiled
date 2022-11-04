
/* qcamera::QCameraParametersIntf::is4k2kVideoResolution() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::is4k2kVideoResolution(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = QCameraParameters::is4k2kVideoResolution();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdeb8 + 0xfdeb2,DAT_000fdebc + 0xfdeb4,DAT_000fdec0 + 0xfdeb6);
}

