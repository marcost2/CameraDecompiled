
/* qcamera::QCameraQueue::isEmpty() */

bool __thiscall qcamera::QCameraQueue::isEmpty(QCameraQueue *this)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  iVar1 = *(int *)(this + 0x10);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  return iVar1 < 1;
}

