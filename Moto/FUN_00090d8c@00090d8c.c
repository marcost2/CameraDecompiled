
void FUN_00090d8c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_00090dc4 + 0x90d9a);
  iVar1 = *piVar2;
  __vsnprintf_chk(param_1,0x1000,0,0x1000,DAT_00090dc8 + 0x90da8,&stack0x00000000,&stack0x00000000);
  if (*piVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

