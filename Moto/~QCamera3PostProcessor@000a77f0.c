
/* qcamera::QCamera3PostProcessor::~QCamera3PostProcessor() */

QCamera3PostProcessor * __thiscall
qcamera::QCamera3PostProcessor::_QCamera3PostProcessor(QCamera3PostProcessor *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  *(int *)this = *(int *)(DAT_000a789c + 0xa77fc) + 8;
  uVar1 = (uint)(char)this[0x470];
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      piVar2 = *(int **)(this + iVar3 * 4 + 0x474);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))(piVar2);
        (**(code **)(*piVar2 + 4))(piVar2);
        *(undefined4 *)(this + iVar3 * 4 + 0x474) = 0;
        uVar1 = (uint)(byte)this[0x470];
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (char)uVar1);
  }
  this[0x470] = (QCamera3PostProcessor)0x0;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x600));
  QCameraCmdThread::_QCameraCmdThread((QCameraCmdThread *)(this + 0x5c0));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x59c));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x578));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x554));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x530));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x50c));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x4e8));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x4c4));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x4a0));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x47c));
  return this;
}

