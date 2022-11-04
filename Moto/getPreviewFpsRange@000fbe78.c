
/* qcamera::QCameraParametersIntf::getPreviewFpsRange(int*, int*) const */

void __thiscall
qcamera::QCameraParametersIntf::getPreviewFpsRange
          (QCameraParametersIntf *this,int *param_1,int *param_2)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(CameraParameters **)this != (CameraParameters *)0x0) {
    android::CameraParameters::getPreviewFpsRange(*(CameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fbeb4 + 0xfbeac,DAT_000fbeb8 + 0xfbeae,DAT_000fbebc + 0xfbeb0);
}

