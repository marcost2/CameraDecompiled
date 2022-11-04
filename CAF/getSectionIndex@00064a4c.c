
/* android::hardware::camera2::params::VendorTagDescriptor::getSectionIndex(unsigned int) const */

undefined4 android::hardware::camera2::params::VendorTagDescriptor::getSectionIndex(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_00064a9c + 0x64a58);
  iVar1 = *piVar3;
  iVar2 = android::SortedVectorImpl::indexOf((key_value_pair_t *)(param_1 + 0x2c));
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert();
  }
  if (*piVar3 == iVar1) {
    return *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 8 + 4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

