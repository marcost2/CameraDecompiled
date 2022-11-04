
/* qcamera::QCamera3StreamMem::getOldestFrameNumber(unsigned int&) */

int __thiscall
qcamera::QCamera3StreamMem::getOldestFrameNumber(QCamera3StreamMem *this,uint *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint local_24;
  int local_20;
  
  piVar4 = *(int **)(DAT_000ad138 + 0xad0bc);
  local_20 = *piVar4;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  iVar2 = QCamera3Memory::getCnt((QCamera3Memory *)(this + 4));
  bVar1 = iVar2 == 0;
  if (bVar1) {
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = QCamera3HeapMemory::getOldestFrameNumber
                      ((QCamera3HeapMemory *)(QCamera3Memory *)(this + 4),param_1);
  }
  iVar3 = QCamera3Memory::getCnt((QCamera3Memory *)(this + 0x614));
  if (iVar3 == 0) {
    if (bVar1) {
      iVar2 = -1;
    }
  }
  else {
    iVar3 = QCamera3GrallocMemory::getOldestFrameNumber
                      ((QCamera3GrallocMemory *)(QCamera3Memory *)(this + 0x614),&local_24);
    if (!(bool)(~bVar1 & iVar2 <= iVar3)) {
      *param_1 = local_24;
      iVar2 = iVar3;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  if (*piVar4 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

