
undefined4 unw_set_reg(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined auStack64 [16];
  int local_30;
  int local_18;
  
  piVar3 = *(int **)(DAT_00067a8c + 0x67a1c);
  local_18 = *piVar3;
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (iVar1 == 0) {
    uVar2 = 0xffffe672;
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
    if (param_2 == -1) {
      (**(code **)(*param_1 + 0x24))(param_1,auStack64);
      (**(code **)(*param_1 + 0x34))(param_1,0);
      if (local_30 != 0) {
        iVar1 = (**(code **)(*param_1 + 0xc))(param_1,0xfffffffe);
        (**(code **)(*param_1 + 0x10))(param_1,0xfffffffe,local_30 + iVar1);
      }
    }
    uVar2 = 0;
  }
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

