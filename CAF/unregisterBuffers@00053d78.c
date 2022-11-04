
/* qcamera::QCamera3GrallocMemory::unregisterBuffers() */

void __thiscall qcamera::QCamera3GrallocMemory::unregisterBuffers(QCamera3GrallocMemory *this)

{
  int *piVar1;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *extraout_r1_01;
  Mutex *pMVar2;
  Mutex *extraout_r1_02;
  uint uVar3;
  int iVar4;
  int *piVar5;
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00053e18 + 0x53d86);
  local_1c = *piVar5;
  android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(this + 0x608));
  iVar4 = *(int *)(DAT_00053e1c + 0x53d9e);
  pMVar2 = extraout_r1;
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log();
    pMVar2 = extraout_r1_00;
  }
  uVar3 = *(uint *)(this + 0x80c);
  if (uVar3 < 0x40) {
    piVar1 = (int *)(this + uVar3 * 0x10);
    do {
      piVar1 = piVar1 + 4;
      if (*piVar1 != 0) {
        unregisterBufferLocked(this,uVar3);
        pMVar2 = extraout_r1_01;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x40);
  }
  *(undefined4 *)(this + 4) = 0;
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log();
    pMVar2 = extraout_r1_02;
  }
  android::Mutex::Autolock::_Autolock(aAStack32,pMVar2);
  if (*piVar5 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

