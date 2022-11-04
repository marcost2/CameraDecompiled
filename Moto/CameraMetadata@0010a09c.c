
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(camera_metadata*)
    */

CameraMetadata * __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
          (CameraMetadata *this,camera_metadata *param_1)

{
  int iVar1;
  
  *(camera_metadata **)this = param_1;
  this[4] = (CameraMetadata)0x0;
  iVar1 = validate_camera_metadata_structure(param_1,0);
  if (iVar1 != 0) {
    __android_log_print(6,DAT_0010a0d0 + 0x10a0c8,DAT_0010a0d4 + 0x10a0ca,DAT_0010a0d8 + 0x10a0cc,
                        param_1);
  }
  return this;
}

