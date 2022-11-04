
/* qcamera::QCameraVideoChannel::QCameraVideoChannel() */

QCameraVideoChannel * __thiscall
qcamera::QCameraVideoChannel::QCameraVideoChannel(QCameraVideoChannel *this)

{
  *(int *)this = *(int *)(DAT_000ccf80 + 0xccf46) + 8;
  android::VectorImpl::VectorImpl((VectorImpl *)(this + 0x14),4,7);
  *(int *)(this + 0x14) = *(int *)(DAT_000ccf84 + 0xccf5c) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x30),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x10) = 0;
  this[0xc] = (QCameraVideoChannel)0x0;
  *(int *)this = *(int *)(DAT_000ccf88 + 0xccf72) + 8;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return this;
}

