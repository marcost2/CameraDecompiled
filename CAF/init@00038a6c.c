
/* qcamera::QCameraQueue::init() */

void __thiscall qcamera::QCameraQueue::init(QCameraQueue *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  this[0x14] = (QCameraQueue)0x1;
  __ThumbV7PILongThunk_pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  return;
}

