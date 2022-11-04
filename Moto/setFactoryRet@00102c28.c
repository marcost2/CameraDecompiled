
/* qcamera::QCameraParametersIntf::setFactoryRet(char const*) */

void __thiscall
qcamera::QCameraParametersIntf::setFactoryRet(QCameraParametersIntf *this,char *param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(CameraParameters **)this != (CameraParameters *)0x0) {
    android::CameraParameters::set
              (*(CameraParameters **)this,(char *)(DAT_00102c6c + 0x102c42),param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102c60 + 0x102c58,DAT_00102c64 + 0x102c5a,DAT_00102c68 + 0x102c5c);
}

