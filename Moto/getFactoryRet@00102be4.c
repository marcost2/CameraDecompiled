
/* qcamera::QCameraParametersIntf::getFactoryRet() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getFactoryRet(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(char **)this != (char *)0x0) {
    uVar1 = android::CameraParameters::get(*(char **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102c1c + 0x102c12,DAT_00102c20 + 0x102c14,DAT_00102c24 + 0x102c16);
}

