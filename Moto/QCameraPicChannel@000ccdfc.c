
/* qcamera::QCameraPicChannel::QCameraPicChannel() */

QCameraPicChannel * __thiscall
qcamera::QCameraPicChannel::QCameraPicChannel(QCameraPicChannel *this)

{
  *(int *)this = *(int *)(DAT_000cce48 + 0xcce0a) + 8;
  android::VectorImpl::VectorImpl((VectorImpl *)(this + 0x14),4,7);
  *(int *)(this + 0x14) = *(int *)(DAT_000cce4c + 0xcce20) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x30),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0xc) = 0x100;
  *(int *)this = *(int *)(DAT_000cce50 + 0xcce3a) + 8;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return this;
}

