
/* qcamera::QCamera3ReprocessChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3ReprocessChannel::putStreamBufs(QCamera3ReprocessChannel *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (*(int *)(this + 0xd4) != 1) {
    QCamera3StreamMem::unregisterBuffers((QCamera3StreamMem *)(this + 0x108));
    return;
  }
  QCamera3StreamMem::deallocate(*(QCamera3StreamMem **)(this + 0x100));
  if (*(int **)(this + 0x100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x100) + 4))();
  }
  *(undefined4 *)(this + 0x100) = 0;
  pvVar2 = *(void **)(this + 200);
  pvVar1 = *(void **)((int)pvVar2 + 8);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 8) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *(void **)(this + 200);
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 4) = pvVar3;
  *(int *)(*(int *)(this + 200) + 8) = *(int *)(this + 200);
  return;
}

