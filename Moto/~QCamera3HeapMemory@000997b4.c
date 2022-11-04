
/* qcamera::QCamera3HeapMemory::~QCamera3HeapMemory() */

QCamera3HeapMemory * __thiscall
qcamera::QCamera3HeapMemory::_QCamera3HeapMemory(QCamera3HeapMemory *this)

{
  *(int *)this = *(int *)(DAT_000997d0 + 0x997be) + 8;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x608));
  return this;
}

