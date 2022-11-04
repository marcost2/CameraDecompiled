
/* qcamera::QCamera3StreamMem::getPtr(unsigned int) */

undefined4 qcamera::QCamera3StreamMem::getPtr(uint param_1)

{
  uint in_r1;
  int *piVar1;
  undefined8 uVar2;
  Autolock aAStack24 [4];
  int local_14;
  
  piVar1 = *(int **)(DAT_0006320c + 0x631c6);
  local_14 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack24,(Mutex *)(param_1 + 0xe28));
  if (in_r1 < *(uint *)(param_1 + 0xe24)) {
    uVar2 = QCamera3HeapMemory::getPtr(param_1 + 4);
  }
  else {
    uVar2 = QCamera3GrallocMemory::getPtr(param_1 + 0x614);
  }
  android::Mutex::Autolock::_Autolock(aAStack24,(Mutex *)((ulonglong)uVar2 >> 0x20));
  if (*piVar1 == local_14) {
    return (int)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

