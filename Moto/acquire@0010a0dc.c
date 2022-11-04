
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::acquire(camera_metadata*) */

void __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::acquire
          (CameraMetadata *this,camera_metadata *param_1)

{
  int iVar1;
  
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print(6,DAT_0010a140 + 0x10a0f2,DAT_0010a144 + 0x10a0f4,DAT_0010a148 + 0x10a0f6);
    return;
  }
  if (*(int *)this != 0) {
    free_camera_metadata();
    *(undefined4 *)this = 0;
  }
  *(camera_metadata **)this = param_1;
  iVar1 = validate_camera_metadata_structure(param_1,0);
  if (iVar1 == 0) {
    return;
  }
  __android_log_print(6,DAT_0010a134 + 0x10a12a,DAT_0010a138 + 0x10a12c,DAT_0010a13c + 0x10a12e,
                      param_1);
  return;
}

