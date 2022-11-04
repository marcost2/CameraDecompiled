
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::erase(unsigned int) */

int __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::erase
          (CameraMetadata *this,uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_30 [5];
  int local_1c;
  
  piVar7 = *(int **)(DAT_0010adb4 + 0x10acfa);
  local_1c = *piVar7;
  if (this[4] != (CameraMetadata)0x0) {
    __android_log_print(6,DAT_0010adb8 + 0x10ad0e,DAT_0010adbc + 0x10ad10,DAT_0010adc0 + 0x10ad12);
    iVar6 = -0x26;
    goto LAB_0010ada0;
  }
  iVar6 = find_camera_metadata_entry(*(undefined4 *)this,param_1,local_30);
  if (iVar6 == -2) {
LAB_0010ad66:
    iVar6 = 0;
  }
  else {
    if (iVar6 == 0) {
      iVar6 = delete_camera_metadata_entry(*(undefined4 *)this,local_30[0]);
      if (iVar6 == 0) goto LAB_0010ad66;
      uVar1 = get_local_camera_metadata_section_name(param_1,*(undefined4 *)this);
      uVar2 = get_local_camera_metadata_tag_name(param_1,*(undefined4 *)this);
      pcVar3 = strerror(-iVar6);
      puVar4 = (undefined *)(DAT_0010adcc + 0x10ad64);
      iVar5 = DAT_0010add0 + 0x10ad66;
    }
    else {
      uVar1 = get_local_camera_metadata_section_name(param_1,*(undefined4 *)this);
      uVar2 = get_local_camera_metadata_tag_name(param_1,*(undefined4 *)this);
      pcVar3 = strerror(-iVar6);
      puVar4 = &LAB_0010ad96 + DAT_0010adc4;
      iVar5 = DAT_0010adc8 + 0x10ad98;
    }
    __android_log_print(6,puVar4,iVar5,DAT_0010add4 + 0x10ad9e,uVar1,uVar2,param_1,pcVar3,iVar6);
  }
LAB_0010ada0:
  if (*piVar7 == local_1c) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

