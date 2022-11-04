
/* qcamera::QCameraReprocessChannel::~QCameraReprocessChannel() */

void __thiscall
qcamera::QCameraReprocessChannel::_QCameraReprocessChannel(QCameraReprocessChannel *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(int *)(this + 0x58) = *(int *)(DAT_000cd220 + 0xcd1da) + 8;
  *(int *)this = *(int *)(DAT_000cd224 + 0xcd1e4) + 8;
  pvVar2 = *(void **)(this + 0x5c);
  pvVar1 = *(void **)((int)pvVar2 + 0x10);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 0x10) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 0x10);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *(void **)(this + 0x5c);
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 0xc) = pvVar3;
  *(int *)(*(int *)(this + 0x5c) + 0x10) = *(int *)(this + 0x5c);
  if (*(void **)(this + 0x5c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x5c));
  }
  pvVar1 = (void *)QCameraVideoChannel::_QCameraVideoChannel((QCameraVideoChannel *)this);
  operator_delete(pvVar1);
  return;
}

