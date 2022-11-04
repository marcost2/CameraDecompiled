
/* qcamera::QCamera3ReprocessChannel::QCamera3ReprocessChannel(unsigned int, unsigned int,
   mm_camera_ops_t*, void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool,
   void*), void (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*),
   cam_padding_info_t*, unsigned long long, void*, void*) */

QCamera3ReprocessChannel * __thiscall
qcamera::QCamera3ReprocessChannel::QCamera3ReprocessChannel
          (QCamera3ReprocessChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef77 *param_4,FuncDef78 *param_5,cam_padding_info_t *param_6,ulonglong param_7,
          void *param_8,void *param_9)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_stack_0000001c;
  
  auVar4 = ZEXT816(0);
  iVar1 = *(int *)(in_stack_0000001c + 0x78);
  *(uint *)(this + 0x54) = param_2;
  this[0x50] = (QCamera3ReprocessChannel)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(uint *)(this + 0x48) = param_1;
  *(mm_camera_ops_t **)(this + 0x4c) = param_3;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(FuncDef78 **)(this + 100) = param_5;
  *(undefined4 *)(this + 0x5c) = 0;
  *(FuncDef77 **)(this + 0x60) = param_4;
  *(int *)this = *(int *)(DAT_000a433c + 0xa4200) + 8;
  *(void **)(this + 4) = param_9;
  uVar5 = *(undefined8 *)param_6;
  uVar6 = *(undefined8 *)(param_6 + 8);
  uVar7 = *(undefined8 *)(param_6 + 0x14);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_6 + 0xc);
  *(undefined8 *)(this + 0x1c) = uVar7;
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(void **)(this + 0x6c) = param_8;
  *(undefined4 *)(this + 0x68) = param_7._4_4_;
  this[0x7c] = (QCamera3ReprocessChannel)0x1;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(int *)(this + 0x78) = iVar1 + 1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  uVar2 = BSTLiveBokeh::createInstance();
  iVar1 = *(int *)(DAT_000a4340 + 0xa4246) + 8;
  *(undefined4 *)(this + 0x90) = uVar2;
  *(int *)(this + 0x94) = in_stack_0000001c;
  *(int *)(this + 0x98) = iVar1;
  *(int *)this = *(int *)(DAT_000a4344 + 0xa4256) + 8;
  pvVar3 = operator_new__(0x14);
  *(void **)((int)pvVar3 + 0xc) = pvVar3;
  *(void **)((int)pvVar3 + 0x10) = pvVar3;
  *(void **)(this + 0x9c) = pvVar3;
  *(int *)(this + 0xa0) = iVar1;
  pvVar3 = operator_new__(0x14);
  *(void **)(this + 0xa4) = pvVar3;
  *(void **)((int)pvVar3 + 0xc) = pvVar3;
  *(void **)((int)pvVar3 + 0x10) = pvVar3;
  pthread_mutex_init((pthread_mutex_t *)(this + 0xa8),(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(this + 0xac),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  pthread_mutex_init((pthread_mutex_t *)(this + 0xc0),(pthread_mutexattr_t *)0x0);
  iVar1 = *(int *)(DAT_000a4348 + 0xa42a6) + 8;
  *(int *)(this + 0xc4) = iVar1;
  pvVar3 = operator_new__(0xc);
  *(void **)((int)pvVar3 + 4) = pvVar3;
  *(void **)((int)pvVar3 + 8) = pvVar3;
  *(void **)(this + 200) = pvVar3;
  *(int *)(this + 0xcc) = iVar1;
  pvVar3 = operator_new__(0xc);
  *(void **)((int)pvVar3 + 4) = pvVar3;
  *(void **)((int)pvVar3 + 8) = pvVar3;
  *(longlong *)(this + 0xf8) = SUB168(auVar4,0);
  *(longlong *)(this + 0x100) = SUB168(auVar4 >> 0x40,0);
  *(void **)(this + 0xd0) = pvVar3;
  *(undefined4 *)(this + 0xd4) = 0;
  QCamera3StreamMem::QCamera3StreamMem((QCamera3StreamMem *)(this + 0x108),0,true);
  android::VectorImpl::VectorImpl((VectorImpl *)(this + 0xf38),4,7);
  *(int *)(this + 0xf38) = *(int *)(DAT_000a434c + 0xa42f2) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0xf4c),(pthread_mutexattr_t *)0x0);
  this[0x116c] = (QCamera3ReprocessChannel)0x0;
  *(undefined2 *)(this + 0xf50) = 0;
  *(longlong *)(this + 0xe8) = SUB168(auVar4,0);
  uVar5 = SUB168(auVar4 >> 0x40,0);
  *(undefined8 *)(this + 0xf0) = uVar5;
  *(longlong *)(this + 0xd8) = SUB168(auVar4,0);
  *(undefined8 *)(this + 0xe0) = uVar5;
  *(int *)(this + 0xb0) = *(int *)(this + 0x78) + -1;
  *(int *)(this + 0xb4) = *(int *)(this + 0x78) * 2 + -1;
  __aeabi_memclr8(this + 0xf54,0x218);
  return this;
}

