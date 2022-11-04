
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::updateImpl(unsigned int, void
   const*, unsigned int) */

int __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::updateImpl
          (CameraMetadata *this,uint param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(DAT_00063de0 + 0x63cd6);
  iVar1 = *piVar3;
  if (this[4] == (CameraMetadata)0x0) {
    iVar4 = get_local_camera_metadata_tag_type();
    if (iVar4 == -1) {
      __android_log_print();
      iVar4 = -0x16;
      goto LAB_00063cf4;
    }
    iVar4 = get_camera_metadata_size();
    if ((param_2 <= *(void **)this) || ((void *)(iVar4 + (int)*(void **)this) <= param_2)) {
      uVar2 = calculate_camera_metadata_entry_data_size();
      iVar4 = resizeIfNeeded(this,1,uVar2);
      if (iVar4 == 0) {
        iVar4 = find_camera_metadata_entry();
        if (iVar4 == -2) {
          iVar4 = add_camera_metadata_entry();
        }
        else {
          if (iVar4 != 0) goto LAB_00063d66;
          iVar4 = update_camera_metadata_entry();
        }
        if (iVar4 == 0) {
          iVar4 = 0;
          goto LAB_00063cf4;
        }
      }
LAB_00063d66:
      get_local_camera_metadata_section_name();
      get_local_camera_metadata_tag_name();
      strerror(-iVar4);
      __android_log_print();
      goto LAB_00063cf4;
    }
  }
  __android_log_print();
  iVar4 = -0x26;
LAB_00063cf4:
  if (*piVar3 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

