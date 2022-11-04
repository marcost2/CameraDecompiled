
/* qcamera::QCamera3HeapMemory::getFrameNumber(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HeapMemory::getFrameNumber(QCamera3HeapMemory *this,uint param_1)

{
  Mutex *pMVar1;
  Mutex *extraout_r1;
  Mutex *pMVar2;
  Mutex *extraout_r1_00;
  undefined4 uVar3;
  int *piVar4;
  Autolock aAStack24 [4];
  int local_14;
  
  piVar4 = *(int **)(DAT_00053498 + 0x53412);
  local_14 = *piVar4;
  android::Mutex::Autolock::Autolock(aAStack24,(Mutex *)(this + 0x608));
  if (param_1 < *(uint *)(this + 4)) {
    pMVar2 = extraout_r1;
    if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
      uVar3 = *(undefined4 *)(this + param_1 * 4 + 0x508);
      goto LAB_00053480;
    }
    pMVar1 = *(Mutex **)(*(int *)(DAT_000534a8 + 0x53460) + 0x20);
  }
  else {
    pMVar2 = *(Mutex **)(*(int *)(DAT_0005349c + 0x5343e) + 0x20);
    pMVar1 = pMVar2;
  }
  if (pMVar1 != (Mutex *)0x0) {
    mm_camera_debug_log();
    pMVar2 = extraout_r1_00;
  }
  uVar3 = 0xffffffff;
LAB_00053480:
  android::Mutex::Autolock::_Autolock(aAStack24,pMVar2);
  if (*piVar4 == local_14) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

