
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::checkType(unsigned int, unsigned
   char) */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::checkType
          (CameraMetadata *this,uint param_1,uchar param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = get_local_camera_metadata_tag_type(param_1,*(undefined4 *)this);
  if (uVar1 == 0xffffffff) {
    iVar2 = DAT_0010a5bc + 0x10a586;
    iVar3 = DAT_0010a5c0 + 0x10a588;
  }
  else {
    if (uVar1 == param_2) {
      return 0;
    }
    param_1 = get_local_camera_metadata_tag_name(param_1,*(undefined4 *)this);
    iVar2 = DAT_0010a5c8 + 0x10a5b0;
    iVar3 = DAT_0010a5cc + 0x10a5b2;
  }
  __android_log_print(6,iVar2,iVar3,param_1);
  return 0xffffffda;
}

