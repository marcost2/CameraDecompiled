
/* qcamera::QCamera3PostProcessor::QCamera3PostProcessor(qcamera::QCamera3ProcessingChannel*) */

QCamera3PostProcessor * __thiscall
qcamera::QCamera3PostProcessor::QCamera3PostProcessor
          (QCamera3PostProcessor *this,QCamera3ProcessingChannel *param_1)

{
  FuncDef58 *pFVar1;
  
  this[0x470] = (QCamera3PostProcessor)0x1;
  *(undefined4 *)(this + 0x468) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(int *)this = *(int *)(DAT_000a7768 + 0xa76b0) + 8;
  *(QCamera3ProcessingChannel **)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  QCameraQueue::QCameraQueue
            ((QCameraQueue *)(this + 0x47c),*(FuncDef58 **)(DAT_000a776c + 0xa76be),this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x4a0),(FuncDef58 *)0x0,this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x4c4),(FuncDef58 *)0x0,this);
  QCameraQueue::QCameraQueue
            ((QCameraQueue *)(this + 0x4e8),*(FuncDef58 **)(DAT_000a7770 + 0xa76e6),this);
  pFVar1 = *(FuncDef58 **)(DAT_000a7774 + 0xa76f6);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x50c),pFVar1,this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x530),pFVar1,this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x554));
  QCameraQueue::QCameraQueue
            ((QCameraQueue *)(this + 0x578),*(FuncDef58 **)(DAT_000a7778 + 0xa771c),this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x59c),(FuncDef58 *)0x0,this);
  QCameraCmdThread::QCameraCmdThread((QCameraCmdThread *)(this + 0x5c0));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  __aeabi_memclr8(this + 0x2c,0x43c);
  *(undefined4 *)(this + 0x478) = 0;
  *(undefined4 *)(this + 0x474) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x600),(pthread_mutexattr_t *)0x0);
  return this;
}

