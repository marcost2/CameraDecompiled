
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::release() */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::release(CameraMetadata *this)

{
  undefined4 uVar1;
  
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print(6,DAT_0010a308 + 0x10a2f4,DAT_0010a30c + 0x10a2f6,DAT_0010a310 + 0x10a2f8);
    return 0;
  }
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = 0;
  return uVar1;
}

