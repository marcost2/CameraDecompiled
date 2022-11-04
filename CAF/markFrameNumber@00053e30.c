
/* qcamera::QCamera3GrallocMemory::markFrameNumber(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::markFrameNumber
          (QCamera3GrallocMemory *this,uint param_1,uint param_2)

{
  Mutex *pMVar1;
  Mutex *extraout_r1;
  Mutex *pMVar2;
  Mutex *extraout_r1_00;
  undefined4 uVar3;
  int *piVar4;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar4 = *(int **)(DAT_00053eec + 0x53e40);
  local_18 = *piVar4;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0x608));
  pMVar2 = extraout_r1;
  if (param_1 < 0x40) {
    if (param_1 < *(uint *)(this + 0x80c)) {
      pMVar2 = *(Mutex **)(*(int *)(DAT_00053efc + 0x53e7e) + 0x20);
      pMVar1 = pMVar2;
    }
    else {
      if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
        *(uint *)(this + param_1 * 4 + 0x508) = param_2;
        uVar3 = 0;
        goto LAB_00053ed4;
      }
      pMVar1 = *(Mutex **)(*(int *)(DAT_00053f08 + 0x53eb4) + 0x20);
    }
  }
  else {
    pMVar1 = *(Mutex **)(*(int *)(DAT_00053ef0 + 0x53e58) + 0x20);
  }
  if (pMVar1 != (Mutex *)0x0) {
    mm_camera_debug_log();
    pMVar2 = extraout_r1_00;
  }
  uVar3 = 0xffffffb5;
LAB_00053ed4:
  android::Mutex::Autolock::_Autolock(aAStack28,pMVar2);
  if (*piVar4 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

