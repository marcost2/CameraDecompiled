
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::update(unsigned int,
   camera_metadata_rational const*, unsigned int) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::update
          (CameraMetadata *this,uint param_1,camera_metadata_rational *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (this[4] == (CameraMetadata)0x0) {
    iVar2 = get_local_camera_metadata_tag_type(param_1,*(undefined4 *)this);
    if (iVar2 == 5) {
      uVar1 = (*(code *)PTR_updateImpl_0011aad0)(this,param_1,param_2,param_3);
      return uVar1;
    }
    if (iVar2 == -1) {
      iVar2 = DAT_0010aaf4 + 0x10aabe;
      iVar3 = DAT_0010aaf8 + 0x10aac0;
    }
    else {
      param_1 = get_local_camera_metadata_tag_name(param_1,*(undefined4 *)this);
      iVar2 = DAT_0010ab00 + 0x10aae6;
      iVar3 = (int)&DAT_0010aae8 + DAT_0010ab04;
    }
  }
  else {
    iVar2 = DAT_0010aae8 + 0x10aa78;
    iVar3 = DAT_0010aaec + 0x10aa7a;
    param_1 = DAT_0010aaf0 + 0x10aa7c;
  }
  __android_log_print(6,iVar2,iVar3,param_1);
  return 0xffffffda;
}

