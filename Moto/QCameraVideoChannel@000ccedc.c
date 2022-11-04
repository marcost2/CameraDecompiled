
/* qcamera::QCameraVideoChannel::QCameraVideoChannel(unsigned int, mm_camera_ops_t*) */

QCameraVideoChannel * __thiscall
qcamera::QCameraVideoChannel::QCameraVideoChannel
          (QCameraVideoChannel *this,uint param_1,mm_camera_ops_t *param_2)

{
  *(int *)this = *(int *)(DAT_000ccf2c + 0xccef0) + 8;
  android::VectorImpl::VectorImpl((VectorImpl *)(this + 0x14),4,7);
  *(int *)(this + 0x14) = *(int *)(DAT_000ccf30 + 0xccf06) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x30),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0xc) = 0;
  *(int *)this = *(int *)(DAT_000ccf34 + 0xccf1c) + 8;
  *(uint *)(this + 4) = param_1;
  *(mm_camera_ops_t **)(this + 8) = param_2;
  return this;
}

