
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::checkType(unsigned int, unsigned
   char) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::checkType
          (CameraMetadata *this,uint param_1,uchar param_2)

{
  uint uVar1;
  
  uVar1 = get_local_camera_metadata_tag_type();
  if (uVar1 != 0xffffffff) {
    if (uVar1 == param_2) {
      return 0;
    }
    get_local_camera_metadata_tag_name();
  }
  __android_log_print();
  return 0xffffffda;
}

