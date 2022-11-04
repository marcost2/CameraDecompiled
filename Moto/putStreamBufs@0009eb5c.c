
/* qcamera::QCamera3YUVChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3YUVChannel::putStreamBufs(QCamera3YUVChannel *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  QCamera3ProcessingChannel::putStreamBufs((QCamera3ProcessingChannel *)this);
  QCamera3StreamMem::deallocate((QCamera3StreamMem *)(this + 0x6b0));
  pvVar2 = *(void **)(this + 0x31a8);
  pvVar1 = *(void **)((int)pvVar2 + 8);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 8) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *(void **)(this + 0x31a8);
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 4) = pvVar3;
  pvVar1 = *(void **)(this + 0x31a8);
  *(void **)((int)pvVar1 + 8) = pvVar1;
  pvVar2 = *(void **)(this + 0x31a0);
  pvVar1 = *(void **)((int)pvVar2 + 0x14);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 0x14) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 0x14);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *(void **)(this + 0x31a0);
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 0x10) = pvVar3;
  pvVar1 = *(void **)(this + 0x31a0);
  *(void **)((int)pvVar1 + 0x14) = pvVar1;
  return;
}

