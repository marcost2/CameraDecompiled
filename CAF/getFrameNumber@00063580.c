
/* qcamera::QCamera3StreamMem::getFrameNumber(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3StreamMem::getFrameNumber(QCamera3StreamMem *this,uint param_1)

{
  int *piVar1;
  undefined8 uVar2;
  Autolock aAStack24 [4];
  int local_14;
  
  piVar1 = *(int **)(DAT_000635d4 + 0x6358e);
  local_14 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack24,(Mutex *)(this + 0xe28));
  if (param_1 < *(uint *)(this + 0xe24)) {
    uVar2 = QCamera3HeapMemory::getFrameNumber((QCamera3HeapMemory *)(this + 4),param_1);
  }
  else {
    uVar2 = QCamera3GrallocMemory::getFrameNumber((QCamera3GrallocMemory *)(this + 0x614),param_1);
  }
  android::Mutex::Autolock::_Autolock(aAStack24,(Mutex *)((ulonglong)uVar2 >> 0x20));
  if (*piVar1 == local_14) {
    return (int)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

