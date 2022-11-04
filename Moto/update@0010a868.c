
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::update(unsigned int, float
   const*, unsigned int) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::update
          (CameraMetadata *this,uint param_1,float *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (this[4] == (CameraMetadata)0x0) {
    iVar2 = get_local_camera_metadata_tag_type(param_1,*(undefined4 *)this);
    if (iVar2 == 2) {
      uVar1 = (*(code *)PTR_updateImpl_0011aad0)(this,param_1,param_2,param_3);
      return uVar1;
    }
    if (iVar2 == -1) {
      iVar2 = DAT_0010a8fc + 0x10a8c6;
      iVar3 = DAT_0010a900 + 0x10a8c8;
    }
    else {
      param_1 = get_local_camera_metadata_tag_name(param_1,*(undefined4 *)this);
      iVar2 = DAT_0010a908 + 0x10a8ee;
      iVar3 = (int)&DAT_0010a8f0 + DAT_0010a90c;
    }
  }
  else {
    iVar2 = DAT_0010a8f0 + 0x10a880;
    iVar3 = DAT_0010a8f4 + 0x10a882;
    param_1 = DAT_0010a8f8 + 0x10a884;
  }
  __android_log_print(6,iVar2,iVar3,param_1);
  return 0xffffffda;
}

