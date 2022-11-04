
/* android::CameraHalWatchdog::AutoWatchdog::startWatchdog() */

void __thiscall android::CameraHalWatchdog::AutoWatchdog::startWatchdog(AutoWatchdog *this)

{
  int *this_00;
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  pthread_condattr_t pStack32;
  int local_1c;
  
  piVar3 = *(int **)(DAT_001041e4 + 0x104116);
  local_1c = *piVar3;
  if (*(int *)(this + 0x110) == 0) {
    __android_log_print(4,DAT_001041e8 + 0x104124,DAT_001041ec + 0x104138);
  }
  else {
    __android_log_print(4,DAT_001041e8 + 0x104124,DAT_001041f0 + 0x10412c);
  }
  this_00 = (int *)operator_new(0x3c);
  android::RefBase::RefBase((RefBase *)(this_00 + 0xd));
  android::Thread::Thread
            ((Thread *)this_00,(bool)((char)*(undefined4 *)(DAT_001041f4 + 0x104154) + '\x04'));
  iVar1 = *(int *)(DAT_001041f8 + 0x104162);
  this_00[0xd] = iVar1 + 0x44;
  *this_00 = iVar1 + 0xc;
  pthread_mutex_init((pthread_mutex_t *)(this_00 + 9),(pthread_mutexattr_t *)0x0);
  pthread_condattr_init(&pStack32);
  pthread_condattr_setclock(&pStack32,1);
  pthread_cond_init((pthread_cond_t *)(this_00 + 10),&pStack32);
  pthread_condattr_destroy(&pStack32);
  this_00[0xc] = (int)this;
  *(Thread *)(this_00 + 0xb) = (Thread)0x0;
  piVar2 = *(int **)this;
  android::RefBase::incStrong((Thread *)(*(int *)(*this_00 + -0xc) + (int)this_00));
  if (piVar2 != (int *)0x0) {
    android::RefBase::decStrong((void *)(*(int *)(*piVar2 + -0xc) + (int)piVar2));
  }
  if (piVar2 != *(int **)this) {
    android::sp_report_race();
  }
  *(int **)this = this_00;
  uVar4 = systemTime(1);
  *(int *)(this + 0x108) = (int)uVar4;
  *(int *)(this + 0x10c) = (int)((ulonglong)uVar4 >> 0x20);
  if (*piVar3 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

