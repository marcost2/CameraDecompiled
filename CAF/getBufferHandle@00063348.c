
/* qcamera::QCamera3StreamMem::getBufferHandle(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3StreamMem::getBufferHandle(QCamera3StreamMem *this,uint param_1)

{
  int *piVar1;
  undefined8 uVar2;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar1 = *(int **)(DAT_0006338c + 0x63356);
  local_18 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0xe28));
  uVar2 = QCamera3GrallocMemory::getBufferHandle((QCamera3GrallocMemory *)(this + 0x614),param_1);
  android::Mutex::Autolock::_Autolock(aAStack28,(Mutex *)((ulonglong)uVar2 >> 0x20));
  if (*piVar1 == local_18) {
    return (int)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

