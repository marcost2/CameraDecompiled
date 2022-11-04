
void FUN_0007e2c4(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_0007e2f8 + 0x7e2d0);
  iVar1 = *piVar2;
  __vsnprintf_chk(param_1,0x5c,0,0x5c,DAT_0007e2fc + 0x7e2de,&stack0x00000000,&stack0x00000000);
  if (*piVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

