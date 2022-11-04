
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::append(camera_metadata const*)
    */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::append
          (CameraMetadata *this,camera_metadata *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print(6,DAT_0010a450 + 0x10a41c,DAT_0010a454 + 0x10a41e,DAT_0010a458 + 0x10a420);
    return 0xffffffda;
  }
  uVar1 = get_camera_metadata_entry_count(param_1);
  uVar2 = get_camera_metadata_data_count(param_1);
  resizeIfNeeded(this,uVar1,uVar2);
  uVar3 = append_camera_metadata(*(undefined4 *)this,param_1);
  return uVar3;
}

