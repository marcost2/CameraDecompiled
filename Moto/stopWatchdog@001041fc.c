
/* android::CameraHalWatchdog::AutoWatchdog::stopWatchdog() */

void __thiscall android::CameraHalWatchdog::AutoWatchdog::stopWatchdog(AutoWatchdog *this)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = systemTime(1);
  iVar3 = *(int *)this;
  uVar1 = __aeabi_ldivmod((uint)(lVar4 - *(longlong *)(this + 0x108)),
                          (uint)((ulonglong)(lVar4 - *(longlong *)(this + 0x108)) >> 0x20),
                          (uint)&DAT_000f4240,0);
  if (iVar3 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(iVar3 + 0x24));
    *(undefined *)(iVar3 + 0x2c) = 1;
    pthread_cond_signal((pthread_cond_t *)(iVar3 + 0x28));
    pthread_mutex_unlock((pthread_mutex_t *)(iVar3 + 0x24));
    android::Thread::requestExitAndWait();
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      android::RefBase::decStrong((void *)(*(int *)(*piVar2 + -0xc) + (int)piVar2));
      if (piVar2 != *(int **)this) {
        android::sp_report_race();
      }
      *(undefined4 *)this = 0;
    }
  }
  if (this[4] != (AutoWatchdog)0x0) {
    __android_log_print(4,DAT_001042a0 + 0x104280,DAT_001042a4 + 0x104282,uVar1,this + 4);
    return;
  }
  __android_log_print(4,DAT_001042a8 + 0x104296,DAT_001042ac + 0x104298,uVar1);
  return;
}

