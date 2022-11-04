
/* android::hardware::camera2::params::VendorTagDescriptor::getSectionIndex(unsigned int) const */

void android::hardware::camera2::params::VendorTagDescriptor::getSectionIndex(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_0010b44c + 0x10b408);
  iVar1 = *piVar3;
  iVar2 = android::SortedVectorImpl::indexOf((void *)(param_1 + 0x2c));
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert
              (DAT_0010b450 + 0x10b442,DAT_0010b454 + 0x10b444,DAT_0010b458 + 0x10b446,
               DAT_0010b45c + 0x10b448);
  }
  if (*piVar3 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 8 + 4));
}

