
/* qcamera::QCameraQueue::peek() */

undefined4 __thiscall qcamera::QCameraQueue::peek(QCameraQueue *this)

{
  pthread_mutex_t *__mutex;
  QCameraQueue *pQVar1;
  
  __mutex = (pthread_mutex_t *)(this + 0x18);
  pthread_mutex_lock(__mutex);
  if ((this[0x14] == (QCameraQueue)0x0) ||
     (pQVar1 = *(QCameraQueue **)(this + 4), pQVar1 == this + 4)) {
    pthread_mutex_unlock(__mutex);
  }
  else {
    pthread_mutex_unlock(__mutex);
    if (pQVar1 != (QCameraQueue *)0x0) {
      return *(undefined4 *)(pQVar1 + 8);
    }
  }
  return 0;
}

