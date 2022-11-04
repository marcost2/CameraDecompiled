
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::clear() */

void __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::clear(CameraMetadata *this)

{
  if (this[4] != (CameraMetadata)0x0) {
    __ThumbV7PILongThunk___android_log_print();
    return;
  }
  if (*(int *)this != 0) {
    free_camera_metadata();
    *(undefined4 *)this = 0;
  }
  return;
}

