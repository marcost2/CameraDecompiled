
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::update(camera_metadata_ro_entry
   const&) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::update
          (CameraMetadata *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (this[4] == (CameraMetadata)0x0) {
    bVar1 = *(byte *)(param_1 + 8);
    uVar2 = get_local_camera_metadata_tag_type();
    if (uVar2 != 0xffffffff) {
      if (uVar2 == bVar1) {
        uVar3 = __ThumbV7PILongThunk__ZN7android8hardware6camera6common4V1_06helper14CameraMetadata10updateImplEjPKvj
                          (this,*(uint *)(param_1 + 4),*(void **)(param_1 + 0x10),
                           *(uint *)(param_1 + 0xc));
        return uVar3;
      }
      get_local_camera_metadata_tag_name();
    }
  }
  __android_log_print();
  return 0xffffffda;
}

