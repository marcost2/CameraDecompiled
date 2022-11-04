
/* qcamera::QCamera3Stream::QCamera3Stream(unsigned int, unsigned int, mm_camera_ops_t*,
   cam_padding_info_t*, qcamera::QCamera3Channel*) */

QCamera3Stream * __thiscall
qcamera::QCamera3Stream::QCamera3Stream
          (QCamera3Stream *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_padding_info_t *param_4,QCamera3Channel *param_5)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0x34] = (QCamera3Stream)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = *(int *)(DAT_0005517c + 0x550be) + 8;
  *(uint *)(this + 4) = param_1;
  *(uint *)(this + 8) = param_2;
  *(undefined4 *)(this + 0xc) = 0;
  *(mm_camera_ops_t **)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x14) = 0;
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x40));
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 100));
  QCameraCmdThread::QCameraCmdThread((QCameraCmdThread *)(this + 0x88));
  *(QCamera3Channel **)(this + 0x278) = param_5;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  android::Mutex::Mutex((Mutex *)(this + 0x27c));
  android::Mutex::Mutex((Mutex *)(this + 0x280));
  *(undefined8 *)(this + 0x28c) = 0;
  *(undefined8 *)(this + 0x294) = 0;
  this[0x288] = (QCamera3Stream)0x0;
  *(undefined4 *)(this + 0x284) = 0;
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x29c));
  uVar2 = *(undefined4 *)(DAT_00055184 + 0x55130);
  uVar3 = *(undefined4 *)(DAT_00055188 + 0x55136);
  uVar4 = *(undefined4 *)(DAT_0005518c + 0x5513c);
  uVar5 = *(undefined4 *)(DAT_00055190 + 0x55142);
  *(QCamera3Stream **)(this + 0x18) = this;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = uVar5;
  *(undefined4 *)(this + 0x24) = uVar4;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar2;
  __aeabi_memclr4(this + 0xd4,0x188);
  auVar1 = *(undefined (*) [16])param_4;
  uVar6 = *(undefined8 *)(param_4 + 0xc);
  uVar7 = *(undefined8 *)(param_4 + 0x14);
  *(longlong *)(this + 0x25c) = SUB168(auVar1,0);
  *(longlong *)(this + 0x264) = SUB168(auVar1 >> 0x40,0);
  *(undefined8 *)(this + 0x268) = uVar6;
  *(undefined8 *)(this + 0x270) = uVar7;
  return this;
}

