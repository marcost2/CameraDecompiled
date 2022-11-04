
/* qcamera::QCameraParametersIntf::getMotCustomMetadata(unsigned char**, unsigned int*) */

void __thiscall
qcamera::QCameraParametersIntf::getMotCustomMetadata
          (QCameraParametersIntf *this,uchar **param_1,uint *param_2)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    QCameraParameters::getMotCustomMetadata(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00103180 + 0x103178,DAT_00103184 + 0x10317a,DAT_00103188 + 0x10317c);
}

