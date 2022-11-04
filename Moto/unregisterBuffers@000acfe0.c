
/* qcamera::QCamera3StreamMem::unregisterBuffers() */

void __thiscall qcamera::QCamera3StreamMem::unregisterBuffers(QCamera3StreamMem *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  QCamera3GrallocMemory::unregisterBuffers((QCamera3GrallocMemory *)(this + 0x614));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return;
}

