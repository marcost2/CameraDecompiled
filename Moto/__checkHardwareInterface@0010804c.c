
/* qcamera::MotCameraFactory::__checkHardwareInterface() */

undefined4 __thiscall qcamera::MotCameraFactory::__checkHardwareInterface(MotCameraFactory *this)

{
  if ((*(int *)this != 0) &&
     (*(int *)(QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20) != 0)) {
    return 1;
  }
  __android_log_print(6,DAT_00108078 + 0x10806e,DAT_0010807c + 0x108070,DAT_00108080 + 0x108072);
  return 0;
}

