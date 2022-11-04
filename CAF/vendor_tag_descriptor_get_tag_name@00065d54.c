
/* android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_tag_name(vendor_tag_ops
   const*, unsigned int) */

undefined4
android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_tag_name
          (vendor_tag_ops *param_1,uint param_2)

{
  char *extraout_r1;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  String8 aSStack28 [4];
  int local_18;
  
  piVar2 = *(int **)(DAT_00065dd0 + 0x65d60);
  local_18 = *piVar2;
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00065dd4 + 0x65d6a));
  iVar3 = *(int *)(DAT_00065dd8 + 0x65d72);
  if (iVar3 == 0) {
    __android_log_print();
  }
  else {
    android::String8::String8(aSStack28,extraout_r1);
    uVar4 = android::SortedVectorImpl::indexOf((key_value_pair_t *)(iVar3 + 0x18));
    android::String8::_String8(aSStack28,(char *)((ulonglong)uVar4 >> 0x20));
    if (-1 < (int)uVar4) {
      uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0x1c) + (int)uVar4 * 8 + 4);
      goto LAB_00065db4;
    }
  }
  uVar1 = 0;
LAB_00065db4:
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00065de8 + 0x65dba));
  if (*piVar2 == local_18) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

