
undefined4 android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_tag_name(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  String8 aSStack28 [4];
  int local_18;
  
  piVar3 = *(int **)(DAT_0010c780 + 0x10c710);
  local_18 = *piVar3;
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010c784 + 0x10c71a));
  iVar4 = *(int *)(DAT_0010c788 + 0x10c722);
  if (iVar4 == 0) {
    __android_log_print(6,DAT_0010c78c + 0x10c75c,DAT_0010c790 + 0x10c75e,DAT_0010c794 + 0x10c760);
  }
  else {
    android::String8::String8(aSStack28);
    iVar1 = android::SortedVectorImpl::indexOf((void *)(iVar4 + 0x18));
    android::String8::_String8(aSStack28);
    if (-1 < iVar1) {
      uVar2 = *(undefined4 *)(*(int *)(iVar4 + 0x1c) + iVar1 * 8 + 4);
      goto LAB_0010c764;
    }
  }
  uVar2 = 0;
LAB_0010c764:
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010c798 + 0x10c76a));
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

