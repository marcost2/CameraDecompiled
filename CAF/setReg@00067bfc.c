
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace, libunwind::Registers_arm>::setReg(int,
   unsigned int) */

void __thiscall
libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::setReg
          (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_ *this,int param_1,
          uint param_2)

{
  FILE **ppFVar1;
  
  switch(param_1) {
  case 0xe:
    *(uint *)(this + 0x40) = param_2;
    return;
  case -2:
  case 0xd:
    *(uint *)(this + 0x3c) = param_2;
    return;
  case -1:
  case 0xf:
    *(uint *)(this + 0x44) = param_2;
    return;
  }
  if ((uint)param_1 < 0xd) {
    *(uint *)(this + param_1 * 4 + 8) = param_2;
    return;
  }
  ppFVar1 = *(FILE ***)(DAT_00067c68 + 0x67c42);
  fprintf(*ppFVar1,(char *)(DAT_00067c70 + 0x67c56),DAT_00067c74 + 0x67c58,DAT_00067c78 + 0x67c5a,
          0x8d6,DAT_00067c6c + 0x67c4a);
  fflush(*ppFVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}

