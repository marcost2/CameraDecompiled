
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::clear() */

void __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::clear(CameraMetadata *this)

{
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print(6,DAT_0010a258 + 0x10a240,DAT_0010a25c + 0x10a242,DAT_0010a260 + 0x10a244);
    return;
  }
  if (*(int *)this != 0) {
    free_camera_metadata();
    *(undefined4 *)this = 0;
  }
  return;
}

