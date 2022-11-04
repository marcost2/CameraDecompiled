
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
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  if (*(int *)this == 0) {
    iVar1 = allocate_camera_metadata(param_1 << 1,param_2 << 1);
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar1 = get_camera_metadata_entry_count();
    uVar2 = get_camera_metadata_entry_capacity(*(undefined4 *)this);
    uVar6 = uVar2;
    if (uVar2 < iVar1 + param_1) {
      uVar6 = (iVar1 + param_1) * 2;
    }
    iVar1 = get_camera_metadata_data_count(*(undefined4 *)this);
    uVar3 = get_camera_metadata_data_capacity(*(undefined4 *)this);
    uVar4 = uVar3;
    if (uVar3 < iVar1 + param_2) {
      uVar4 = (iVar1 + param_2) * 2;
    }
    bVar8 = uVar2 <= uVar6;
    bVar7 = uVar6 == uVar2;
    if (!bVar8 || bVar7) {
      bVar8 = uVar3 <= uVar4;
      bVar7 = uVar4 == uVar3;
    }
    if (!bVar8 || bVar7) {
      return 0;
    }
    uVar5 = *(undefined4 *)this;
    iVar1 = allocate_camera_metadata(uVar6);
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      append_camera_metadata(iVar1,uVar5);
      free_camera_metadata(uVar5);
      return 0;
    }
  }
  __android_log_print(6,DAT_0010a4f8 + 0x10a4e8,DAT_0010a4fc + 0x10a4ea,DAT_0010a500 + 0x10a4ec);
  return 0xfffffff4;
}

