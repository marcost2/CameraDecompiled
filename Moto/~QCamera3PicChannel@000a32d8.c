
/* qcamera::QCamera3PicChannel::~QCamera3PicChannel() */

void __thiscall qcamera::QCamera3PicChannel::_QCamera3PicChannel(QCamera3PicChannel *this)

{
  void *pvVar1;
  void *pvVar2;
  void **ppvVar3;
  void *pvVar4;
  
  *(int *)(this + 0x3198) = *(int *)(DAT_000a333c + 0xa32e6) + 8;
  *(int *)this = *(int *)(DAT_000a3340 + 0xa32f0) + 8;
  pvVar2 = *(void **)(this + 0x319c);
  ppvVar3 = (void **)(this + 0x319c);
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
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x3194));
  pvVar1 = (void *)QCamera3ProcessingChannel::_QCamera3ProcessingChannel
                             ((QCamera3ProcessingChannel *)this);
  operator_delete(pvVar1);
  return;
}

