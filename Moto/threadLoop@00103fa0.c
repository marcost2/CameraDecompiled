
/* WARNING: Control flow encountered bad instruction data */
/* android::CameraHalWatchdog::WatchdogThread::threadLoop() */

undefined4 __thiscall android::CameraHalWatchdog::WatchdogThread::threadLoop(WatchdogThread *this)

{
  longlong lVar1;
  ulonglong uVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  timespec local_30;
  int local_28;
  
  piVar10 = *(int **)(iRam001040f4 + 0x103fae);
  local_28 = *piVar10;
  __mutex = (pthread_mutex_t *)(this + 0x24);
  pthread_mutex_lock(__mutex);
  uVar4 = 3;
  uVar8 = 0x7e11d600;
  if ((*(int *)(this + 0x30) != 0) && (iVar3 = *(int *)(*(int *)(this + 0x30) + 0x110), 0 < iVar3))
  {
    lVar1 = (longlong)iVar3 * 1000000;
    uVar8 = (uint)lVar1;
    uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
  }
  if (this[0x2c] == (WatchdogThread)0x0) {
    uVar11 = __aeabi_ldivmod(uVar8,uVar4,1000000000,0);
    do {
      clock_gettime(1,&local_30);
      iVar3 = local_30.tv_nsec + uVar8 + (int)uVar11 * -1000000000;
      local_30.tv_nsec = iVar3;
      if (999999999 < iVar3) {
        local_30.tv_nsec = iVar3 + -1000000000;
      }
      uVar2 = uVar11 + 1;
      if (iVar3 < 1000000000) {
        uVar2 = uVar11;
      }
      uVar4 = (uint)(uVar2 >> 0x20);
      uVar6 = (uint)uVar2;
      uVar5 = uVar6 + local_30.tv_sec;
      iVar3 = local_30.tv_sec >> 0x1f;
      iVar9 = uVar4 + iVar3 + (uint)CARRY4(uVar6,local_30.tv_sec);
      uVar4 = uVar4 ^ 0x7fffffff;
      if ((int)((uVar4 - iVar3) - (uint)(~uVar6 < (uint)local_30.tv_sec)) < 0 !=
          (SBORROW4(uVar4,iVar3) != SBORROW4(uVar4 - iVar3,(uint)(~uVar6 < (uint)local_30.tv_sec))))
      {
        iVar9 = 0x7fffffff;
        uVar5 = 0xffffffff;
      }
      local_30.tv_sec = uVar5;
      if ((int)(iVar9 - (uint)(uVar5 < 0x7fffffff)) < 0 ==
          (SBORROW4(iVar9,(uint)(uVar5 < 0x7fffffff)) != false)) {
        local_30.tv_sec = 0x7fffffff;
      }
      iVar3 = pthread_cond_timedwait((pthread_cond_t *)(this + 0x28),__mutex,&local_30);
    } while ((iVar3 == 0) && (this[0x2c] == (WatchdogThread)0x0));
    if (iVar3 == 0x6e) {
      pcVar7 = *(char **)(this + 0x30);
      if ((pcVar7 == (char *)0x0) || (pcVar7 = pcVar7 + 4, *pcVar7 == '\0')) {
        __android_log_print(6,DAT_00104100 + 0x1040c0,DAT_00104104 + 0x1040c2,pcVar7);
      }
      else {
        __android_log_print(6,iRam001040f8 + 0x1040b0,DAT_001040fc + 0x1040b2,pcVar7);
      }
      if ((*(int *)(this + 0x30) == 0) || (*(char *)(*(int *)(this + 0x30) + 0x114) == '\0')) {
        forceRestartMediaserver();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      forceRestartCameraserverSilent();
    }
  }
  pthread_mutex_unlock(__mutex);
  if (*piVar10 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

