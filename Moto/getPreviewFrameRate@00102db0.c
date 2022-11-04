
/* qcamera::QCameraParametersIntf::getPreviewFrameRate() const */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getPreviewFrameRate(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(CameraParameters **)this != (CameraParameters *)0x0) {
    uVar1 = android::CameraParameters::getPreviewFrameRate(*(CameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102de0 + 0x102dda,DAT_00102de4 + 0x102ddc,DAT_00102de8 + 0x102dde);
}

