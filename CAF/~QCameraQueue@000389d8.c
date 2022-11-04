
/* qcamera::QCameraQueue::~QCameraQueue() */

QCameraQueue * __thiscall qcamera::QCameraQueue::_QCameraQueue(QCameraQueue *this)

{
  *(int *)this = *(int *)(DAT_000389fc + 0x389e2) + 8;
  flush(this);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x18));
  return this;
}

