
/* qcamera::QCamera3StreamMem::getCnt() */

int __thiscall qcamera::QCamera3StreamMem::getCnt(QCamera3StreamMem *this)

{
  int iVar1;
  int iVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  iVar1 = QCamera3Memory::getCnt((QCamera3Memory *)(this + 4));
  iVar2 = QCamera3Memory::getCnt((QCamera3Memory *)(this + 0x614));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return iVar2 + iVar1;
}

