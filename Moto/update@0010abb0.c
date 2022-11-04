
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::update(camera_metadata_ro_entry
   const&) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::update
          (CameraMetadata *this,camera_metadata_ro_entry *param_1)

{
  camera_metadata_ro_entry cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (this[4] == (CameraMetadata)0x0) {
    cVar1 = param_1[8];
    iVar6 = *(int *)(param_1 + 4);
    uVar2 = get_local_camera_metadata_tag_type(iVar6,*(undefined4 *)this);
    if (uVar2 == 0xffffffff) {
      iVar4 = DAT_0010ac48 + 0x10ac10;
      iVar5 = DAT_0010ac4c + 0x10ac12;
    }
    else {
      if (uVar2 == (byte)cVar1) {
        uVar3 = (*(code *)PTR_updateImpl_0011aad0)
                          (this,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10),
                           *(undefined4 *)(param_1 + 0xc));
        return uVar3;
      }
      iVar6 = get_local_camera_metadata_tag_name(iVar6,*(undefined4 *)this);
      iVar4 = DAT_0010ac54 + 0x10ac3a;
      iVar5 = (int)&DAT_0010ac3c + DAT_0010ac58;
    }
  }
  else {
    iVar4 = DAT_0010ac3c + 0x10abc8;
    iVar5 = DAT_0010ac40 + 0x10abca;
    iVar6 = DAT_0010ac44 + 0x10abcc;
  }
  __android_log_print(6,iVar4,iVar5,iVar6);
  return 0xffffffda;
}

