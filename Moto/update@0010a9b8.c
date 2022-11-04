
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::update(unsigned int, double
   const*, unsigned int) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::update
          (CameraMetadata *this,uint param_1,double *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (this[4] == (CameraMetadata)0x0) {
    iVar2 = get_local_camera_metadata_tag_type(param_1,*(undefined4 *)this);
    if (iVar2 == 4) {
      uVar1 = (*(code *)PTR_updateImpl_0011aad0)(this,param_1,param_2,param_3);
      return uVar1;
    }
    if (iVar2 == -1) {
      iVar2 = DAT_0010aa4c + 0x10aa16;
      iVar3 = DAT_0010aa50 + 0x10aa18;
    }
    else {
      param_1 = get_local_camera_metadata_tag_name(param_1,*(undefined4 *)this);
      iVar2 = DAT_0010aa58 + 0x10aa3e;
      iVar3 = (int)&DAT_0010aa40 + DAT_0010aa5c;
    }
  }
  else {
    iVar2 = DAT_0010aa40 + 0x10a9d0;
    iVar3 = DAT_0010aa44 + 0x10a9d2;
    param_1 = DAT_0010aa48 + 0x10a9d4;
  }
  __android_log_print(6,iVar2,iVar3,param_1);
  return 0xffffffda;
}

