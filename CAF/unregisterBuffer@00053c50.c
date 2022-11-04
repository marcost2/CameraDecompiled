
/* qcamera::QCamera3GrallocMemory::unregisterBuffer(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::unregisterBuffer(QCamera3GrallocMemory *this,uint param_1)

{
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *extraout_r1_01;
  Mutex *pMVar1;
  Mutex *extraout_r1_02;
  Mutex *extraout_r1_03;
  Mutex *extraout_r1_04;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar3 = *(int **)(DAT_00053d48 + 0x53c5e);
  local_18 = *piVar3;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0x608));
  iVar4 = *(int *)(DAT_00053d4c + 0x53c72);
  pMVar1 = extraout_r1;
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log();
    pMVar1 = extraout_r1_00;
  }
  if (param_1 < 0x40) {
    if (param_1 < *(uint *)(this + 0x80c)) {
      pMVar1 = *(Mutex **)(iVar4 + 0x20);
      if (pMVar1 != (Mutex *)0x0) {
        mm_camera_debug_log();
        pMVar1 = extraout_r1_02;
      }
      uVar2 = 0xffffffb5;
      goto LAB_00053d12;
    }
    if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
      unregisterBufferLocked(this,param_1);
      pMVar1 = extraout_r1_03;
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log();
        pMVar1 = extraout_r1_04;
      }
      uVar2 = 0;
      goto LAB_00053d12;
    }
    iVar4 = *(int *)(iVar4 + 0x20);
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x20);
  }
  if (iVar4 != 0) {
    mm_camera_debug_log();
    pMVar1 = extraout_r1_01;
  }
  uVar2 = 0xffffffea;
LAB_00053d12:
  android::Mutex::Autolock::_Autolock(aAStack28,pMVar1);
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

