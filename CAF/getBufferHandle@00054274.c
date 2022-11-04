
/* qcamera::QCamera3GrallocMemory::getBufferHandle(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::getBufferHandle(QCamera3GrallocMemory *this,uint param_1)

{
  Mutex *pMVar1;
  Mutex *extraout_r1;
  Mutex *pMVar2;
  Mutex *extraout_r1_00;
  undefined4 uVar3;
  int *piVar4;
  Autolock aAStack24 [4];
  int local_14;
  
  piVar4 = *(int **)(DAT_00054330 + 0x54282);
  local_14 = *piVar4;
  android::Mutex::Autolock::Autolock(aAStack24,(Mutex *)(this + 0x608));
  pMVar2 = extraout_r1;
  if (param_1 < 0x40) {
    if (param_1 < *(uint *)(this + 0x80c)) {
      pMVar2 = *(Mutex **)(*(int *)(DAT_00054340 + 0x542c6) + 0x20);
      pMVar1 = pMVar2;
    }
    else {
      if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
        uVar3 = *(undefined4 *)(this + param_1 * 4 + 0x60c);
        goto LAB_00054318;
      }
      pMVar1 = *(Mutex **)(*(int *)(DAT_0005434c + 0x542fa) + 0x20);
    }
  }
  else {
    pMVar1 = *(Mutex **)(*(int *)(DAT_00054334 + 0x5429a) + 0x20);
  }
  if (pMVar1 != (Mutex *)0x0) {
    mm_camera_debug_log();
    pMVar2 = extraout_r1_00;
  }
  uVar3 = 0;
LAB_00054318:
  android::Mutex::Autolock::_Autolock(aAStack24,pMVar2);
  if (*piVar4 == local_14) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

