
/* qcamera::QCameraQueue::dequeue(bool) */

int __thiscall qcamera::QCameraQueue::dequeue(QCameraQueue *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  pthread_mutex_t *__mutex;
  int *__ptr;
  
  __mutex = (pthread_mutex_t *)(this + 0x18);
  pthread_mutex_lock(__mutex);
  if (this[0x14] != (QCameraQueue)0x0) {
    iVar1 = 8;
    if (param_1 != false) {
      iVar1 = 4;
    }
    __ptr = *(int **)(this + iVar1);
    if (__ptr != (int *)(this + 4)) {
      piVar2 = (int *)__ptr[1];
      *(int **)(*__ptr + 4) = piVar2;
      *piVar2 = *__ptr;
      *__ptr = (int)__ptr;
      __ptr[1] = (int)__ptr;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
      pthread_mutex_unlock(__mutex);
      if (__ptr == (int *)0x0) {
        return 0;
      }
      iVar1 = __ptr[2];
      free(__ptr);
      return iVar1;
    }
  }
  pthread_mutex_unlock(__mutex);
  return 0;
}

