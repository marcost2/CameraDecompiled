
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace, libunwind::Registers_arm>::jumpto() */

void __thiscall
libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::jumpto
          (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_ *this)

{
  if (this[0x49] != (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x0) {
    if (this[0x48] == (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x0) {
      Registers_arm::restoreVFPWithFLDMD(this + 0x50);
    }
    else {
      Registers_arm::restoreVFPWithFLDMX(this + 0x50);
    }
  }
  if (this[0x4a] != (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_)0x0) {
    Registers_arm::restoreVFPv3(this + 0xd8);
  }
  Registers_arm::__ThumbV7PILongThunk__ZN9libunwind13Registers_arm20restoreCoreAndJumpToEv
            ((Registers_arm *)(this + 8));
  return;
}

