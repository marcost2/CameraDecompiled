
/* qcamera::QCamera3GrallocMemory::getFrameNumber(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::getFrameNumber(QCamera3GrallocMemory *this,uint param_1)

{
  int iVar1;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *pMVar2;
  Mutex *extraout_r1_01;
  undefined4 uVar3;
  int *piVar4;
  Autolock aAStack24 [4];
  int local_14;
  
  piVar4 = *(int **)(DAT_00053fdc + 0x53f22);
  local_14 = *piVar4;
  android::Mutex::Autolock::Autolock(aAStack24,(Mutex *)(this + 0x608));
  pMVar2 = extraout_r1;
  if (param_1 < 0x40) {
    if (param_1 < *(uint *)(this + 0x80c)) {
      pMVar2 = *(Mutex **)(*(int *)(DAT_00053fec + 0x53f68) + 0x20);
      if (pMVar2 == (Mutex *)0x0) {
        uVar3 = 0xffffffb5;
      }
      else {
        mm_camera_debug_log();
        uVar3 = 0xffffffb5;
        pMVar2 = extraout_r1_01;
      }
      goto LAB_00053fa2;
    }
    if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
      uVar3 = *(undefined4 *)(this + param_1 * 4 + 0x508);
      goto LAB_00053fa2;
    }
    iVar1 = *(int *)(*(int *)(DAT_00053ff8 + 0x53fbc) + 0x20);
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_00053fe0 + 0x53f3a) + 0x20);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
    pMVar2 = extraout_r1_00;
  }
  uVar3 = 0xffffffff;
LAB_00053fa2:
  android::Mutex::Autolock::_Autolock(aAStack24,pMVar2);
  if (*piVar4 == local_14) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

