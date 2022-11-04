
/* qcamera::QCameraParametersIntf::getPictureSize(int*, int*) */

void __thiscall
qcamera::QCameraParametersIntf::getPictureSize
          (QCameraParametersIntf *this,int *param_1,int *param_2)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(CameraParameters **)this != (CameraParameters *)0x0) {
    android::CameraParameters::getPictureSize(*(CameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102f60 + 0x102f58,DAT_00102f64 + 0x102f5a,DAT_00102f68 + 0x102f5c);
}

