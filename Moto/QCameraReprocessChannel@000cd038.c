
/* qcamera::QCameraReprocessChannel::QCameraReprocessChannel(unsigned int, mm_camera_ops_t*) */

QCameraReprocessChannel * __thiscall
qcamera::QCameraReprocessChannel::QCameraReprocessChannel
          (QCameraReprocessChannel *this,uint param_1,mm_camera_ops_t *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(int *)this = *(int *)(DAT_000cd0b8 + 0xcd04c) + 8;
  android::VectorImpl::VectorImpl((VectorImpl *)(this + 0x14),4,7);
  *(int *)(this + 0x14) = *(int *)(DAT_000cd0bc + 0xcd062) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x30),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0xc) = 0;
  iVar1 = *(int *)(DAT_000cd0c0 + 0xcd078);
  *(undefined4 *)(this + 0x54) = 0;
  *(int *)(this + 0x58) = iVar1 + 8;
  *(int *)this = *(int *)(DAT_000cd0c4 + 0xcd084) + 8;
  *(uint *)(this + 4) = param_1;
  *(mm_camera_ops_t **)(this + 8) = param_2;
  pvVar2 = operator_new__(0x14);
  *(void **)(this + 0x5c) = pvVar2;
  *(void **)((int)pvVar2 + 0xc) = pvVar2;
  *(void **)((int)pvVar2 + 0x10) = pvVar2;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  this[0x60] = (QCameraReprocessChannel)0x0;
  return this;
}

