
/* qcamera::QCamera3YUVChannel::~QCamera3YUVChannel() */

void __thiscall qcamera::QCamera3YUVChannel::_QCamera3YUVChannel(QCamera3YUVChannel *this)

{
  void *pvVar1;
  void *pvVar2;
  void **ppvVar3;
  void *pvVar4;
  
  *(int *)(this + 0x31a4) = *(int *)(DAT_000a1bfc + 0xa1b6a) + 8;
  *(int *)this = *(int *)(DAT_000a1c00 + 0xa1b74) + 8;
  pvVar2 = *(void **)(this + 0x31a8);
  ppvVar3 = (void **)(this + 0x31a8);
  pvVar1 = *(void **)((int)pvVar2 + 8);
  pvVar4 = pvVar2;
  if (*(void **)((int)pvVar2 + 8) != pvVar2) {
    do {
      pvVar4 = *(void **)((int)pvVar1 + 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *ppvVar3;
      }
      pvVar1 = pvVar4;
    } while (pvVar4 != pvVar2);
  }
  *(void **)((int)pvVar4 + 4) = pvVar4;
  *(void **)((int)*ppvVar3 + 8) = *ppvVar3;
  if (*ppvVar3 != (void *)0x0) {
    operator_delete__(*ppvVar3);
  }
  *(int *)(this + 0x319c) = *(int *)(DAT_000a1c04 + 0xa1bb2) + 8;
  pvVar2 = *(void **)(this + 0x31a0);
  ppvVar3 = (void **)(this + 0x31a0);
  pvVar1 = *(void **)((int)pvVar2 + 0x14);
  pvVar4 = pvVar2;
  if (*(void **)((int)pvVar2 + 0x14) != pvVar2) {
    do {
      pvVar4 = *(void **)((int)pvVar1 + 0x14);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *ppvVar3;
      }
      pvVar1 = pvVar4;
    } while (pvVar4 != pvVar2);
  }
  *(void **)((int)pvVar4 + 0x10) = pvVar4;
  *(void **)((int)*ppvVar3 + 0x14) = *ppvVar3;
  if (*ppvVar3 != (void *)0x0) {
    operator_delete__(*ppvVar3);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x3198));
  QCamera3ProcessingChannel::_QCamera3ProcessingChannel((QCamera3ProcessingChannel *)this);
  return;
}

