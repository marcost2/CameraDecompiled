
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace,
   libunwind::Registers_arm>::setInfoBasedOnIPRegister(bool) */

void __thiscall
libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::
setInfoBasedOnIPRegister
          (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_ *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int aiStack40 [2];
  undefined4 local_20;
  int *piStack28;
  uint local_18;
  int local_14;
  
  piStack28 = aiStack40;
  piVar4 = *(int **)(DAT_00067f7c + 0x67f22);
  local_14 = *piVar4;
  uVar1 = (**(code **)(*(int *)this + 0xc))(this,0xffffffff);
  uVar1 = (uVar1 & 0xfffffffe) - (uint)param_1;
  local_20 = *(undefined4 *)(this + 4);
  local_18 = uVar1;
  iVar2 = dl_iterate_phdr();
  iVar3 = iVar2;
  if (iVar2 != 0) {
    iVar3 = aiStack40[0];
  }
  if ((iVar2 == 0 || iVar3 == 0) ||
     (iVar3 = getInfoFromEHABISection(this,uVar1,(UnwindInfoSections *)aiStack40), iVar3 == 0)) {
    this[0x180] = (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x1;
  }
  if (*piVar4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

