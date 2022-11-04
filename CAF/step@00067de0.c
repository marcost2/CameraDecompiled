
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace, libunwind::Registers_arm>::step() */

uint __thiscall
libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::step
          (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_ *this)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint local_1c;
  uint uStack24;
  int local_14;
  
  piVar4 = *(int **)(DAT_00067e44 + 0x67dec);
  local_14 = *piVar4;
  uVar1 = 0;
  if (this[0x180] == (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x0) {
    local_1c = 0;
    uStack24 = 0;
    puVar2 = decode_eht_entry(*(uint **)(this + 0x178),&local_1c,(int *)&uStack24);
    iVar3 = _Unwind_VRS_Interpret((int *)this,(int)puVar2,local_1c,uStack24);
    if ((iVar3 + -8 == 0) &&
       ((**(code **)(*(int *)this + 0x34))(this,1),
       this[0x180] != (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = count_leading_zeroes(iVar3 + -8);
      uVar1 = uVar1 >> 5;
    }
  }
  if (*piVar4 == local_14) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

