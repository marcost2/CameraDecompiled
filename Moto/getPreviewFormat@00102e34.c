
/* qcamera::QCameraParametersIntf::getPreviewFormat() const */

undefined4 __thiscall qcamera::QCameraParametersIntf::getPreviewFormat(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(CameraParameters **)this != (CameraParameters *)0x0) {
    uVar1 = android::CameraParameters::getPreviewFormat(*(CameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102e64 + 0x102e5e,DAT_00102e68 + 0x102e60,DAT_00102e6c + 0x102e62);
}

