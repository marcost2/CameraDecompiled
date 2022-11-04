
undefined4 _Unwind_GetLanguageSpecificData(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined auStack52 [8];
  undefined4 local_2c;
  int local_c;
  
  piVar2 = *(int **)(DAT_000678b0 + 0x6788a);
  local_c = *piVar2;
  iVar1 = unw_get_proc_info(param_1,(int)auStack52);
  if (iVar1 != 0) {
    local_2c = 0;
  }
  if (*piVar2 == local_c) {
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

