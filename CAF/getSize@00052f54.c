
/* qcamera::QCamera3Memory::getSize(unsigned int) */

undefined4 __thiscall qcamera::QCamera3Memory::getSize(QCamera3Memory *this,uint param_1)

{
  Mutex *extraout_r1;
  Mutex *pMVar1;
  undefined4 uVar2;
  int *piVar3;
  Autolock aAStack24 [4];
  int local_14;
  
  piVar3 = *(int **)(DAT_00052f9c + 0x52f62);
  local_14 = *piVar3;
  android::Mutex::Autolock::Autolock(aAStack24,(Mutex *)(this + 0x608));
  pMVar1 = extraout_r1;
  if (param_1 < 0x40) {
    pMVar1 = *(Mutex **)(this + param_1 * 0x10 + 0x10);
    if (pMVar1 != (Mutex *)0x0) {
      uVar2 = *(undefined4 *)(this + param_1 * 0x10 + 0x14);
      goto LAB_00052f84;
    }
  }
  uVar2 = 0xffffffb5;
LAB_00052f84:
  android::Mutex::Autolock::_Autolock(aAStack24,pMVar1);
  if (*piVar3 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

