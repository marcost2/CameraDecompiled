
/* android::hardware::camera2::params::VendorTagDescriptor::lookupTag(android::String8 const&,
   android::String8 const&, unsigned int*) const */

undefined4 __thiscall
android::hardware::camera2::params::VendorTagDescriptor::lookupTag
          (VendorTagDescriptor *this,String8 *param_1,String8 *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  key_value_pair_t *pkVar3;
  int *piVar4;
  undefined8 uVar5;
  String8 aSStack44 [8];
  int local_24;
  
  piVar4 = *(int **)(DAT_00064c48 + 0x64b9e);
  local_24 = *piVar4;
  android::String8::String8(aSStack44,(char *)param_2);
  uVar5 = android::SortedVectorImpl::indexOf((key_value_pair_t *)(this + 4));
  iVar1 = (int)uVar5;
  android::String8::_String8(aSStack44,(char *)((ulonglong)uVar5 >> 0x20));
  if (-1 < iVar1) {
    pkVar3 = *(key_value_pair_t **)(*(int *)(this + 8) + iVar1 * 8 + 4);
    android::String8::String8(aSStack44,(char *)param_1);
    uVar5 = android::SortedVectorImpl::indexOf(pkVar3);
    android::String8::_String8(aSStack44,(char *)((ulonglong)uVar5 >> 0x20));
    if (-1 < (int)uVar5) {
      if (param_3 != (uint *)0x0) {
        *param_3 = *(uint *)(*(int *)(*(int *)(*(int *)(this + 8) + iVar1 * 8 + 4) + 4) +
                             (int)uVar5 * 8 + 4);
      }
      uVar2 = 0;
      goto LAB_00064c34;
    }
  }
  __android_log_print();
  uVar2 = 0xffffffea;
LAB_00064c34:
  if (*piVar4 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

