
/* qcamera::QCameraQueue::QCameraQueue() */

QCameraQueue * __thiscall qcamera::QCameraQueue::QCameraQueue(QCameraQueue *this)

{
  *(int *)this = *(int *)(DAT_00038990 + 0x3896a) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x18),(pthread_mutexattr_t *)0x0);
  cam_list_init((cam_list *)(this + 4));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (QCameraQueue)0x1;
  return this;
}

