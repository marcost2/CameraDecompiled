
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::find(unsigned int) const */

void __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::find
          (CameraMetadata *this,uint *param_1)

{
  int iVar1;
  
  iVar1 = find_camera_metadata_ro_entry();
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

