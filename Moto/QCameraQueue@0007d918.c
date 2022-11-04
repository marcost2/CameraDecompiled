
/* qcamera::QCameraQueue::QCameraQueue() */

QCameraQueue * __thiscall qcamera::QCameraQueue::QCameraQueue(QCameraQueue *this)

{
  *(int *)this = *(int *)(DAT_0007d948 + 0x7d926) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x18),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(QCameraQueue **)(this + 4) = this + 4;
  *(QCameraQueue **)(this + 8) = this + 4;
  this[0x14] = (QCameraQueue)0x1;
  return this;
}

