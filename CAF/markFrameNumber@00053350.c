
/* qcamera::QCamera3HeapMemory::markFrameNumber(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HeapMemory::markFrameNumber(QCamera3HeapMemory *this,uint param_1,uint param_2)

{
  Mutex *pMVar1;
  Mutex *extraout_r1;
  Mutex *pMVar2;
  Mutex *extraout_r1_00;
  undefined4 uVar3;
  int *piVar4;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar4 = *(int **)(DAT_000533e8 + 0x53360);
  local_18 = *piVar4;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0x608));
  if (param_1 < *(uint *)(this + 4)) {
    pMVar2 = extraout_r1;
    if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
      *(uint *)(this + param_1 * 4 + 0x508) = param_2;
      uVar3 = 0;
      goto LAB_000533d0;
    }
    pMVar1 = *(Mutex **)(*(int *)(DAT_000533f8 + 0x533b0) + 0x20);
  }
  else {
    pMVar2 = *(Mutex **)(*(int *)(DAT_000533ec + 0x5338e) + 0x20);
    pMVar1 = pMVar2;
  }
  if (pMVar1 != (Mutex *)0x0) {
    mm_camera_debug_log();
    pMVar2 = extraout_r1_00;
  }
  uVar3 = 0xffffffb5;
LAB_000533d0:
  android::Mutex::Autolock::_Autolock(aAStack28,pMVar2);
  if (*piVar4 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

