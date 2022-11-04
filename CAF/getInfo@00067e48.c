
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace,
   libunwind::Registers_arm>::getInfo(unw_proc_info_t*) */

void __thiscall
libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::getInfo
          (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_ *this,
          unw_proc_info_t *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x178);
  uVar3 = *(undefined8 *)(this + 0x160);
  uVar1 = *(undefined8 *)(this + 0x168);
  uVar2 = *(undefined8 *)(this + 0x170);
  *(undefined8 *)param_1 = *(undefined8 *)(this + 0x158);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}

