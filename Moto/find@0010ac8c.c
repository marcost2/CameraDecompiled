
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::find(unsigned int) */

void android::hardware::camera::common::V1_0::helper::CameraMetadata::find(uint param_1)

{
  int iVar1;
  undefined4 *in_r1;
  
  if (*(char *)(in_r1 + 1) != '\0') {
    __android_log_print(6,DAT_0010acc4 + 0x10aca0,DAT_0010acc8 + 0x10aca2,DAT_0010accc + 0x10aca4);
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  iVar1 = find_camera_metadata_entry(*in_r1);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

