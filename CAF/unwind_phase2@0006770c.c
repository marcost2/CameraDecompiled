
/* unwind_phase2(unw_context_t*, unw_cursor_t*, _Unwind_Control_Block*, bool) */

void unwind_phase2(unw_context_t *param_1,unw_cursor_t *param_2,_Unwind_Control_Block *param_3,
                  bool param_4)

{
  int iVar1;
  FILE **ppFVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_58;
  undefined4 local_54 [3];
  code *local_48;
  undefined4 local_40;
  undefined4 local_34;
  int local_2c;
  int local_28;
  
  piVar5 = *(int **)(DAT_00067800 + 0x67720);
  local_28 = *piVar5;
  unw_init_local((int *)param_2,(undefined (*) [16])param_1);
  iVar3 = 1;
  do {
    uVar4 = 1;
    if (((param_4 & 1U) != 0) && (uVar4 = 2, iVar3 == 0)) {
      unw_set_reg((int *)param_2,-1,*(undefined4 *)(param_3 + 0x10));
      param_4 = false;
    }
    unw_get_reg((int *)param_2,0xfffffffe,&local_2c);
    iVar1 = unw_get_proc_info((int *)param_2,(int)local_54);
    if (iVar1 != 0) goto LAB_000677ea;
    if (local_48 != (code *)0x0) {
      *(undefined4 *)(param_3 + 0x48) = local_54[0];
      *(undefined4 *)(param_3 + 0x4c) = local_34;
      *(undefined4 *)(param_3 + 0x50) = local_40;
      iVar1 = (*local_48)(uVar4,param_3,param_2);
      if (iVar1 == 7) {
        unw_get_reg((int *)param_2,0xffffffff,&local_58);
        *(undefined4 *)(param_3 + 0x10) = local_58;
        unw_resume((int *)param_2);
LAB_000677ea:
        if (*piVar5 != local_28) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      if (iVar1 != 8) {
        if (iVar1 == 9) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_000677ea;
      }
      if (local_2c == *(int *)(param_3 + 0x20)) {
        ppFVar2 = *(FILE ***)(DAT_00067804 + 0x677a8);
        fprintf(*ppFVar2,(char *)(DAT_0006780c + 0x677bc),DAT_00067810 + 0x677be,
                DAT_00067814 + 0x677c0,0x266,DAT_00067808 + 0x677b0);
        fflush(*ppFVar2);
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar3 = iVar3 + -1;
  } while( true );
}

