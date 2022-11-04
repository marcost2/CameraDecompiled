
/* qcamera::QCamera3StreamMem::markFrameNumber(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3StreamMem::markFrameNumber(QCamera3StreamMem *this,uint param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar1 = *(int **)(DAT_000634ec + 0x634a4);
  local_18 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0xe28));
  if (param_1 < *(uint *)(this + 0xe24)) {
    uVar2 = QCamera3HeapMemory::markFrameNumber((QCamera3HeapMemory *)(this + 4),param_1,param_2);
  }
  else {
    uVar2 = QCamera3GrallocMemory::markFrameNumber
                      ((QCamera3GrallocMemory *)(this + 0x614),param_1,param_2);
  }
  android::Mutex::Autolock::_Autolock(aAStack28,(Mutex *)((ulonglong)uVar2 >> 0x20));
  if (*piVar1 == local_18) {
    return (int)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

