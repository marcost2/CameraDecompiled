
/* qcamera::QCameraQueue::flushNodes(bool (*)(void*, void*, void*), void*) */

void __thiscall
qcamera::QCameraQueue::flushNodes(QCameraQueue *this,FuncDef61 *param_1,void *param_2)

{
  void **__ptr;
  bool bVar1;
  void *__ptr_00;
  undefined4 *puVar2;
  void **ppvVar3;
  
  if (param_1 != (FuncDef61 *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
    if (this[0x14] != (QCameraQueue)0x0) {
      ppvVar3 = (void **)*(void **)(this + 4);
      while (__ptr = ppvVar3, __ptr != (void **)(this + 4)) {
        ppvVar3 = (void **)*__ptr;
        bVar1 = (*param_1)(__ptr[2],*(void **)(this + 0x20),param_2);
        if (bVar1 != false) {
          puVar2 = (undefined4 *)__ptr[1];
          *(undefined4 **)((int)*__ptr + 4) = puVar2;
          *puVar2 = *__ptr;
          *__ptr = __ptr;
          __ptr[1] = __ptr;
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
          __ptr_00 = __ptr[2];
          if (__ptr_00 != (void *)0x0) {
            if (*(code **)(this + 0x1c) != (code *)0x0) {
              (**(code **)(this + 0x1c))(__ptr_00,*(undefined4 *)(this + 0x20));
              __ptr_00 = __ptr[2];
            }
            free(__ptr_00);
          }
          free(__ptr);
        }
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
    return;
  }
  return;
}

