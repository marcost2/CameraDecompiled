
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::sort() */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::sort(CameraMetadata *this)

{
  undefined4 uVar1;
  
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print();
    return 0xffffffda;
  }
  uVar1 = __ThumbV7PILongThunk_sort_camera_metadata();
  return uVar1;
}

