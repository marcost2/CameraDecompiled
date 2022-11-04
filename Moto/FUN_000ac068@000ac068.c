
void FUN_000ac068(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_000ac09c + 0xac074);
  iVar1 = *piVar2;
  __vsnprintf_chk(param_1,0x1e,0,0x1e,DAT_000ac0a0 + 0xac082,&stack0x00000000,&stack0x00000000);
  if (*piVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

