
/* qcamera::QCameraMemoryPool::~QCameraMemoryPool() */

void __thiscall qcamera::QCameraMemoryPool::_QCameraMemoryPool(QCameraMemoryPool *this)

{
  undefined *puVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  pthread_mutex_t *ppVar5;
  void *pvVar6;
  
  *(int *)this = *(int *)(DAT_000c59a4 + 0xc593c) + 8;
  clear(this);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 100));
  iVar2 = *(int *)(DAT_000c59a8 + 0xc595a);
  ppVar5 = (pthread_mutex_t *)(this + 100);
  do {
    puVar1 = &ppVar5[-1].field_0x10;
    *(int *)puVar1 = iVar2 + 8;
    pvVar4 = *(void **)&ppVar5[-1].field_0x14;
    pvVar3 = *(void **)((int)pvVar4 + 0x1c);
    pvVar6 = pvVar4;
    if (*(void **)((int)pvVar4 + 0x1c) != pvVar4) {
      do {
        pvVar6 = *(void **)((int)pvVar3 + 0x1c);
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
          pvVar4 = *(void **)&ppVar5[-1].field_0x14;
        }
        pvVar3 = pvVar6;
      } while (pvVar6 != pvVar4);
    }
    *(void **)((int)pvVar6 + 0x18) = pvVar6;
    *(int *)(*(int *)&ppVar5[-1].field_0x14 + 0x1c) = *(int *)&ppVar5[-1].field_0x14;
    if (*(void **)&ppVar5[-1].field_0x14 != (void *)0x0) {
      operator_delete__(*(void **)&ppVar5[-1].field_0x14);
    }
    ppVar5 = (pthread_mutex_t *)puVar1;
  } while ((QCameraMemoryPool *)puVar1 != this + 4);
  operator_delete(this);
  return;
}

