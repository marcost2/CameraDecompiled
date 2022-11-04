
/* qcamera::QCamera3PostProcessor::~QCamera3PostProcessor() */

QCamera3PostProcessor * __thiscall
qcamera::QCamera3PostProcessor::_QCamera3PostProcessor
          (QCamera3PostProcessor *this,QCamera3ProcessingChannel *param_1)

{
  *(int *)this = *(int *)(DAT_0005eb24 + 0x5eac2) + 8;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x360));
  QCameraCmdThread::_QCameraCmdThread((QCameraCmdThread *)(this + 800));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x2fc));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x2d8));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x2b4));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x290));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x26c));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x248));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x224));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x200));
  android::List<qcamera::ReprocessBuffer>::_List((List_qcamera__ReprocessBuffer_ *)(this + 0x1f8));
  return this;
}

