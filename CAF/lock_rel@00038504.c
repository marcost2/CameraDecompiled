
/* qcamera::QCameraPerfLock::lock_rel() */

uint __thiscall qcamera::QCameraPerfLock::lock_rel(QCameraPerfLock *this)

{
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *pMVar1;
  Mutex *extraout_r1_01;
  Mutex *extraout_r1_02;
  Mutex *extraout_r1_03;
  Mutex *extraout_r1_04;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar3 = *(int **)(DAT_00038604 + 0x38510);
  local_18 = *piVar3;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0x10));
  pMVar1 = extraout_r1;
  if (*(int *)(this + 0xc) != 0) {
    iVar4 = *(int *)(DAT_00038608 + 0x3852a);
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log();
      pMVar1 = extraout_r1_00;
    }
    if (-1 < *(int *)(this + 0x14)) {
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      pMVar1 = *(Mutex **)(this + 4);
      if ((pMVar1 == (Mutex *)0x0) || (*(int *)(this + 0x14) < 0)) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar5 = (*(code *)pMVar1)();
        pMVar1 = (Mutex *)((ulonglong)uVar5 >> 0x20);
        uVar2 = (uint)uVar5;
        if ((0x7fffffff < uVar2) && (*(int *)(iVar4 + 0x20) != 0)) {
          mm_camera_debug_log();
          pMVar1 = extraout_r1_01;
        }
        *(undefined4 *)(this + 0x14) = 0xffffffff;
      }
      if (this[0x24] != (QCameraPerfLock)0x0) {
        powerHintInternal(this,*(power_hint_t *)(this + 0x20),true);
        pMVar1 = extraout_r1_02;
      }
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log();
        pMVar1 = extraout_r1_03;
      }
      goto LAB_000385ec;
    }
    if (*(int *)(iVar4 + 0x24) != 0) {
      mm_camera_debug_log();
      pMVar1 = extraout_r1_04;
    }
  }
  uVar2 = 0xffffffff;
LAB_000385ec:
  android::Mutex::Autolock::_Autolock(aAStack28,pMVar1);
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

