
void FUN_00101a74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  piVar2 = *(int **)(DAT_00101ab0 + 0x101a88);
  iVar1 = *piVar2;
  local_4 = param_4;
  __vsprintf_chk(param_1,0,0x80,param_3,&local_4,&local_4);
  if (*piVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

