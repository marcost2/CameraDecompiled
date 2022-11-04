
/* qcamera::QCameraQueue::QCameraQueue(void (*)(void*, void*), void*) */

QCameraQueue * __thiscall qcamera::QCameraQueue::QCameraQueue(QCameraQueue *this)

{
  undefined4 in_r1;
  undefined4 in_r2;
  
  *(int *)this = *(int *)(DAT_000389d4 + 0x389ac) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x18),(pthread_mutexattr_t *)0x0);
  cam_list_init((cam_list *)(this + 4));
  *(undefined4 *)(this + 0x1c) = in_r1;
  *(undefined4 *)(this + 0x20) = in_r2;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (QCameraQueue)0x1;
  return this;
}

