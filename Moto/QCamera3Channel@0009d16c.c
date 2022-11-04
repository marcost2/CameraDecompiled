
/* qcamera::QCamera3Channel::QCamera3Channel(unsigned int, unsigned int, mm_camera_ops_t*, void
   (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool, void*), void
   (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*), cam_padding_info_t*,
   unsigned long long, void*, unsigned int) */

QCamera3Channel * __thiscall
qcamera::QCamera3Channel::QCamera3Channel
          (QCamera3Channel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef63 *param_4,FuncDef64 *param_5,cam_padding_info_t *param_6,ulonglong param_7,
          void *param_8,uint param_9)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 in_stack_0000001c;
  
  *(uint *)(this + 0x54) = param_2;
  this[0x50] = (QCamera3Channel)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(uint *)(this + 0x48) = param_1;
  *(mm_camera_ops_t **)(this + 0x4c) = param_3;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(FuncDef64 **)(this + 100) = param_5;
  *(FuncDef63 **)(this + 0x60) = param_4;
  *(int *)this = *(int *)(DAT_0009d1f0 + 0x9d1a4) + 8;
  *(uint *)(this + 4) = param_9;
  auVar1 = *(undefined (*) [16])param_6;
  uVar3 = *(undefined8 *)(param_6 + 0x14);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_6 + 0xc);
  *(undefined8 *)(this + 0x1c) = uVar3;
  *(longlong *)(this + 8) = SUB168(auVar1,0);
  *(longlong *)(this + 0x10) = SUB168(auVar1 >> 0x40,0);
  *(void **)(this + 0x6c) = param_8;
  *(undefined4 *)(this + 0x68) = param_7._4_4_;
  this[0x7c] = (QCamera3Channel)0x1;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = in_stack_0000001c;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  uVar2 = BSTLiveBokeh::createInstance();
  *(undefined4 *)(this + 0x90) = uVar2;
  return this;
}

