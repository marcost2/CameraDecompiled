
/* qcamera::QCameraQueue::~QCameraQueue() */

QCameraQueue * __thiscall qcamera::QCameraQueue::_QCameraQueue(QCameraQueue *this)

{
  *(int *)this = *(int *)(DAT_0007d9ac + 0x7d996) + 8;
  flush(this,true);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x18));
  return this;
}

