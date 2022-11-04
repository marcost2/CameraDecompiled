
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::exists(unsigned int) const */

uint __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
          (CameraMetadata *this,uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(DAT_000642d8 + 0x642b6);
  iVar3 = *piVar4;
  uVar1 = find_camera_metadata_ro_entry();
  if (*piVar4 == iVar3) {
    uVar2 = count_leading_zeroes(uVar1);
    return uVar2 >> 5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

