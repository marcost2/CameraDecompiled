
/* qcamera::QCameraPerfLock::lock_rel_timed() */

uint __thiscall qcamera::QCameraPerfLock::lock_rel_timed(QCameraPerfLock *this)

{
  uint uVar1;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *pMVar2;
  Mutex *extraout_r1_01;
  Mutex *extraout_r1_02;
  Mutex *extraout_r1_03;
  Mutex *extraout_r1_04;
  int *piVar3;
  int iVar4;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar3 = *(int **)(DAT_000384d4 + 0x383d4);
  local_18 = *piVar3;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0x10));
  pMVar2 = extraout_r1;
  if (*(int *)(this + 0xc) != 0) {
    iVar4 = *(int *)(DAT_000384d8 + 0x383ee);
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log();
      pMVar2 = extraout_r1_00;
    }
    if (-1 < *(int *)(this + 0x18)) {
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      pMVar2 = *(Mutex **)(this + 4);
      if ((pMVar2 == (Mutex *)0x0) || (*(int *)(this + 0x18) < 0)) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = (*(code *)pMVar2)();
        if ((0x7fffffff < uVar1) && (*(int *)(iVar4 + 0x20) != 0)) {
          mm_camera_debug_log();
        }
        *(undefined4 *)(this + 0x18) = 0xffffffff;
        resetTimer(this);
        pMVar2 = extraout_r1_01;
      }
      if ((this[0x24] != (QCameraPerfLock)0x0) && (*(int *)(this + 0x28) == 0)) {
        powerHintInternal(this,*(power_hint_t *)(this + 0x20),true);
        pMVar2 = extraout_r1_02;
      }
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log();
        pMVar2 = extraout_r1_03;
      }
      goto LAB_000384ba;
    }
    if (*(int *)(iVar4 + 0x24) != 0) {
      mm_camera_debug_log();
      pMVar2 = extraout_r1_04;
    }
  }
  uVar1 = 0xffffffff;
LAB_000384ba:
  android::Mutex::Autolock::_Autolock(aAStack28,pMVar2);
  if (*piVar3 == local_18) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

