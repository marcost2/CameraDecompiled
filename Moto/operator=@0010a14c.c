
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::TEMPNAMEPLACEHOLDERVALUE(android::hardware::camera::common::V1_0::helper::CameraMetadata
   const&) */

CameraMetadata * __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
          (CameraMetadata *this,CameraMetadata *param_1)

{
  undefined4 uVar1;
  
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print(6,DAT_0010a1a4 + 0x10a160,DAT_0010a1a8 + 0x10a162,DAT_0010a1ac + 0x10a164);
    return this;
  }
  if (*(int *)this != *(int *)param_1) {
    uVar1 = clone_camera_metadata();
    if (this[4] == (CameraMetadata)0x0) {
      if (*(int *)this != 0) {
        free_camera_metadata();
        *(undefined4 *)this = 0;
      }
    }
    else {
      __android_log_print(6,DAT_0010a1b0 + 0x10a188,DAT_0010a1b4 + 0x10a18a,DAT_0010a1b8 + 0x10a18c)
      ;
    }
    *(undefined4 *)this = uVar1;
  }
  return this;
}

