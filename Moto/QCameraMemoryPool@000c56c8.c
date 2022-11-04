
/* qcamera::QCameraMemoryPool::QCameraMemoryPool() */

QCameraMemoryPool * __thiscall
qcamera::QCameraMemoryPool::QCameraMemoryPool(QCameraMemoryPool *this)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000c5798 + 0xc56d2) + 8;
  *(int *)this = *(int *)(DAT_000c579c + 0xc56dc) + 8;
  *(int *)(this + 4) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 8) = pvVar1;
  *(int *)(this + 0xc) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 0x10) = pvVar1;
  *(int *)(this + 0x14) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 0x18) = pvVar1;
  *(int *)(this + 0x1c) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 0x20) = pvVar1;
  *(int *)(this + 0x24) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 0x28) = pvVar1;
  *(int *)(this + 0x2c) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 0x30) = pvVar1;
  *(int *)(this + 0x34) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 0x38) = pvVar1;
  *(int *)(this + 0x3c) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 0x40) = pvVar1;
  *(int *)(this + 0x44) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 0x48) = pvVar1;
  *(int *)(this + 0x4c) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 0x50) = pvVar1;
  *(int *)(this + 0x54) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  *(void **)(this + 0x58) = pvVar1;
  *(int *)(this + 0x5c) = iVar2;
  pvVar1 = operator_new__(0x20);
  *(void **)(this + 0x60) = pvVar1;
  *(void **)((int)pvVar1 + 0x18) = pvVar1;
  *(void **)((int)pvVar1 + 0x1c) = pvVar1;
  pthread_mutex_init((pthread_mutex_t *)(this + 100),(pthread_mutexattr_t *)0x0);
  return this;
}

