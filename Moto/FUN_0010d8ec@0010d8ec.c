
void FUN_0010d8ec(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined auStack60 [8];
  int *local_34;
  int local_14;
  
  piVar3 = *(int **)(DAT_0010d940 + 0x10d8fa);
  local_14 = *piVar3;
  iVar1 = unw_get_proc_info(param_3,(int)auStack60);
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    if (iVar1 != 0) {
      local_34 = (int *)0x0;
    }
    if (*local_34 != 0) {
      uVar2 = 9;
      goto LAB_0010d92e;
    }
  }
  iVar1 = FUN_0010d99c(param_3);
  uVar2 = 9;
  if (iVar1 == 1) {
    uVar2 = 8;
  }
LAB_0010d92e:
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

