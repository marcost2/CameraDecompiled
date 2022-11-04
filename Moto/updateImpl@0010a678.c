
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::updateImpl(unsigned int, void
   const*, unsigned int) */

int __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::updateImpl
          (CameraMetadata *this,uint param_1,void *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_34 [5];
  int local_20;
  
  piVar7 = *(int **)(DAT_0010a790 + 0x10a686);
  local_20 = *piVar7;
  if (this[4] == (CameraMetadata)0x0) {
    uVar1 = get_local_camera_metadata_tag_type(param_1,*(undefined4 *)this);
    if (uVar1 == 0xffffffff) {
      __android_log_print(6,DAT_0010a7a0 + 0x10a6f4,DAT_0010a7a4 + 0x10a6f6,DAT_0010a7a8 + 0x10a6f8,
                          param_1);
      iVar5 = -0x16;
      goto LAB_0010a6a4;
    }
    iVar5 = get_camera_metadata_size(*(undefined4 *)this);
    if ((param_2 <= *(void **)this) || ((void *)(iVar5 + (int)*(void **)this) <= param_2)) {
      uVar1 = calculate_camera_metadata_entry_data_size(uVar1 & 0xff,param_3);
      iVar5 = resizeIfNeeded(this,1,uVar1);
      if (iVar5 == 0) {
        iVar5 = find_camera_metadata_entry(*(undefined4 *)this,param_1,local_34);
        if (iVar5 == -2) {
          iVar5 = add_camera_metadata_entry(*(undefined4 *)this,param_1,param_2,param_3);
        }
        else {
          if (iVar5 != 0) goto LAB_0010a716;
          iVar5 = update_camera_metadata_entry(*(undefined4 *)this,local_34[0],param_2,param_3,0);
        }
        if (iVar5 == 0) {
          iVar5 = 0;
          goto LAB_0010a6a4;
        }
      }
LAB_0010a716:
      uVar2 = get_local_camera_metadata_section_name(param_1,*(undefined4 *)this);
      uVar3 = get_local_camera_metadata_tag_name(param_1,*(undefined4 *)this);
      pcVar4 = strerror(-iVar5);
      __android_log_print(6,DAT_0010a7b4 + 0x10a746,DAT_0010a7b8 + 0x10a748,DAT_0010a7bc + 0x10a74a,
                          uVar2,uVar3,param_1,pcVar4,iVar5);
      goto LAB_0010a6a4;
    }
    iVar5 = DAT_0010a7ac + 0x10a6e2;
    iVar6 = DAT_0010a7b0 + 0x10a6e4;
  }
  else {
    iVar5 = DAT_0010a794 + 0x10a696;
    iVar6 = DAT_0010a798 + 0x10a698;
  }
  __android_log_print(6,iVar5,iVar6,DAT_0010a79c + 0x10a69e);
  iVar5 = -0x26;
LAB_0010a6a4:
  if (*piVar7 == local_20) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

