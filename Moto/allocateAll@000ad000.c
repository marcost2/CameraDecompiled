
/* qcamera::QCamera3StreamMem::allocateAll(unsigned int) */

undefined4 __thiscall qcamera::QCamera3StreamMem::allocateAll(QCamera3StreamMem *this,uint param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  uVar1 = QCamera3HeapMemory::allocate((QCamera3HeapMemory *)(this + 4),param_1);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return uVar1;
}

