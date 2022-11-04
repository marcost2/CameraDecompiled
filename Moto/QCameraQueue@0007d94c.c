
/* qcamera::QCameraQueue::QCameraQueue(void (*)(void*, void*), void*) */

QCameraQueue * __thiscall
qcamera::QCameraQueue::QCameraQueue(QCameraQueue *this,FuncDef58 *param_1,void *param_2)

{
  *(int *)this = *(int *)(DAT_0007d984 + 0x7d960) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x18),(pthread_mutexattr_t *)0x0);
  *(FuncDef58 **)(this + 0x1c) = param_1;
  *(void **)(this + 0x20) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  *(QCameraQueue **)(this + 4) = this + 4;
  *(QCameraQueue **)(this + 8) = this + 4;
  this[0x14] = (QCameraQueue)0x1;
  return this;
}

