
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::exists(unsigned int) const */

uint __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
          (CameraMetadata *this,uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined auStack32 [20];
  int local_c;
  
  piVar3 = *(int **)(DAT_0010ac88 + 0x10ac66);
  local_c = *piVar3;
  uVar1 = find_camera_metadata_ro_entry(*(undefined4 *)this,param_1,auStack32);
  if (*piVar3 == local_c) {
    uVar2 = count_leading_zeroes(uVar1);
    return uVar2 >> 5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

