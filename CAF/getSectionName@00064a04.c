
/* android::hardware::camera2::params::VendorTagDescriptor::getSectionName(unsigned int) const */

undefined4 android::hardware::camera2::params::VendorTagDescriptor::getSectionName(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(DAT_00064a48 + 0x64a10);
  iVar1 = *piVar4;
  iVar2 = android::SortedVectorImpl::indexOf((key_value_pair_t *)(param_1 + 0x2c));
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)
             (*(int *)(param_1 + 0x58) + *(int *)(*(int *)(param_1 + 0x30) + iVar2 * 8 + 4) * 4);
  }
  if (*piVar4 == iVar1) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

