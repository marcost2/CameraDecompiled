
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::acquire(android::hardware::camera::common::V1_0::helper::CameraMetadata&)
    */

void __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::acquire
          (CameraMetadata *this,CameraMetadata *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (this[4] == (CameraMetadata)0x0) {
    if (param_1[4] == (CameraMetadata)0x0) {
      uVar2 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = 0;
    }
    else {
      __android_log_print(6,DAT_0010a390 + 0x10a32e,DAT_0010a394 + 0x10a330,DAT_0010a398 + 0x10a332)
      ;
      uVar2 = 0;
    }
    if (this[4] == (CameraMetadata)0x0) {
      if (*(int *)this != 0) {
        free_camera_metadata();
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)this = uVar2;
      iVar1 = validate_camera_metadata_structure(uVar2,0);
      if (iVar1 == 0) {
        return;
      }
      __android_log_print(6,DAT_0010a39c + 0x10a384,DAT_0010a3a0 + 0x10a386,DAT_0010a3a4 + 0x10a388,
                          uVar2);
      return;
    }
  }
  __android_log_print(6,DAT_0010a3a8 + 0x10a34e,DAT_0010a3ac + 0x10a350,DAT_0010a3b0 + 0x10a352);
  return;
}

