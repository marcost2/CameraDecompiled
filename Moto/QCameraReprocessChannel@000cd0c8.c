
/* qcamera::QCameraReprocessChannel::QCameraReprocessChannel() */

QCameraReprocessChannel * __thiscall
qcamera::QCameraReprocessChannel::QCameraReprocessChannel(QCameraReprocessChannel *this)

{
  int iVar1;
  void *pvVar2;
  
  *(int *)this = *(int *)(DAT_000cd12c + 0xcd0d6) + 8;
  android::VectorImpl::VectorImpl((VectorImpl *)(this + 0x14),4,7);
  *(int *)(this + 0x14) = *(int *)(DAT_000cd130 + 0xcd0ec) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x30),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x10) = 0;
  this[0xc] = (QCameraReprocessChannel)0x0;
  iVar1 = *(int *)(DAT_000cd134 + 0xcd102);
  *(undefined4 *)(this + 0x54) = 0;
  *(int *)(this + 0x58) = iVar1 + 8;
  *(int *)this = *(int *)(DAT_000cd138 + 0xcd10e) + 8;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  pvVar2 = operator_new__(0x14);
  *(void **)(this + 0x5c) = pvVar2;
  *(void **)((int)pvVar2 + 0xc) = pvVar2;
  *(void **)((int)pvVar2 + 0x10) = pvVar2;
  this[0x60] = (QCameraReprocessChannel)0x0;
  return this;
}

