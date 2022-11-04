
/* qcamera::QCameraParametersIntf::getMinSharpness() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getMinSharpness(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(char **)this != (char *)0x0) {
    uVar1 = android::CameraParameters::getInt(*(char **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102cf0 + 0x102ce4,DAT_00102cf4 + 0x102ce6,DAT_00102cf8 + 0x102ce8);
}

