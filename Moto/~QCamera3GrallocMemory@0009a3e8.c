
/* qcamera::QCamera3GrallocMemory::~QCamera3GrallocMemory() */

void __thiscall qcamera::QCamera3GrallocMemory::_QCamera3GrallocMemory(QCamera3GrallocMemory *this)

{
  *(int *)this = *(int *)(DAT_0009a408 + 0x9a3f2) + 8;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x608));
  operator_delete(this);
  return;
}

