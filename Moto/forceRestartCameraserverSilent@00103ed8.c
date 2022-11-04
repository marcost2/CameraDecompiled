
/* android::forceRestartCameraserverSilent() */

void android::forceRestartCameraserverSilent(void)

{
  FILE *__stream;
  long lVar1;
  int *piVar2;
  char acStack30 [10];
  int local_14;
  
  piVar2 = *(int **)(DAT_00103f7c + 0x103ee2);
  local_14 = *piVar2;
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00103f80 + 0x103eec));
  __android_log_print(6,DAT_00103f84 + 0x103ef8,DAT_00103f88 + 0x103efa);
  __stream = fopen((char *)(DAT_00103f8c + 0x103f04),(char *)(DAT_00103f90 + 0x103f06));
  if (__stream != (FILE *)0x0) {
    __fgets_chk(acStack30,10,__stream,10);
    fclose(__stream);
  }
  lVar1 = strtol(acStack30,(char **)0x0,10);
  __android_log_print(6,DAT_00103f94 + 0x103f52,DAT_00103f98 + 0x103f54,lVar1 / 10,lVar1 % 10);
  showOnlineCPUs();
  showCPUFreqs();
  raise(0xf);
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00103f9c + 0x103f6a));
  if (*piVar2 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

