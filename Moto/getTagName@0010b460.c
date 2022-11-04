
/* android::hardware::camera2::params::VendorTagDescriptor::getTagName(unsigned int) const */

void android::hardware::camera2::params::VendorTagDescriptor::getTagName(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  String8 aSStack28 [4];
  int local_18;
  
  piVar3 = *(int **)(DAT_0010b4b0 + 0x10b470);
  local_18 = *piVar3;
  android::String8::String8(aSStack28);
  iVar1 = android::SortedVectorImpl::indexOf((void *)(param_1 + 0x18));
  android::String8::_String8(aSStack28);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 8 + 4);
  }
  if (*piVar3 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

