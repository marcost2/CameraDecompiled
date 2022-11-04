
/* qcamera::QCamera3YUVChannel::QCamera3YUVChannel(unsigned int, unsigned int, mm_camera_ops_t*,
   void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool, void*), void
   (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*), cam_padding_info_t*,
   void*, camera3_stream*, cam_stream_type_t, unsigned long long, qcamera::QCamera3Channel*) */

QCamera3YUVChannel * __thiscall
qcamera::QCamera3YUVChannel::QCamera3YUVChannel
          (QCamera3YUVChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef73 *param_4,FuncDef74 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,cam_stream_type_t param_9,ulonglong param_10,
          QCamera3Channel *param_11)

{
  void *pvVar1;
  uint uVar2;
  
  QCamera3ProcessingChannel::QCamera3ProcessingChannel
            ((QCamera3ProcessingChannel *)this,param_1,param_2,param_3,(FuncDef65 *)param_4,
             (FuncDef66 *)param_5,param_6,param_7,param_8,param_9,param_10,param_11,8);
  *(int *)this = *(int *)(DAT_000a1b50 + 0xa1ac2) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x3198),(pthread_mutexattr_t *)0x0);
  *(int *)(this + 0x319c) = *(int *)(DAT_000a1b54 + 0xa1ada) + 8;
  pvVar1 = operator_new__(0x18);
  *(void **)(this + 0x31a0) = pvVar1;
  *(void **)((int)pvVar1 + 0x10) = pvVar1;
  *(void **)((int)pvVar1 + 0x14) = pvVar1;
  *(int *)(this + 0x31a4) = *(int *)(DAT_000a1b58 + 0xa1af8) + 8;
  pvVar1 = operator_new__(0xc);
  *(void **)(this + 0x31a8) = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined4 *)(this + 0x3180) = 0;
  *(undefined4 *)(this + 0x317c) = 0;
  *(undefined4 *)(this + 0x3174) = 0;
  this[0x3194] = (QCamera3YUVChannel)0x0;
  this[0x3178] = (QCamera3YUVChannel)0x0;
  uVar2 = count_leading_zeroes((uint)param_10 | param_10._4_4_);
  this[0x3171] = SUB41(uVar2 >> 5,0);
  *(undefined8 *)(this + 0x3184) = 0;
  *(undefined8 *)(this + 0x318c) = 0;
  return this;
}

