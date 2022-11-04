
/* qcamera::BaseBSTBokeh::BaseBSTBokeh(int) */

BaseBSTBokeh * __thiscall qcamera::BaseBSTBokeh::BaseBSTBokeh(BaseBSTBokeh *this,int param_1)

{
  BokehSyncNode *this_00;
  undefined4 uVar1;
  FuncDef58 *pFVar2;
  
  this[0x14] = (BaseBSTBokeh)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)(this + 0x10) = param_1;
  *(undefined2 *)(this + 8) = 0;
  *(int *)this = *(int *)(DAT_00100bf0 + 0x100b9c) + 8;
  *(undefined4 *)(this + 4) = 0;
  this_00 = (BokehSyncNode *)operator_new(0x54);
  uVar1 = BokehSyncNode::BokehSyncNode(this_00,this);
  *(undefined4 *)(this + 0x18) = uVar1;
  pFVar2 = *(FuncDef58 **)(DAT_00100bf4 + 0x100bb8);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x1c),pFVar2,this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x40),pFVar2,this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 100),pFVar2,this);
  QCameraCmdThread::QCameraCmdThread((QCameraCmdThread *)(this + 0x88));
  pthread_mutex_init((pthread_mutex_t *)(this + 200),(pthread_mutexattr_t *)0x0);
  return this;
}

