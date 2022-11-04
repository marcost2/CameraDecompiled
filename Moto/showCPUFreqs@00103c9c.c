
/* android::showCPUFreqs() */

void android::showCPUFreqs(void)

{
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  char *__modes;
  char *__reject;
  int iVar3;
  FILE *pFVar4;
  size_t sVar5;
  int iVar6;
  undefined4 extraout_r1;
  char *__s2;
  char *__s1;
  int *piVar7;
  undefined auStack180 [20];
  char acStack160 [20];
  char acStack140 [100];
  int local_28;
  
  piVar7 = *(int **)(DAT_00103db0 + 0x103ca8);
  local_28 = *piVar7;
  __dirp = opendir((char *)(DAT_00103db4 + 0x103cb6));
  if ((__dirp != (DIR *)0x0) && (pdVar1 = readdir(__dirp), pdVar1 != (dirent *)0x0)) {
    iVar2 = DAT_00103dbc + 0x103cd4;
    __s2 = (char *)(DAT_00103db8 + 0x103cd6);
    __modes = (char *)(DAT_00103dc0 + 0x103cdc);
    __reject = (char *)(DAT_00103dc4 + 0x103ce2);
    iVar3 = DAT_00103dc8 + 0x103ce8;
    do {
      __s1 = pdVar1->d_name + 8;
      iVar6 = strncmp(__s1,__s2,3);
      if ((iVar6 == 0) && (iVar6 = isalpha((uint)(byte)pdVar1->d_name[0xb]), iVar6 == 0)) {
        FUN_00103dd4(acStack140,extraout_r1,iVar2,__s1);
        pFVar4 = fopen(acStack140,__modes);
        if (pFVar4 != (FILE *)0x0) {
          iVar6 = __fgets_chk(acStack160,0x14,pFVar4,0x14);
          fclose(pFVar4);
          if (iVar6 != 0) {
            sVar5 = strcspn(acStack160,__reject);
            acStack160[sVar5] = '\0';
            FUN_00103dd4(acStack140,0,iVar3,__s1);
            pFVar4 = fopen(acStack140,__modes);
            if (pFVar4 != (FILE *)0x0) {
              iVar6 = __fgets_chk(auStack180,0x14,pFVar4,0x14);
              fclose(pFVar4);
              if (iVar6 != 0) {
                __android_log_print(6,DAT_00103dcc + 0x103d6e,DAT_00103dd0 + 0x103d70,__s1,
                                    acStack160,auStack180);
              }
            }
          }
        }
      }
      pdVar1 = readdir(__dirp);
    } while (pdVar1 != (dirent *)0x0);
  }
  if (*piVar7 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

