
/* qcamera::QCamera3Stream::start() */

void __thiscall qcamera::QCamera3Stream::start(QCamera3Stream *this)

{
  QCameraQueue::init((QCameraQueue *)(this + 0x40));
  QCameraQueue::init((QCameraQueue *)(this + 100));
  if (*(int *)(this + 0x284) != 0) {
    QCameraQueue::init((QCameraQueue *)(this + 0x29c));
  }
  QCameraCmdThread::__ThumbV7PILongThunk__ZN7qcamera16QCameraCmdThread6launchEPFPvS1_ES1_
            ((QCameraCmdThread *)(this + 0x88),*(FuncDef0 **)(DAT_000557f0 + 0x557e2),this);
  return;
}

