
/* qcamera::QCameraChannel::QCameraChannel() */

QCameraChannel * __thiscall qcamera::QCameraChannel::QCameraChannel(QCameraChannel *this)

{
  *(int *)this = *(int *)(DAT_000cc3ac + 0xcc37e) + 8;
  android::VectorImpl::VectorImpl((VectorImpl *)(this + 0x14),4,7);
  *(int *)(this + 0x14) = *(int *)(DAT_000cc3b0 + 0xcc394) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x30),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x10) = 0;
  this[0xc] = (QCameraChannel)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return this;
}

