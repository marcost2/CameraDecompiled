
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::entryCount() const */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::entryCount(CameraMetadata *this)

{
  undefined4 uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = __ThumbV7PILongThunk_get_camera_metadata_entry_count();
    return uVar1;
  }
  return 0;
}

