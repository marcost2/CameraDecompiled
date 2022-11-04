
/* qcamera::QCameraParametersIntf::getPreviewSize(int*, int*) const */

void __thiscall
qcamera::QCameraParametersIntf::getPreviewSize
          (QCameraParametersIntf *this,int *param_1,int *param_2)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(CameraParameters **)this != (CameraParameters *)0x0) {
    android::CameraParameters::getPreviewSize(*(CameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00103060 + 0x103058,DAT_00103064 + 0x10305a,DAT_00103068 + 0x10305c);
}

