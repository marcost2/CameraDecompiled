
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::swap(android::hardware::camera::common::V1_0::helper::CameraMetadata&)
    */

void __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::swap
          (CameraMetadata *this,CameraMetadata *param_1)

{
  undefined4 uVar1;
  
  if ((this[4] == (CameraMetadata)0x0) && (param_1[4] == (CameraMetadata)0x0)) {
    uVar1 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = *(undefined4 *)this;
    *(undefined4 *)this = uVar1;
    return;
  }
  __ThumbV7PILongThunk___android_log_print();
  return;
}

