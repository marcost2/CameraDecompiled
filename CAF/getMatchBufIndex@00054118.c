
/* qcamera::QCamera3GrallocMemory::getMatchBufIndex(void*) */

uint qcamera::QCamera3GrallocMemory::getMatchBufIndex(void *param_1)

{
  Mutex *in_r1;
  Mutex *extraout_r1;
  Mutex *pMVar1;
  uint uVar2;
  int *piVar3;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar3 = *(int **)(DAT_00054174 + 0x54126);
  local_18 = *piVar3;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)((int)param_1 + 0x608));
  pMVar1 = extraout_r1;
  if (in_r1 == (Mutex *)0x0) {
    uVar2 = 0xffffffea;
  }
  else {
    for (uVar2 = *(uint *)((int)param_1 + 0x80c); uVar2 < 0x40; uVar2 = uVar2 + 1) {
      pMVar1 = *(Mutex **)((int)param_1 + uVar2 * 4 + 0x60c);
      if (pMVar1 == in_r1) goto LAB_0005415a;
    }
    uVar2 = 0xffffffff;
  }
LAB_0005415a:
  android::Mutex::Autolock::_Autolock(aAStack28,pMVar1);
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

