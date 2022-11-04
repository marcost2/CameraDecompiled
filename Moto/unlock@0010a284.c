
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::unlock(camera_metadata const*)
   const */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::unlock
          (CameraMetadata *this,camera_metadata *param_1)

{
  if (this[4] == (CameraMetadata)0x0) {
    __android_log_print(6,DAT_0010a2c8 + 0x10a2b6,DAT_0010a2cc + 0x10a2b8,DAT_0010a2d0 + 0x10a2ba);
    return 0xffffffda;
  }
  if (*(camera_metadata **)this != param_1) {
    __android_log_print(6,DAT_0010a2d4 + 0x10a29e,DAT_0010a2d8 + 0x10a2a0,DAT_0010a2dc + 0x10a2a2);
    return 0xffffffea;
  }
  this[4] = (CameraMetadata)0x0;
  return 0;
}

