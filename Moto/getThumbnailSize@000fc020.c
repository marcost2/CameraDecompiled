
/* qcamera::QCameraParametersIntf::getThumbnailSize(int*, int*) const */

void __thiscall
qcamera::QCameraParametersIntf::getThumbnailSize
          (QCameraParametersIntf *this,int *param_1,int *param_2)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    QCameraParameters::getThumbnailSize(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc05c + 0xfc054,DAT_000fc060 + 0xfc056,DAT_000fc064 + 0xfc058);
}

