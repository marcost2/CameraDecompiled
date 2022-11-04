
/* qcamera::QCameraMuxer::QCameraMuxer(unsigned int) */

QCameraMuxer * __thiscall qcamera::QCameraMuxer::QCameraMuxer(QCameraMuxer *this,uint param_1)

{
  int iVar1;
  QCameraMuxer QVar2;
  FuncDef58 *pFVar3;
  int *piVar4;
  char acStack116 [92];
  int local_18;
  
  piVar4 = *(int **)(DAT_000bfb30 + 0xbfa48);
  local_18 = *piVar4;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(int *)this = *(int *)(DAT_000bfb34 + 0xbfa58) + 8;
  *(undefined4 *)(this + 0x35) = 0;
  *(undefined4 *)(this + 0x31) = 0;
  this[0x3a] = (QCameraMuxer)0x0;
  this[0x39] = SUB41(param_1,0);
  pFVar3 = *(FuncDef58 **)(DAT_000bfb38 + 0xbfa72);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x3c),pFVar3,this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x60),pFVar3,this);
  QCameraCmdThread::QCameraCmdThread((QCameraCmdThread *)(this + 0x84));
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0x100;
  *(undefined4 *)(this + 0xc4) = 0;
  setupLogicalCameras(this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 200),(pthread_mutexattr_t *)0x0);
  QCameraCmdThread::launch
            ((QCameraCmdThread *)(this + 0x84),*(FuncDef57 **)(DAT_000bfb3c + 0xbface),this);
  property_get(DAT_000bfb40 + 0xbfae0,acStack116,DAT_000bfb44 + 0xbfae2);
  iVar1 = atoi(acStack116);
  QVar2 = SUB41(iVar1,0);
  if (iVar1 != 0) {
    QVar2 = (QCameraMuxer)0x1;
  }
  this[0xd4] = QVar2;
  if (*(int *)(*(int *)(DAT_000bfb48 + 0xbfafc) + 0x28) != 0) {
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    mm_camera_debug_log(1,3,DAT_000bfb50 + 0xbfb1a,0x9f,DAT_000bfb4c + 0xbfb0e,iVar1);
  }
  if (*piVar4 == local_18) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

