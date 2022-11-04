
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::release() */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::release(CameraMetadata *this)

{
  undefined4 uVar1;
  
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print();
    return 0;
  }
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = 0;
  return uVar1;
}

