
/* android::forceRestartMediaserver() */

void android::forceRestartMediaserver(void)

{
  FILE *__stream;
  long lVar1;
  int iVar2;
  char *pcVar3;
  char acStack100 [92];
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00103eb4 + 0x103e1e));
  __android_log_print(6,DAT_00103eb8 + 0x103e2a,DAT_00103ebc + 0x103e2c);
  __stream = fopen((char *)(DAT_00103ec0 + 0x103e36),(char *)(DAT_00103ec4 + 0x103e38));
  if (__stream != (FILE *)0x0) {
    __fgets_chk(acStack100,10,__stream,10);
    fclose(__stream);
  }
  lVar1 = strtol(acStack100,(char **)0x0,10);
  __android_log_print(6,DAT_00103ec8 + 0x103e80,DAT_00103ecc + 0x103e82,lVar1 / 10,lVar1 % 10);
  showOnlineCPUs();
  showCPUFreqs();
  iVar2 = property_get(DAT_00103ed0 + 0x103e96,acStack100,0);
  if ((0 < iVar2) &&
     (pcVar3 = strstr(acStack100,(char *)(DAT_00103ed4 + 0x103ea4)), pcVar3 != (char *)0x0)) {
    raise(0xf);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

