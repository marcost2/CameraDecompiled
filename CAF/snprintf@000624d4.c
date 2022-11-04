
/* snprintf(char*, unsigned int pass_object_size1, char const*, ...) */

void snprintf(char *param_1,uint param_2,char *param_3,...)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_00062504 + 0x624de);
  iVar1 = *piVar2;
  __vsnprintf_chk();
  if (*piVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

