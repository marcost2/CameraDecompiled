
/* qcamera::QCamera3HeapMemory::getBufferIndex(unsigned int) */

uint __thiscall qcamera::QCamera3HeapMemory::getBufferIndex(QCamera3HeapMemory *this,uint param_1)

{
  int *extraout_r1;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar3 = *(int **)(DAT_00053598 + 0x5354a);
  local_18 = *piVar3;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0x608));
  piVar1 = extraout_r1;
  if (*(int *)(this + 4) != 0) {
    piVar1 = (int *)(this + 0x10);
    uVar2 = 0;
    do {
      if ((*piVar1 != 0) && (*(uint *)(this + uVar2 * 4 + 0x508) == param_1)) goto LAB_00053580;
      piVar1 = piVar1 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 4));
  }
  uVar2 = 0xffffffff;
LAB_00053580:
  android::Mutex::Autolock::_Autolock(aAStack28,(Mutex *)piVar1);
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

