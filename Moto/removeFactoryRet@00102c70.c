
/* qcamera::QCameraParametersIntf::removeFactoryRet() */

void __thiscall qcamera::QCameraParametersIntf::removeFactoryRet(QCameraParametersIntf *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(CameraParameters **)this != (CameraParameters *)0x0) {
    android::CameraParameters::remove(*(CameraParameters **)this,(char *)(DAT_00102cb0 + 0x102c86));
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102ca4 + 0x102c9c,DAT_00102ca8 + 0x102c9e,DAT_00102cac + 0x102ca0);
}

