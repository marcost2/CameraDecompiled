
/* qcamera::QCamera3StreamMem::QCamera3StreamMem(unsigned int, bool) */

QCamera3StreamMem * __thiscall
qcamera::QCamera3StreamMem::QCamera3StreamMem(QCamera3StreamMem *this,uint param_1,bool param_2)

{
  *(int *)this = *(int *)(DAT_000accb0 + 0xacc86) + 8;
  QCamera3HeapMemory::QCamera3HeapMemory((QCamera3HeapMemory *)(this + 4),param_1);
  QCamera3GrallocMemory::QCamera3GrallocMemory((QCamera3GrallocMemory *)(this + 0x614),param_1);
  *(uint *)(this + 0xe24) = param_1;
  pthread_mutex_init((pthread_mutex_t *)(this + 0xe28),(pthread_mutexattr_t *)0x0);
  this[0xe2c] = (QCamera3StreamMem)param_2;
  return this;
}

