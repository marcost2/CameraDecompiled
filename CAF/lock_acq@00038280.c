
/* qcamera::QCameraPerfLock::lock_acq() */

int __thiscall qcamera::QCameraPerfLock::lock_acq(QCameraPerfLock *this)

{
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *pMVar1;
  Mutex *extraout_r1_01;
  Mutex *extraout_r1_02;
  Mutex *extraout_r1_03;
  Mutex *extraout_r1_04;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  Autolock aAStack44 [4];
  undefined8 local_28;
  undefined4 local_20;
  int local_18;
  
  piVar3 = *(int **)(DAT_00038394 + 0x3828c);
  local_18 = *piVar3;
  iVar4 = *(int *)(DAT_00038398 + 0x38296);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  android::Mutex::Autolock::Autolock(aAStack44,(Mutex *)(this + 0x10));
  pMVar1 = extraout_r1;
  if (*(int *)(this + 0xc) == 0) {
    iVar2 = -1;
  }
  else {
    local_28 = *(undefined8 *)(DAT_000383a4 + 0x382c4);
    local_20 = *(undefined4 *)(DAT_000383a4 + 0x382cc);
    if (this[0x24] != (QCameraPerfLock)0x0) {
      powerHintInternal(this,*(power_hint_t *)(this + 0x20),false);
      pMVar1 = extraout_r1_00;
    }
    if ((*(code **)this == (code *)0x0) || (-1 < *(int *)(this + 0x14))) {
      iVar2 = -1;
    }
    else {
      uVar5 = (**(code **)this)(*(int *)(this + 0x14),1000,&local_28,3);
      pMVar1 = (Mutex *)((ulonglong)uVar5 >> 0x20);
      iVar2 = (int)uVar5;
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log();
        pMVar1 = extraout_r1_03;
      }
      if (iVar2 < 0) {
        if (*(int *)(iVar4 + 0x20) != 0) {
          mm_camera_debug_log();
          pMVar1 = extraout_r1_04;
        }
      }
      else {
        *(int *)(this + 0x14) = iVar2;
      }
    }
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log();
      pMVar1 = extraout_r1_01;
    }
  }
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log();
    pMVar1 = extraout_r1_02;
  }
  android::Mutex::Autolock::_Autolock(aAStack44,pMVar1);
  if (*piVar3 == local_18) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

