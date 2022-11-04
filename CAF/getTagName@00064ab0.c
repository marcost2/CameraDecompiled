
/* android::hardware::camera2::params::VendorTagDescriptor::getTagName(unsigned int) const */

undefined4 android::hardware::camera2::params::VendorTagDescriptor::getTagName(uint param_1)

{
  undefined4 uVar1;
  char *in_r1;
  int *piVar2;
  undefined8 uVar3;
  String8 aSStack28 [4];
  int local_18;
  
  piVar2 = *(int **)(DAT_00064b00 + 0x64ac0);
  local_18 = *piVar2;
  android::String8::String8(aSStack28,in_r1);
  uVar3 = android::SortedVectorImpl::indexOf((key_value_pair_t *)(param_1 + 0x18));
  android::String8::_String8(aSStack28,(char *)((ulonglong)uVar3 >> 0x20));
  if ((int)uVar3 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + (int)uVar3 * 8 + 4);
  }
  if (*piVar2 == local_18) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

