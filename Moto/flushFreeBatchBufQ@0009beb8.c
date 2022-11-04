
/* qcamera::QCamera3Stream::flushFreeBatchBufQ() */

void __thiscall qcamera::QCamera3Stream::flushFreeBatchBufQ(QCamera3Stream *this)

{
  int iVar1;
  QCameraQueue *this_00;
  
  this_00 = (QCameraQueue *)(this + 0x298);
  while (iVar1 = QCameraQueue::isEmpty(this_00), iVar1 == 0) {
    QCameraQueue::dequeue(this_00,true);
  }
  QCameraQueue::flush(this_00,true);
  return;
}

