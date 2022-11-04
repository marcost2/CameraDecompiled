
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::update(unsigned int,
   android::String8 const&) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::update
          (CameraMetadata *this,uint param_1,String8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (this[4] == (CameraMetadata)0x0) {
    iVar1 = get_local_camera_metadata_tag_type(param_1,*(undefined4 *)this);
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)param_2;
      iVar1 = android::String8::length();
      uVar3 = (*(code *)PTR_updateImpl_0011aad0)(this,param_1,uVar3,iVar1 + 1);
      return uVar3;
    }
    if (iVar1 == -1) {
      iVar1 = DAT_0010ab9c + 0x10ab66;
      iVar2 = DAT_0010aba0 + 0x10ab68;
    }
    else {
      param_1 = get_local_camera_metadata_tag_name(param_1,*(undefined4 *)this);
      iVar1 = DAT_0010aba8 + 0x10ab8e;
      iVar2 = (int)&DAT_0010ab90 + DAT_0010abac;
    }
  }
  else {
    iVar1 = DAT_0010ab90 + 0x10ab1e;
    iVar2 = DAT_0010ab94 + 0x10ab20;
    param_1 = DAT_0010ab98 + 0x10ab22;
  }
  __android_log_print(6,iVar1,iVar2,param_1);
  return 0xffffffda;
}

