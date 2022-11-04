
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::find(unsigned int) */

void __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::find
          (CameraMetadata *this,uint *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 1) != '\0') {
    __android_log_print();
    *(undefined4 *)(this + 0xc) = 0;
    return;
  }
  iVar1 = find_camera_metadata_entry();
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

