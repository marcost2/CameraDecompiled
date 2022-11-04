
/* qcamera::QCameraPostProcessor::QCameraPostProcessor(qcamera::QCamera2HardwareInterface*) */

QCameraPostProcessor * __thiscall
qcamera::QCameraPostProcessor::QCameraPostProcessor
          (QCameraPostProcessor *this,QCamera2HardwareInterface *param_1)

{
  FuncDef58 *pFVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  
  this[0x168] = (QCameraPostProcessor)0x0;
  this[0x140] = (QCameraPostProcessor)0x0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(QCamera2HardwareInterface **)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(int *)this = *(int *)(DAT_000d21f4 + 0xd210c) + 8;
  pFVar1 = *(FuncDef58 **)(DAT_000d21f8 + 0xd2116);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x16c),pFVar1,this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 400),pFVar1,this);
  pFVar1 = *(FuncDef58 **)(DAT_000d21fc + 0xd2134);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x1b4),pFVar1,this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x1d8),pFVar1,this);
  QCameraQueue::QCameraQueue
            ((QCameraQueue *)(this + 0x1fc),*(FuncDef58 **)(DAT_000d2200 + 0xd2152),this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x220));
  QCameraCmdThread::QCameraCmdThread((QCameraCmdThread *)(this + 0x244));
  QCameraCmdThread::QCameraCmdThread((QCameraCmdThread *)(this + 0x284));
  *(undefined4 *)(this + 0x2d4) = 0;
  this[0x2d0] = (QCameraPostProcessor)0x1;
  *(undefined4 *)(this + 0x2cc) = 0;
  this[0x2ca] = (QCameraPostProcessor)0x1;
  *(undefined2 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  android::VectorImpl::VectorImpl((VectorImpl *)(this + 0x2d8),4,7);
  this[0x2f4] = (QCameraPostProcessor)0x0;
  *(undefined4 *)(this + 0x2ec) = 0;
  auVar2 = ZEXT816(0);
  *(int *)(this + 0x2d8) = *(int *)(DAT_000d2204 + 0xd21ac) + 8;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  __aeabi_memclr8(this + 0x38,0x100);
  *(longlong *)(this + 0x154) = SUB168(auVar2,0);
  uVar3 = SUB168(auVar2 >> 0x40,0);
  *(undefined8 *)(this + 0x15c) = uVar3;
  *(longlong *)(this + 0x144) = SUB168(auVar2,0);
  *(undefined8 *)(this + 0x14c) = uVar3;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 4) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x2f0),(pthread_mutexattr_t *)0x0);
  return this;
}

