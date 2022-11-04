
/* android::showThermalZones() */

void android::showThermalZones(void)

{
  FILE *__stream;
  long lVar1;
  int *piVar2;
  char acStack30 [10];
  int local_14;
  
  piVar2 = *(int **)(DAT_00103b70 + 0x103b02);
  local_14 = *piVar2;
  __stream = fopen((char *)(DAT_00103b74 + 0x103b0e),(char *)(DAT_00103b78 + 0x103b10));
  if (__stream != (FILE *)0x0) {
    __fgets_chk(acStack30,10,__stream,10);
    fclose(__stream);
  }
  lVar1 = strtol(acStack30,(char **)0x0,10);
  __android_log_print(6,DAT_00103b7c + 0x103b5c,DAT_00103b80 + 0x103b5e,lVar1 / 10,lVar1 % 10);
  if (*piVar2 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

