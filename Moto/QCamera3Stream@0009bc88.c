
/* qcamera::QCamera3Stream::QCamera3Stream(unsigned int, unsigned int, mm_camera_ops_t*,
   cam_padding_info_t*, qcamera::QCamera3Channel*) */

QCamera3Stream * __thiscall
qcamera::QCamera3Stream::QCamera3Stream
          (QCamera3Stream *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_padding_info_t *param_4,QCamera3Channel *param_5)

{
  undefined auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0x34] = (QCamera3Stream)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = *(int *)(DAT_0009bd54 + 0x9bc9e) + 8;
  *(uint *)(this + 4) = param_1;
  *(uint *)(this + 8) = param_2;
  *(undefined4 *)(this + 0xc) = 0;
  *(mm_camera_ops_t **)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x14) = 0;
  QCameraQueue::QCameraQueue
            ((QCameraQueue *)(this + 0x40),*(FuncDef58 **)(DAT_0009bd58 + 0x9bcb0),this);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 100),(FuncDef58 *)0x0,this);
  QCameraCmdThread::QCameraCmdThread((QCameraCmdThread *)(this + 0x88));
  *(QCamera3Channel **)(this + 0x278) = param_5;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x27c),(pthread_mutexattr_t *)0x0);
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  this[0x284] = (QCamera3Stream)0x0;
  *(undefined4 *)(this + 0x280) = 0;
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x298),(FuncDef58 *)0x0,this);
  iVar5 = DAT_0009bd68;
  iVar4 = DAT_0009bd64;
  iVar3 = DAT_0009bd60;
  iVar2 = DAT_0009bd5c;
  *(QCamera3Stream **)(this + 0x18) = this;
  *(undefined4 *)(this + 0x1c) = 0;
  uVar6 = *(undefined4 *)(iVar2 + 0x9bd14);
  uVar7 = *(undefined4 *)(iVar3 + 0x9bd16);
  uVar8 = *(undefined4 *)(iVar4 + 0x9bd18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(iVar5 + 0x9bd1a);
  *(undefined4 *)(this + 0x24) = uVar8;
  *(undefined4 *)(this + 0x28) = uVar7;
  *(undefined4 *)(this + 0x2c) = uVar6;
  __aeabi_memclr8(this + 0xd4,0x188);
  auVar1 = *(undefined (*) [16])param_4;
  uVar9 = *(undefined8 *)(param_4 + 0xc);
  uVar10 = *(undefined8 *)(param_4 + 0x14);
  *(longlong *)(this + 0x25c) = SUB168(auVar1,0);
  *(longlong *)(this + 0x264) = SUB168(auVar1 >> 0x40,0);
  *(undefined8 *)(this + 0x268) = uVar9;
  *(undefined8 *)(this + 0x270) = uVar10;
  return this;
}

