
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::update(unsigned int,
   android::String8 const&) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::update
          (CameraMetadata *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  if (this[4] == (CameraMetadata)0x0) {
    iVar1 = get_local_camera_metadata_tag_type();
    if (iVar1 == 0) {
      pvVar3 = *(void **)param_2;
      iVar1 = android::String8::length((char *)param_2);
      uVar2 = __ThumbV7PILongThunk__ZN7android8hardware6camera6common4V1_06helper14CameraMetadata10updateImplEjPKvj
                        (this,param_1,pvVar3,iVar1 + 1);
      return uVar2;
    }
    if (iVar1 != -1) {
      get_local_camera_metadata_tag_name();
    }
  }
  __android_log_print();
  return 0xffffffda;
}

