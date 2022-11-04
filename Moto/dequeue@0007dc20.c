
/* qcamera::QCameraQueue::dequeue(bool (*)(void*, void*, void*), void*) */

undefined4 __thiscall
qcamera::QCameraQueue::dequeue(QCameraQueue *this,FuncDef59 *param_1,void *param_2)

{
  void **__ptr;
  bool bVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  pthread_mutex_t *__mutex;
  undefined4 uVar4;
  void *unaff_r10;
  
  uVar4 = 0;
  if (param_1 != (FuncDef59 *)0x0) {
    unaff_r10 = param_2;
  }
  if (param_1 != (FuncDef59 *)0x0 && param_2 != (void *)0x0) {
    __mutex = (pthread_mutex_t *)(this + 0x18);
    pthread_mutex_lock(__mutex);
    if (this[0x14] == (QCameraQueue)0x0) {
LAB_0007dc6a:
      pthread_mutex_unlock(__mutex);
      uVar4 = 0;
    }
    else {
      ppvVar3 = (void **)*(void **)(this + 4);
      do {
        __ptr = ppvVar3;
        if (__ptr == (void **)(this + 4)) goto LAB_0007dc6a;
        ppvVar3 = (void **)*__ptr;
      } while ((__ptr == (void **)0x0) ||
              (bVar1 = (*param_1)(__ptr[2],*(void **)(this + 0x20),unaff_r10), bVar1 == false));
      puVar2 = (undefined4 *)__ptr[1];
      *(undefined4 **)((int)*__ptr + 4) = puVar2;
      *puVar2 = *__ptr;
      *__ptr = __ptr;
      __ptr[1] = __ptr;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
      uVar4 = __ptr[2];
      free(__ptr);
      pthread_mutex_unlock(__mutex);
    }
  }
  return uVar4;
}

