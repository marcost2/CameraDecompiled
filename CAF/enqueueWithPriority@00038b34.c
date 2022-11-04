
/* qcamera::QCameraQueue::enqueueWithPriority(void*) */

bool __thiscall qcamera::QCameraQueue::enqueueWithPriority(QCameraQueue *this,void *param_1)

{
  int **ppiVar1;
  QCameraQueue QVar2;
  int *__ptr;
  int *piVar3;
  bool bVar4;
  
  __ptr = (int *)malloc(0xc);
  if (__ptr == (int *)0x0) {
    if (*(int *)(*(int *)(DAT_00038bac + 0x38b78) + 0x3c) == 0) {
      bVar4 = false;
    }
    else {
      mm_camera_debug_log();
      bVar4 = false;
    }
  }
  else {
    __ptr[1] = 0;
    *__ptr = 0;
    __ptr[2] = (int)param_1;
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
    QVar2 = this[0x14];
    if (QVar2 == (QCameraQueue)0x0) {
      free(__ptr);
    }
    else {
      ppiVar1 = (int **)(this + 4);
      piVar3 = *ppiVar1;
      *ppiVar1 = __ptr;
      piVar3[1] = (int)__ptr;
      *__ptr = (int)piVar3;
      __ptr[1] = (int)ppiVar1;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    }
    bVar4 = QVar2 != (QCameraQueue)0x0;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  }
  return bVar4;
}

