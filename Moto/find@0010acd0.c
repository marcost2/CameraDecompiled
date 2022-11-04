
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::find(unsigned int) const */

void android::hardware::camera::common::V1_0::helper::CameraMetadata::find(uint param_1)

{
  int iVar1;
  undefined4 *in_r1;
  
  iVar1 = find_camera_metadata_ro_entry(*in_r1);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

