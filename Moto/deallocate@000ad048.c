
/* qcamera::QCamera3StreamMem::deallocate() */

void __thiscall qcamera::QCamera3StreamMem::deallocate(QCamera3StreamMem *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  QCamera3HeapMemory::deallocate((QCamera3HeapMemory *)(this + 4));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return;
}

