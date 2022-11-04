
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(unsigned int,
   unsigned int) */

CameraMetadata * __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
          (CameraMetadata *this)

{
  undefined4 uVar1;
  
  this[4] = (CameraMetadata)0x0;
  uVar1 = allocate_camera_metadata();
  *(undefined4 *)this = uVar1;
  return this;
}

