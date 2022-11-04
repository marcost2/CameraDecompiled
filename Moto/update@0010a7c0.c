
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::update(unsigned int, unsigned
   char const*, unsigned int) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::update
          (CameraMetadata *this,uint param_1,uchar *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (this[4] == (CameraMetadata)0x0) {
    iVar2 = get_local_camera_metadata_tag_type(param_1,*(undefined4 *)this);
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_updateImpl_0011aad0)(this,param_1,param_2,param_3);
      return uVar1;
    }
    if (iVar2 == -1) {
      iVar2 = DAT_0010a854 + 0x10a81c;
      puVar3 = (undefined *)(DAT_0010a858 + 0x10a81e);
    }
    else {
      param_1 = get_local_camera_metadata_tag_name(param_1,*(undefined4 *)this);
      iVar2 = DAT_0010a860 + 0x10a844;
      puVar3 = &UNK_0010a846 + DAT_0010a864;
    }
  }
  else {
    iVar2 = DAT_0010a848 + 0x10a7d8;
    puVar3 = (undefined *)(DAT_0010a84c + 0x10a7da);
    param_1 = DAT_0010a850 + 0x10a7dc;
  }
  __android_log_print(6,iVar2,puVar3,param_1);
  return 0xffffffda;
}

