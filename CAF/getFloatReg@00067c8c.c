
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace, libunwind::Registers_arm>::getFloatReg(int)
    */

undefined8 __thiscall
libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::getFloatReg
          (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_ *this,int param_1)

{
  int iVar1;
  FILE **ppFVar2;
  
  if ((param_1 & 0xfffffff0U) == 0x110) {
    if (this[0x4a] == (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x0) {
      this[0x4a] = (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x1;
      Registers_arm::saveVFPv3(this + 0xd8);
    }
    iVar1 = param_1 * 8 + -0x7a8;
  }
  else {
    if ((param_1 & 0xfffffff0U) != 0x100) {
      ppFVar2 = *(FILE ***)(DAT_00067d20 + 0x67cfc);
      fprintf(*ppFVar2,(char *)(DAT_00067d28 + 0x67d10),DAT_00067d2c + 0x67d12,
              DAT_00067d30 + 0x67d14,0x9aa,DAT_00067d24 + 0x67d04);
      fflush(*ppFVar2);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (this[0x49] == (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x0) {
      this[0x49] = (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x1;
      if (this[0x48] == (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x0) {
        Registers_arm::saveVFPWithFSTMD(this + 0x50);
      }
      else {
        Registers_arm::saveVFPWithFSTMX(this + 0x50);
      }
    }
    iVar1 = param_1 * 8 + -0x7b0;
  }
  return *(undefined8 *)(this + iVar1);
}

