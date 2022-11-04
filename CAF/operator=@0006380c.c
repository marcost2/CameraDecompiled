
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::TEMPNAMEPLACEHOLDERVALUE(camera_metadata
   const*) */

CameraMetadata * __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
          (CameraMetadata *this,camera_metadata *param_1)

{
  undefined4 uVar1;
  
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print();
    return this;
  }
  if (*(camera_metadata **)this != param_1) {
    uVar1 = clone_camera_metadata();
    if (this[4] == (CameraMetadata)0x0) {
      if (*(int *)this != 0) {
        free_camera_metadata();
        *(undefined4 *)this = 0;
      }
    }
    else {
      __android_log_print();
    }
    *(undefined4 *)this = uVar1;
  }
  return this;
}

