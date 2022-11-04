
/* qcamera::QCameraQueue::flush(bool) */

void __thiscall qcamera::QCameraQueue::flush(QCameraQueue *this,bool param_1)

{
  void **__ptr;
  undefined4 *puVar1;
  void **ppvVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  if (this[0x14] != (QCameraQueue)0x0) {
    __ptr = (void **)*(void **)(this + 4);
    while (__ptr != (void **)(this + 4)) {
      ppvVar2 = (void **)*__ptr;
      puVar1 = (undefined4 *)__ptr[1];
      ppvVar2[1] = puVar1;
      *puVar1 = *__ptr;
      *__ptr = __ptr;
      __ptr[1] = __ptr;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
      if (__ptr[2] != (void *)0x0) {
        if (*(code **)(this + 0x1c) != (code *)0x0) {
          (**(code **)(this + 0x1c))(__ptr[2],*(undefined4 *)(this + 0x20));
        }
        if (param_1 != false) {
          free(__ptr[2]);
          __ptr[2] = (void *)0x0;
        }
      }
      free(__ptr);
      __ptr = ppvVar2;
    }
    this[0x14] = (QCameraQueue)0x0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  return;
}

