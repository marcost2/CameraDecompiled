
/* android::hardware::camera2::params::VendorTagDescriptor::lookupTag(android::String8 const&,
   android::String8 const&, unsigned int*) const */

void __thiscall
android::hardware::camera2::params::VendorTagDescriptor::lookupTag
          (VendorTagDescriptor *this,String8 *param_1,String8 *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  void *pvVar5;
  int *piVar6;
  String8 aSStack44 [8];
  int local_24;
  
  piVar6 = *(int **)(DAT_0010b5f8 + 0x10b54e);
  local_24 = *piVar6;
  android::String8::String8(aSStack44,param_2);
  iVar1 = android::SortedVectorImpl::indexOf(this + 4);
  android::String8::_String8(aSStack44);
  if (iVar1 < 0) {
    uVar3 = *(undefined4 *)param_2;
    puVar4 = (undefined *)(DAT_0010b5fc + 0x10b5c6);
    iVar1 = DAT_0010b600 + 0x10b5c8;
  }
  else {
    pvVar5 = *(void **)(*(int *)(this + 8) + iVar1 * 8 + 4);
    android::String8::String8(aSStack44,param_1);
    iVar2 = android::SortedVectorImpl::indexOf(pvVar5);
    android::String8::_String8(aSStack44);
    if (-1 < iVar2) {
      if (param_3 != (uint *)0x0) {
        *param_3 = *(uint *)(*(int *)(*(int *)(*(int *)(this + 8) + iVar1 * 8 + 4) + 4) + iVar2 * 8
                            + 4);
      }
      uVar3 = 0;
      goto LAB_0010b5e4;
    }
    uVar3 = *(undefined4 *)param_1;
    puVar4 = &LAB_0010b5d6 + DAT_0010b608;
    iVar1 = DAT_0010b60c + 0x10b5d8;
  }
  __android_log_print(6,puVar4,iVar1,DAT_0010b604 + 0x10b5de,uVar3);
  uVar3 = 0xffffffea;
LAB_0010b5e4:
  if (*piVar6 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

