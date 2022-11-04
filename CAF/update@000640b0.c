
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::update(unsigned int,
   camera_metadata_rational const*, unsigned int) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::update
          (CameraMetadata *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (this[4] == (CameraMetadata)0x0) {
    iVar1 = get_local_camera_metadata_tag_type();
    if (iVar1 == 5) {
      uVar2 = __ThumbV7PILongThunk__ZN7android8hardware6camera6common4V1_06helper14CameraMetadata10updateImplEjPKvj
                        (this,param_1,(void *)param_2,param_3);
      return uVar2;
    }
    if (iVar1 != -1) {
      get_local_camera_metadata_tag_name();
    }
  }
  __android_log_print();
  return 0xffffffda;
}

