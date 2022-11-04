
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::acquire(android::hardware::camera::common::V1_0::helper::CameraMetadata&)
    */

void __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::acquire
          (CameraMetadata *this,camera_metadata *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (this[4] == (CameraMetadata)0x0) {
    if (param_1[4] == (camera_metadata)0x0) {
      uVar2 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = 0;
    }
    else {
      __android_log_print();
      uVar2 = 0;
    }
    if (this[4] == (CameraMetadata)0x0) {
      if (*(int *)this != 0) {
        free_camera_metadata();
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)this = uVar2;
      iVar1 = validate_camera_metadata_structure();
      if (iVar1 == 0) {
        return;
      }
      __android_log_print();
      return;
    }
  }
  __ThumbV7PILongThunk___android_log_print();
  return;
}

