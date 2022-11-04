
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::~CameraMetadata() */

CameraMetadata * __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
          (CameraMetadata *this)

{
  this[4] = (CameraMetadata)0x0;
  if (*(int *)this != 0) {
    free_camera_metadata();
    *(undefined4 *)this = 0;
  }
  return this;
}

