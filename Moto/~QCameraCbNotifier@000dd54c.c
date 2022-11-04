
/* qcamera::QCameraCbNotifier::~QCameraCbNotifier() */

void __thiscall qcamera::QCameraCbNotifier::_QCameraCbNotifier(QCameraCbNotifier *this)

{
  *(int *)this = *(int *)(DAT_000dd578 + 0xdd558) + 8;
  QCameraCmdThread::_QCameraCmdThread((QCameraCmdThread *)(this + 0x44));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x20));
  operator_delete(this);
  return;
}

