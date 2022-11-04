
/* qcamera::BokehSyncNode::BokehSyncNode(void*) */

BokehSyncNode * __thiscall qcamera::BokehSyncNode::BokehSyncNode(BokehSyncNode *this,void *param_1)

{
  FuncDef58 *pFVar1;
  
  *(void **)(this + 4) = param_1;
  *(undefined2 *)this = 0;
  pFVar1 = *(FuncDef58 **)(DAT_00101f38 + 0x101f12);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 8),pFVar1,this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x2c),pFVar1,this);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x50),(pthread_mutexattr_t *)0x0);
  return this;
}

