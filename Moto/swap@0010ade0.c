
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::swap(android::hardware::camera::common::V1_0::helper::CameraMetadata&)
    */

void __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::swap
          (CameraMetadata *this,CameraMetadata *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (this[4] == (CameraMetadata)0x0) {
    if (param_1[4] == (CameraMetadata)0x0) {
      uVar3 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = *(undefined4 *)this;
      *(undefined4 *)this = uVar3;
      return;
    }
    iVar1 = DAT_0010ae1c + 0x10adfa;
    iVar2 = DAT_0010ae20 + 0x10adfc;
  }
  else {
    iVar1 = DAT_0010ae10 + 0x10adec;
    iVar2 = DAT_0010ae14 + 0x10adee;
  }
  __android_log_print(6,iVar1,iVar2,DAT_0010ae18 + 0x10ae02);
  return;
}

