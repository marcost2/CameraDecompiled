
/* android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_section_name(vendor_tag_ops
   const*, unsigned int) */

undefined4
android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_section_name
          (vendor_tag_ops *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(DAT_00065d38 + 0x65cd4);
  iVar1 = *piVar4;
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00065d3c + 0x65cde));
  iVar5 = *(int *)(DAT_00065d40 + 0x65ce6);
  if (iVar5 == 0) {
    __android_log_print();
  }
  else {
    iVar2 = android::SortedVectorImpl::indexOf((key_value_pair_t *)(iVar5 + 0x2c));
    if (-1 < iVar2) {
      uVar3 = *(undefined4 *)
               (*(int *)(iVar5 + 0x58) + *(int *)(*(int *)(iVar5 + 0x30) + iVar2 * 8 + 4) * 4);
      goto LAB_00065d1c;
    }
  }
  uVar3 = 0;
LAB_00065d1c:
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00065d50 + 0x65d22));
  if (*piVar4 == iVar1) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

