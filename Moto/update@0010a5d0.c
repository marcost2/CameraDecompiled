
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::update(unsigned int, int const*,
   unsigned int) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::update
          (CameraMetadata *this,uint param_1,int *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (this[4] == (CameraMetadata)0x0) {
    iVar2 = get_local_camera_metadata_tag_type(param_1,*(undefined4 *)this);
    if (iVar2 == 1) {
      uVar1 = (*(code *)PTR_updateImpl_0011aad0)(this,param_1,param_2,param_3);
      return uVar1;
    }
    if (iVar2 == -1) {
      iVar2 = DAT_0010a664 + 0x10a62e;
      iVar3 = DAT_0010a668 + 0x10a630;
    }
    else {
      param_1 = get_local_camera_metadata_tag_name(param_1,*(undefined4 *)this);
      iVar2 = DAT_0010a670 + 0x10a656;
      iVar3 = (int)&DAT_0010a658 + DAT_0010a674;
    }
  }
  else {
    iVar2 = DAT_0010a658 + 0x10a5e8;
    iVar3 = DAT_0010a65c + 0x10a5ea;
    param_1 = DAT_0010a660 + 0x10a5ec;
  }
  __android_log_print(6,iVar2,iVar3,param_1);
  return 0xffffffda;
}

