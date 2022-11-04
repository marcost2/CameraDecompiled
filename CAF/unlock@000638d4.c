
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::unlock(camera_metadata const*)
   const */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::unlock(CameraMetadata *this)

{
  int in_r1;
  
  if (this[4] == (CameraMetadata)0x0) {
    __android_log_print();
    return 0xffffffda;
  }
  if (*(int *)this != in_r1) {
    __android_log_print();
    return 0xffffffea;
  }
  this[4] = (CameraMetadata)0x0;
  return 0;
}

