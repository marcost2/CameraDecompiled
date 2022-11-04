
/* qcamera::QCamera3StreamMem::getOldestFrameNumber(unsigned int&) */

int __thiscall
qcamera::QCamera3StreamMem::getOldestFrameNumber(QCamera3StreamMem *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  Mutex *pMVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  Mutex *local_24;
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar5 = *(int **)(DAT_0006357c + 0x63500);
  local_1c = *piVar5;
  android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(this + 0xe28));
  iVar1 = QCamera3Memory::getCnt((QCamera3Memory *)(this + 4));
  if (iVar1 == 0) {
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = QCamera3HeapMemory::getOldestFrameNumber
                      ((QCamera3HeapMemory *)(QCamera3Memory *)(this + 4),param_1);
  }
  uVar4 = (uint)(iVar1 == 0);
  uVar6 = QCamera3Memory::getCnt((QCamera3Memory *)(this + 0x614));
  pMVar3 = (Mutex *)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 == 0) {
    if (uVar4 != 0) {
      iVar2 = -1;
    }
  }
  else {
    iVar1 = QCamera3GrallocMemory::getOldestFrameNumber
                      ((QCamera3GrallocMemory *)(QCamera3Memory *)(this + 0x614),(uint *)&local_24);
    pMVar3 = (Mutex *)(uint)(iVar2 <= iVar1);
    if ((~uVar4 & (uint)(Mutex *)(uint)(iVar2 <= iVar1)) == 0) {
      *param_1 = (uint)local_24;
      pMVar3 = local_24;
      iVar2 = iVar1;
    }
  }
  android::Mutex::Autolock::_Autolock(aAStack32,pMVar3);
  if (*piVar5 == local_1c) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

