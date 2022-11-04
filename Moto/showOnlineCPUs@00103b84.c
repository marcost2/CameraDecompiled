
/* android::showOnlineCPUs() */

void android::showOnlineCPUs(void)

{
  FILE *pFVar1;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  char acStack320 [100];
  char acStack220 [100];
  char acStack120 [100];
  int local_14;
  
  piVar4 = *(int **)(DAT_00103c64 + 0x103b8e);
  local_14 = *piVar4;
  pFVar1 = fopen((char *)(DAT_00103c68 + 0x103b9a),(char *)(DAT_00103c6c + 0x103b9c));
  if (pFVar1 != (FILE *)0x0) {
    __fgets_chk(acStack120,100,pFVar1,100);
    fclose(pFVar1);
  }
  sVar2 = strcspn(acStack120,(char *)(DAT_00103c70 + 0x103bbe));
  acStack120[sVar2] = '\0';
  pFVar1 = fopen((char *)(DAT_00103c74 + 0x103bcc),(char *)(DAT_00103c78 + 0x103bce));
  if (pFVar1 != (FILE *)0x0) {
    __fgets_chk(acStack220,100,pFVar1,100);
    fclose(pFVar1);
  }
  sVar2 = strcspn(acStack220,(char *)(DAT_00103c7c + 0x103bf0));
  acStack220[sVar2] = '\0';
  pFVar1 = fopen((char *)(DAT_00103c80 + 0x103bfc),(char *)(DAT_00103c84 + 0x103bfe));
  if (pFVar1 != (FILE *)0x0) {
    __fgets_chk(acStack320,100,pFVar1,100);
    fclose(pFVar1);
  }
  sVar2 = strcspn(acStack320,(char *)(DAT_00103c88 + 0x103c20));
  acStack320[sVar2] = '\0';
  iVar3 = DAT_00103c8c + 0x103c32;
  __android_log_print(6,iVar3,DAT_00103c90 + 0x103c34,acStack120);
  __android_log_print(6,iVar3,DAT_00103c94 + 0x103c44,acStack320);
  __android_log_print(6,iVar3,DAT_00103c98 + 0x103c52,acStack220);
  if (*piVar4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

