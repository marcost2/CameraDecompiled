
/* qcamera::QCamera3PicChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3PicChannel::putStreamBufs(QCamera3PicChannel *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  QCamera3ProcessingChannel::putStreamBufs((QCamera3ProcessingChannel *)this);
  QCamera3StreamMem::deallocate(*(QCamera3StreamMem **)(this + 0x3190));
  if (*(int **)(this + 0x3190) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3190) + 4))();
  }
  *(undefined4 *)(this + 0x3190) = 0;
  pvVar2 = *(void **)(this + 0x319c);
  pvVar1 = *(void **)((int)pvVar2 + 8);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 8) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *(void **)(this + 0x319c);
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 4) = pvVar3;
  pvVar1 = *(void **)(this + 0x319c);
  *(void **)((int)pvVar1 + 8) = pvVar1;
  return;
}

