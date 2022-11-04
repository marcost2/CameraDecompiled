
/* qcamera::QCameraParametersIntf::getZoom() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getZoom(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(char **)this != (char *)0x0) {
    uVar1 = android::CameraParameters::getInt(*(char **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00103344 + 0x103338,DAT_00103348 + 0x10333a,DAT_0010334c + 0x10333c);
}

