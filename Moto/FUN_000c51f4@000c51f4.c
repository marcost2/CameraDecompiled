
void FUN_000c51f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_000c5224 + 0xc5200);
  iVar1 = *piVar2;
  __vsnprintf_chk(param_1,0x20,0,0x20,param_4,&stack0x00000000,&stack0x00000000);
  if (*piVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

