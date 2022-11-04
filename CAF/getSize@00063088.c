
/* qcamera::QCamera3StreamMem::getSize(unsigned int) */

undefined4 __thiscall qcamera::QCamera3StreamMem::getSize(QCamera3StreamMem *this,uint param_1)

{
  QCamera3Memory *this_00;
  int *piVar1;
  undefined8 uVar2;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar1 = *(int **)(DAT_000630d4 + 0x63096);
  local_18 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0xe28));
  this_00 = (QCamera3Memory *)(this + 0x614);
  if (param_1 < *(uint *)(this + 0xe24)) {
    this_00 = (QCamera3Memory *)(this + 4);
  }
  uVar2 = QCamera3Memory::getSize(this_00,param_1);
  android::Mutex::Autolock::_Autolock(aAStack28,(Mutex *)((ulonglong)uVar2 >> 0x20));
  if (*piVar1 == local_18) {
    return (int)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

