
undefined4 _Unwind_GetRegionStart(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_34 [10];
  int local_c;
  
  piVar2 = *(int **)(DAT_000678e4 + 0x678be);
  local_c = *piVar2;
  iVar1 = unw_get_proc_info(param_1,(int)local_34);
  if (iVar1 != 0) {
    local_34[0] = 0;
  }
  if (*piVar2 == local_c) {
    return local_34[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

