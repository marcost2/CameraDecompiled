
/* qcamera::QCamera3StreamMem::getBufferIndex(unsigned int) */

uint __thiscall qcamera::QCamera3StreamMem::getBufferIndex(QCamera3StreamMem *this,uint param_1)

{
  uint uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  uVar1 = QCamera3GrallocMemory::getBufferIndex((QCamera3GrallocMemory *)(this + 0x614),param_1);
  if (0x7fffffff < uVar1) {
    uVar1 = QCamera3HeapMemory::getBufferIndex((QCamera3HeapMemory *)(this + 4),param_1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return uVar1;
}

