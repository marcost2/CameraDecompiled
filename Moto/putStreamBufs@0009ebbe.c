
/* qcamera::QCamera3ProcessingChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3ProcessingChannel::putStreamBufs(QCamera3ProcessingChannel *this)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  void **ppvVar6;
  void *pvVar7;
  uint uVar8;
  
  QCamera3StreamMem::unregisterBuffers((QCamera3StreamMem *)(this + 0x6b0));
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x3164));
  pvVar4 = *(void **)(this + 0x3160);
  ppvVar6 = (void **)(this + 0x3160);
  pvVar5 = *(void **)((int)pvVar4 + 8);
  pvVar7 = pvVar4;
  if (*(void **)((int)pvVar4 + 8) != pvVar4) {
    do {
      pvVar7 = *(void **)((int)pvVar5 + 8);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
        pvVar4 = *ppvVar6;
      }
      pvVar5 = pvVar7;
    } while (pvVar7 != pvVar4);
  }
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)*ppvVar6 + 8) = *ppvVar6;
  iVar1 = QCamera3StreamMem::getCnt((QCamera3StreamMem *)(this + 0x232c));
  if (iVar1 != 0) {
    uVar8 = 0;
    do {
      pvVar5 = *ppvVar6;
      puVar2 = (uint *)operator_new(0xc);
      puVar2[2] = (uint)pvVar5;
      *puVar2 = uVar8;
      uVar8 = uVar8 + 1;
      puVar2[1] = *(uint *)((int)pvVar5 + 4);
      *(uint **)(*(int *)((int)pvVar5 + 4) + 8) = puVar2;
      *(uint **)((int)pvVar5 + 4) = puVar2;
      uVar3 = QCamera3StreamMem::getCnt((QCamera3StreamMem *)(this + 0x232c));
    } while (uVar8 < uVar3);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3164));
  return;
}

