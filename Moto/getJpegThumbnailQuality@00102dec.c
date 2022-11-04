
/* qcamera::QCameraParametersIntf::getJpegThumbnailQuality() const */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getJpegThumbnailQuality(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(char **)this != (char *)0x0) {
    uVar1 = android::CameraParameters::getInt(*(char **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102e28 + 0x102e1c,DAT_00102e2c + 0x102e1e,DAT_00102e30 + 0x102e20);
}

