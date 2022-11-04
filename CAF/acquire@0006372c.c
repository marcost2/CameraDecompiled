
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::acquire(camera_metadata*) */

void __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::acquire
          (CameraMetadata *this,camera_metadata *param_1)

{
  int iVar1;
  
  if (this[4] != (CameraMetadata)0x0) {
    __ThumbV7PILongThunk___android_log_print();
    return;
  }
  if (*(int *)this != 0) {
    free_camera_metadata();
    *(undefined4 *)this = 0;
  }
  *(camera_metadata **)this = param_1;
  iVar1 = validate_camera_metadata_structure();
  if (iVar1 == 0) {
    return;
  }
  __android_log_print();
  return;
}

