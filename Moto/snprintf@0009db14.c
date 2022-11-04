
int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_0009db48 + 0x9db20);
  iVar2 = *piVar3;
  iVar1 = __vsnprintf_chk(__s,__format,0,__maxlen,in_r3,&stack0x00000000,&stack0x00000000);
  if (*piVar3 == iVar2) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

