
/* qcamera::QCameraPicChannel::QCameraPicChannel(unsigned int, mm_camera_ops_t*) */

QCameraPicChannel * __thiscall
qcamera::QCameraPicChannel::QCameraPicChannel
          (QCameraPicChannel *this,uint param_1,mm_camera_ops_t *param_2)

{
  *(int *)this = *(int *)(DAT_000ccdf0 + 0xccdb0) + 8;
  android::VectorImpl::VectorImpl((VectorImpl *)(this + 0x14),4,7);
  *(int *)(this + 0x14) = *(int *)(DAT_000ccdf4 + 0xccdc6) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x30),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0xc) = 0x100;
  *(int *)this = *(int *)(DAT_000ccdf8 + 0xccde0) + 8;
  *(uint *)(this + 4) = param_1;
  *(mm_camera_ops_t **)(this + 8) = param_2;
  return this;
}

