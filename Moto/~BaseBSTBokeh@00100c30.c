
/* qcamera::BaseBSTBokeh::~BaseBSTBokeh() */

BaseBSTBokeh * __thiscall qcamera::BaseBSTBokeh::_BaseBSTBokeh(BaseBSTBokeh *this)

{
  void *pvVar1;
  
  *(int *)this = *(int *)(DAT_00100c7c + 0x100c3a) + 8;
  if (*(BokehSyncNode **)(this + 0x18) != (BokehSyncNode *)0x0) {
    pvVar1 = (void *)BokehSyncNode::_BokehSyncNode(*(BokehSyncNode **)(this + 0x18));
    operator_delete(pvVar1);
    *(undefined4 *)(this + 0x18) = 0;
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 200));
  QCameraCmdThread::_QCameraCmdThread((QCameraCmdThread *)(this + 0x88));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 100));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x40));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x1c));
  return this;
}

