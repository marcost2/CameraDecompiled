
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace,
   libunwind::Registers_arm>::validFloatReg(int) */

uint __thiscall
libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::validFloatReg
          (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_ *this,int param_1)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes((param_1 & 0xffffffe0U) - 0x100);
  return uVar1 >> 5;
}

