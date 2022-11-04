
/* qcamera::QCameraCbNotifier::~QCameraCbNotifier() */

QCameraCbNotifier * __thiscall
qcamera::QCameraCbNotifier::_QCameraCbNotifier(QCameraCbNotifier *this)

{
  *(int *)this = *(int *)(DAT_000dd548 + 0xdd530) + 8;
  QCameraCmdThread::_QCameraCmdThread((QCameraCmdThread *)(this + 0x44));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x20));
  return this;
}

