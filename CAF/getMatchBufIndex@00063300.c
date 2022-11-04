
/* qcamera::QCamera3StreamMem::getMatchBufIndex(void*) */

undefined4 qcamera::QCamera3StreamMem::getMatchBufIndex(void *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar1 = *(int **)(DAT_00063344 + 0x6330e);
  local_18 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)((int)param_1 + 0xe28));
  uVar2 = QCamera3GrallocMemory::getMatchBufIndex((void *)((int)param_1 + 0x614));
  android::Mutex::Autolock::_Autolock(aAStack28,(Mutex *)((ulonglong)uVar2 >> 0x20));
  if (*piVar1 == local_18) {
    return (int)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

