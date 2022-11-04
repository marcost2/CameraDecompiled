
/* qcamera::QCamera3Memory::getCnt() */

undefined4 __thiscall qcamera::QCamera3Memory::getCnt(QCamera3Memory *this)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  Autolock aAStack24 [4];
  int local_14;
  
  piVar2 = *(int **)(DAT_00052fd4 + 0x52fac);
  local_14 = *piVar2;
  uVar3 = android::Mutex::Autolock::Autolock(aAStack24,(Mutex *)(this + 0x608));
  uVar1 = *(undefined4 *)(this + 4);
  android::Mutex::Autolock::_Autolock((Autolock *)uVar3,(Mutex *)((ulonglong)uVar3 >> 0x20));
  if (*piVar2 == local_14) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

