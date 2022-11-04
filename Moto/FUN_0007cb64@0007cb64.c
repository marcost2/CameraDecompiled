
void FUN_0007cb64(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_0007cb98 + 0x7cb70);
  iVar1 = *piVar2;
  __vsnprintf_chk(param_1,0x15,0,0x15,DAT_0007cb9c + 0x7cb7e,&stack0x00000000,&stack0x00000000);
  if (*piVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

