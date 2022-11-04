
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::append(camera_metadata const*)
    */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::append
          (CameraMetadata *this,CameraMetadata *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print();
    return 0xffffffda;
  }
  uVar1 = get_camera_metadata_entry_count();
  uVar2 = get_camera_metadata_data_count();
  resizeIfNeeded(this,uVar1,uVar2);
  uVar3 = __ThumbV7PILongThunk_append_camera_metadata();
  return uVar3;
}

