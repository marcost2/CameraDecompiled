
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::resizeIfNeeded(unsigned int,
   unsigned int) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::resizeIfNeeded
          (CameraMetadata *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)this == 0) {
    iVar1 = allocate_camera_metadata();
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar1 = get_camera_metadata_entry_count();
    uVar2 = get_camera_metadata_entry_capacity();
    uVar5 = uVar2;
    if (uVar2 < iVar1 + param_1) {
      uVar5 = (iVar1 + param_1) * 2;
    }
    iVar1 = get_camera_metadata_data_count();
    uVar3 = get_camera_metadata_data_capacity();
    uVar4 = uVar3;
    if (uVar3 < iVar1 + param_2) {
      uVar4 = (iVar1 + param_2) * 2;
    }
    bVar7 = uVar2 <= uVar5;
    bVar6 = uVar5 == uVar2;
    if (!bVar7 || bVar6) {
      bVar7 = uVar3 <= uVar4;
      bVar6 = uVar4 == uVar3;
    }
    if (!bVar7 || bVar6) {
      return 0;
    }
    iVar1 = allocate_camera_metadata();
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      append_camera_metadata();
      free_camera_metadata();
      return 0;
    }
  }
  __android_log_print();
  return 0xfffffff4;
}

