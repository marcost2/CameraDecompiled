
/* qcamera::QCameraPerfLock::isTimerReset() */

undefined4 __thiscall qcamera::QCameraPerfLock::isTimerReset(QCameraPerfLock *this)

{
  int iVar1;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *pMVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 in_stack_ffffffe8;
  
  piVar4 = *(int **)(DAT_000380b8 + 0x38060);
  iVar1 = *piVar4;
  android::Mutex::Autolock::Autolock((Autolock *)&stack0xffffffe8,(Mutex *)(this + 0x10));
  pMVar2 = extraout_r1;
  if (*(int *)(this + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(int *)(this + 0x28) != 0) {
      systemTime();
      uVar6 = ns2ms(CONCAT44(iVar1,in_stack_ffffffe8));
      pMVar2 = (Mutex *)((ulonglong)uVar6 >> 0x20);
      bVar5 = *(uint *)(this + 0x2c) < (uint)uVar6;
      if ((int)(-(uint)bVar5 - (int)pMVar2) < 0 != (SBORROW4(-(int)pMVar2,(uint)bVar5) != false)) {
        resetTimer(this);
        uVar3 = 1;
        pMVar2 = extraout_r1_00;
      }
    }
  }
  android::Mutex::Autolock::_Autolock((Autolock *)&stack0xffffffe8,pMVar2);
  if (*piVar4 == iVar1) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

