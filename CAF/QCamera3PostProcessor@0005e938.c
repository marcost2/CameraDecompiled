
/* qcamera::QCamera3PostProcessor::QCamera3PostProcessor(qcamera::QCamera3ProcessingChannel*) */

QCamera3PostProcessor * __thiscall
qcamera::QCamera3PostProcessor::QCamera3PostProcessor
          (QCamera3PostProcessor *this,QCamera3ProcessingChannel *param_1)

{
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x1e8) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(int *)this = *(int *)(DAT_0005ea0c + 0x5e954) + 8;
  *(QCamera3ProcessingChannel **)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  android::List<qcamera::ReprocessBuffer>::List((List_qcamera__ReprocessBuffer_ *)(this + 0x1f8));
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x200));
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x224));
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x248));
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x26c));
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x290));
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x2b4));
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x2d8));
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x2fc));
  QCameraCmdThread::QCameraCmdThread((QCameraCmdThread *)(this + 800));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  __aeabi_memclr4(this + 0x2c,0x1bc);
  android::List<qcamera::ReprocessBuffer>::clear((List_qcamera__ReprocessBuffer_ *)(this + 0x1f8));
  pthread_mutex_init((pthread_mutex_t *)(this + 0x360),(pthread_mutexattr_t *)0x0);
  return this;
}

