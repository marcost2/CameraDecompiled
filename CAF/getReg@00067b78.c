
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace, libunwind::Registers_arm>::getReg(int) */

undefined4 __thiscall
libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::getReg
          (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_ *this,int param_1)

{
  FILE **ppFVar1;
  
  switch(param_1) {
  case 0xe:
    return *(undefined4 *)(this + 0x40);
  case -2:
  case 0xd:
    return *(undefined4 *)(this + 0x3c);
  case -1:
  case 0xf:
    return *(undefined4 *)(this + 0x44);
  }
  if ((uint)param_1 < 0xd) {
    return *(undefined4 *)(this + param_1 * 4 + 8);
  }
  ppFVar1 = *(FILE ***)(DAT_00067be8 + 0x67bc2);
  fprintf(*ppFVar1,(char *)(DAT_00067bf0 + 0x67bd6),DAT_00067bf4 + 0x67bd8,DAT_00067bf8 + 0x67bda,
          0x8b3,DAT_00067bec + 0x67bca);
  fflush(*ppFVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}

