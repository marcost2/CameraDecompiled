
/* qcamera::QCameraPerfLock::lock_acq_timed(int) */

int __thiscall qcamera::QCameraPerfLock::lock_acq_timed(QCameraPerfLock *this,int param_1)

{
  int iVar1;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *extraout_r1_01;
  Mutex *pMVar2;
  Mutex *extraout_r1_02;
  Mutex *extraout_r1_03;
  Mutex *extraout_r1_04;
  Mutex *extraout_r1_05;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  int in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  Autolock aAStack44 [4];
  undefined8 local_28;
  undefined4 local_20;
  int local_1c;
  
  piVar5 = *(int **)(DAT_00038244 + 0x380f0);
  local_1c = *piVar5;
  iVar4 = *(int *)(DAT_00038248 + 0x380fe);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    in_stack_ffffffc8 = DAT_0003824c + 0x38108;
    mm_camera_debug_log();
  }
  android::Mutex::Autolock::Autolock(aAStack44,(Mutex *)(this + 0x10));
  if (*(int *)(this + 0xc) == 0) {
    iVar1 = -1;
    pMVar2 = extraout_r1;
  }
  else {
    local_28 = *(undefined8 *)(DAT_00038254 + 0x3812e);
    local_20 = *(undefined4 *)(DAT_00038254 + 0x38136);
    if (*(int *)(this + 0x28) != 0) {
      systemTime();
      iVar3 = *(int *)(this + 0x2c);
      iVar1 = ns2ms(CONCAT44(in_stack_ffffffcc,in_stack_ffffffc8));
      param_1 = (iVar3 + param_1) - iVar1;
    }
    startTimer(this,param_1);
    pMVar2 = extraout_r1_00;
    if (this[0x24] != (QCameraPerfLock)0x0) {
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      powerHintInternal(this,*(power_hint_t *)(this + 0x20),false);
      pMVar2 = extraout_r1_01;
    }
    if ((*(code **)this == (code *)0x0) || (-1 < *(int *)(this + 0x18))) {
      iVar1 = -1;
    }
    else {
      uVar6 = (**(code **)this)(*(int *)(this + 0x18),param_1,&local_28,3);
      pMVar2 = (Mutex *)((ulonglong)uVar6 >> 0x20);
      iVar1 = (int)uVar6;
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log();
        pMVar2 = extraout_r1_04;
      }
      if (iVar1 < 0) {
        if (*(int *)(iVar4 + 0x20) != 0) {
          mm_camera_debug_log();
          pMVar2 = extraout_r1_05;
        }
      }
      else {
        *(int *)(this + 0x18) = iVar1;
      }
    }
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log();
      pMVar2 = extraout_r1_02;
    }
  }
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log();
    pMVar2 = extraout_r1_03;
  }
  android::Mutex::Autolock::_Autolock(aAStack44,pMVar2);
  if (*piVar5 == local_1c) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

