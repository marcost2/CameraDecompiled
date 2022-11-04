
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::append(android::hardware::camera::common::V1_0::helper::CameraMetadata
   const&) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::append
          (CameraMetadata *this,CameraMetadata *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print(6,DAT_0010a3fc + 0x10a3c8,DAT_0010a400 + 0x10a3ca,DAT_0010a404 + 0x10a3cc);
    return 0xffffffda;
  }
  uVar3 = *(undefined4 *)param_1;
  uVar1 = get_camera_metadata_entry_count(uVar3);
  uVar2 = get_camera_metadata_data_count(uVar3);
  resizeIfNeeded(this,uVar1,uVar2);
  uVar3 = append_camera_metadata(*(undefined4 *)this,uVar3);
  return uVar3;
}

