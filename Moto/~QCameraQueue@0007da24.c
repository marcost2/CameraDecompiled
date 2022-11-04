
/* qcamera::QCameraQueue::~QCameraQueue() */

void __thiscall qcamera::QCameraQueue::_QCameraQueue(QCameraQueue *this)

{
  *(int *)this = *(int *)(DAT_0007da50 + 0x7da32) + 8;
  flush(this,true);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x18));
  operator_delete(this);
  return;
}

