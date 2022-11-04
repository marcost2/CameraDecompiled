
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::erase(unsigned int) */

int android::hardware::camera::common::V1_0::helper::CameraMetadata::erase(_ListIterator param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_00064404 + 0x6434a);
  iVar1 = *piVar3;
  if (*(char *)(param_1 + 4) != '\0') {
    __android_log_print();
    iVar2 = -0x26;
    goto LAB_000643f0;
  }
  iVar2 = find_camera_metadata_entry();
  if (iVar2 == -2) {
LAB_000643b6:
    iVar2 = 0;
  }
  else {
    if (iVar2 == 0) {
      iVar2 = delete_camera_metadata_entry();
      if (iVar2 == 0) goto LAB_000643b6;
      get_local_camera_metadata_section_name();
      get_local_camera_metadata_tag_name();
      strerror(-iVar2);
    }
    else {
      get_local_camera_metadata_section_name();
      get_local_camera_metadata_tag_name();
      strerror(-iVar2);
    }
    __android_log_print();
  }
LAB_000643f0:
  if (*piVar3 == iVar1) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

