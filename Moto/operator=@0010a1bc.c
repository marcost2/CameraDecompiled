
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::TEMPNAMEPLACEHOLDERVALUE(camera_metadata
   const*) */

CameraMetadata * __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
          (CameraMetadata *this,camera_metadata *param_1)

{
  undefined4 uVar1;
  
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print(6,DAT_0010a214 + 0x10a1d0,DAT_0010a218 + 0x10a1d2,DAT_0010a21c + 0x10a1d4);
    return this;
  }
  if (*(camera_metadata **)this != param_1) {
    uVar1 = clone_camera_metadata(param_1);
    if (this[4] == (CameraMetadata)0x0) {
      if (*(int *)this != 0) {
        free_camera_metadata();
        *(undefined4 *)this = 0;
      }
    }
    else {
      __android_log_print(6,DAT_0010a220 + 0x10a1f8,DAT_0010a224 + 0x10a1fa,DAT_0010a228 + 0x10a1fc)
      ;
    }
    *(undefined4 *)this = uVar1;
  }
  return this;
}

