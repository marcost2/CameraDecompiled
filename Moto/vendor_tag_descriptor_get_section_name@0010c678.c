
undefined4
android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_section_name(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(DAT_0010c6e8 + 0x10c684);
  iVar1 = *piVar4;
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010c6ec + 0x10c68e));
  iVar5 = *(int *)(DAT_0010c6f0 + 0x10c696);
  if (iVar5 == 0) {
    __android_log_print(6,DAT_0010c6f4 + 0x10c6c4,DAT_0010c6f8 + 0x10c6c6,DAT_0010c6fc + 0x10c6c8);
  }
  else {
    iVar2 = android::SortedVectorImpl::indexOf((void *)(iVar5 + 0x2c));
    if (-1 < iVar2) {
      uVar3 = *(undefined4 *)
               (*(int *)(iVar5 + 0x58) + *(int *)(*(int *)(iVar5 + 0x30) + iVar2 * 8 + 4) * 4);
      goto LAB_0010c6cc;
    }
  }
  uVar3 = 0;
LAB_0010c6cc:
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010c700 + 0x10c6d2));
  if (*piVar4 == iVar1) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

