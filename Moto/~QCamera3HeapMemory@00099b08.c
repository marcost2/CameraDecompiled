
/* qcamera::QCamera3HeapMemory::~QCamera3HeapMemory() */

void __thiscall qcamera::QCamera3HeapMemory::_QCamera3HeapMemory(QCamera3HeapMemory *this)

{
  *(int *)this = *(int *)(DAT_00099b28 + 0x99b12) + 8;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x608));
  operator_delete(this);
  return;
}

