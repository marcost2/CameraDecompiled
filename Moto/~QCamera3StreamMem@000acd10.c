
/* qcamera::QCamera3StreamMem::~QCamera3StreamMem() */

void __thiscall qcamera::QCamera3StreamMem::_QCamera3StreamMem(QCamera3StreamMem *this)

{
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(this + 0xe28);
  *(int *)this = *(int *)(DAT_000acd70 + 0xacd22) + 8;
  pthread_mutex_lock(__mutex);
  QCamera3GrallocMemory::unregisterBuffers((QCamera3GrallocMemory *)(this + 0x614));
  pthread_mutex_unlock(__mutex);
  pthread_mutex_lock(__mutex);
  QCamera3HeapMemory::deallocate((QCamera3HeapMemory *)(this + 4));
  pthread_mutex_unlock(__mutex);
  pthread_mutex_destroy(__mutex);
  QCamera3HeapMemory::_QCamera3HeapMemory
            ((QCamera3HeapMemory *)(QCamera3GrallocMemory *)(this + 0x614));
  QCamera3HeapMemory::_QCamera3HeapMemory((QCamera3HeapMemory *)(this + 4));
  operator_delete(this);
  return;
}

