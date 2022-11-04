
/* qcamera::QCamera3StreamMem::getCnt() */

int __thiscall qcamera::QCamera3StreamMem::getCnt(QCamera3StreamMem *this)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar2 = *(int **)(DAT_00063008 + 0x62fcc);
  local_18 = *piVar2;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0xe28));
  iVar1 = QCamera3Memory::getCnt((QCamera3Memory *)(this + 4));
  uVar3 = QCamera3Memory::getCnt((QCamera3Memory *)(this + 0x614));
  android::Mutex::Autolock::_Autolock(aAStack28,(Mutex *)((ulonglong)uVar3 >> 0x20));
  if (*piVar2 == local_18) {
    return (int)uVar3 + iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

