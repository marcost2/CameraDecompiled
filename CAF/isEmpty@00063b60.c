
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::isEmpty() const */

uint __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::isEmpty(CameraMetadata *this)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)this != 0) {
    uVar1 = get_camera_metadata_entry_count();
    uVar2 = count_leading_zeroes(uVar1);
    return uVar2 >> 5;
  }
  return 1;
}

