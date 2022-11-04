
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace,
   libunwind::Registers_arm>::getFunctionName(char*, unsigned int, unsigned int*) */

undefined4 __thiscall
libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::getFunctionName
          (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_ *this,char *param_1,
          uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_24;
  int local_20;
  
  piVar5 = *(int **)(DAT_00067f0c + 0x67ec2);
  iVar4 = *piVar5;
  iVar1 = (**(code **)(*(int *)this + 0xc))(this,0xffffffff);
  iVar2 = dladdr();
  if ((iVar2 == 0) || (local_24 == 0)) {
    uVar3 = 0;
  }
  else {
    snprintf(param_1,0xffffffff,(char *)param_2);
    *param_3 = iVar1 - local_20;
    uVar3 = 1;
  }
  if (*piVar5 == iVar4) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

