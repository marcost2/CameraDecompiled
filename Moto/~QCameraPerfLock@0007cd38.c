
/* qcamera::QCameraPerfLock::~QCameraPerfLock() */

QCameraPerfLock * __thiscall qcamera::QCameraPerfLock::_QCameraPerfLock(QCameraPerfLock *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  lock_deinit(this);
  *(int *)(this + 0x38) = *(int *)(DAT_0007cd80 + 0x7cd46) + 8;
  pvVar2 = *(void **)(this + 0x3c);
  pvVar1 = *(void **)((int)pvVar2 + 8);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 8) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *(void **)(this + 0x3c);
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 4) = pvVar3;
  *(int *)(*(int *)(this + 0x3c) + 8) = *(int *)(this + 0x3c);
  if (*(void **)(this + 0x3c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x3c));
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x10));
  return this;
}

