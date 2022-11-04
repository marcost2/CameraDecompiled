
int _Unwind_RaiseException
              (_Unwind_Control_Block *param_1,undefined4 param_2,undefined4 param_3,
              undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_b10 [3];
  code *local_b04;
  undefined4 local_afc;
  undefined4 local_af0;
  int aiStack2792 [358];
  unw_context_t auStack1360 [1336];
  int local_18;
  
  piVar2 = *(int **)(DAT_00067708 + 0x67680);
  local_18 = *piVar2;
  unw_getcontext((int)(undefined (*) [16])auStack1360,param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0xc) = 0;
  unw_init_local(aiStack2792,(undefined (*) [16])auStack1360);
  iVar1 = unw_get_proc_info(aiStack2792,(int)local_b10);
  if (iVar1 == 0) {
    do {
      if (local_b04 != (code *)0x0) {
        *(undefined4 *)(param_1 + 0x48) = local_b10[0];
        *(undefined4 *)(param_1 + 0x4c) = local_af0;
        *(undefined4 *)(param_1 + 0x50) = local_afc;
        iVar1 = (*local_b04)(0,param_1,aiStack2792);
        if (iVar1 != 8) {
          if (iVar1 == 6) {
            unwind_phase2(auStack1360,(unw_cursor_t *)aiStack2792,param_1,false);
            iVar1 = 2;
            goto LAB_000676d4;
          }
          if (iVar1 == 9) goto LAB_000676d4;
          break;
        }
      }
      iVar1 = unw_get_proc_info(aiStack2792,(int)local_b10);
    } while (iVar1 == 0);
  }
  iVar1 = 3;
LAB_000676d4:
  if (*piVar2 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

