
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(camera_metadata*)
    */

CameraMetadata * __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
          (CameraMetadata *this)

{
  int iVar1;
  undefined4 in_r1;
  
  *(undefined4 *)this = in_r1;
  this[4] = (CameraMetadata)0x0;
  iVar1 = validate_camera_metadata_structure();
  if (iVar1 != 0) {
    __android_log_print();
  }
  return this;
}

