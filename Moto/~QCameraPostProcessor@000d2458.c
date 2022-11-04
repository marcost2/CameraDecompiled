
/* qcamera::QCameraPostProcessor::~QCameraPostProcessor() */

QCameraPostProcessor * __thiscall
qcamera::QCameraPostProcessor::_QCameraPostProcessor(QCameraPostProcessor *this)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  *(int *)this = *(int *)(DAT_000d2544 + 0xd2464) + 8;
  iVar2 = *(int *)(this + 0x2cc);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      if (*(void **)(this + iVar4 * 4 + 0x38) != (void *)0x0) {
        free(*(void **)(this + iVar4 * 4 + 0x38));
        *(undefined4 *)(this + iVar4 * 4 + 0x38) = 0;
        iVar2 = *(int *)(this + 0x2cc);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  if (*(int **)(this + 0x138) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x138) + 4))();
    *(undefined4 *)(this + 0x138) = 0;
  }
  uVar1 = (uint)(char)this[0x140];
  if (0 < (int)uVar1) {
    iVar2 = 0;
    do {
      piVar3 = *(int **)(this + iVar2 * 4 + 0x144);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x18))(piVar3);
        (**(code **)(*piVar3 + 4))(piVar3);
        uVar1 = (uint)(byte)this[0x140];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (char)uVar1);
  }
  this[0x140] = (QCameraPostProcessor)0x0;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x2f0));
  *(int *)(this + 0x2d8) = *(int *)(DAT_000d2548 + 0xd24ea) + 8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(this + 0x2d8));
  QCameraCmdThread::_QCameraCmdThread((QCameraCmdThread *)(this + 0x284));
  QCameraCmdThread::_QCameraCmdThread((QCameraCmdThread *)(this + 0x244));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x220));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x1fc));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x1d8));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x1b4));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 400));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x16c));
  return this;
}

