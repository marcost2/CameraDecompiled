
/* qcamera::QCameraParametersIntf::useJpegExifRotation() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::useJpegExifRotation(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::useJpegExifRotation(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc604 + 0xfc5fe,DAT_000fc608 + 0xfc600,DAT_000fc60c + 0xfc602);
}

