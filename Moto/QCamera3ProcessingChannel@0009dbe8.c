
/* qcamera::QCamera3ProcessingChannel::QCamera3ProcessingChannel(unsigned int, unsigned int,
   mm_camera_ops_t*, void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool,
   void*), void (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*),
   cam_padding_info_t*, void*, camera3_stream*, cam_stream_type_t, unsigned long long,
   qcamera::QCamera3Channel*, unsigned int) */

QCamera3ProcessingChannel * __thiscall
qcamera::QCamera3ProcessingChannel::QCamera3ProcessingChannel
          (QCamera3ProcessingChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef65 *param_4,FuncDef66 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,cam_stream_type_t param_9,ulonglong param_10,
          QCamera3Channel *param_11,uint param_12)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  char acStack124 [92];
  int local_20;
  
  piVar5 = *(int **)(DAT_0009dd98 + 0x9dbfe);
  local_20 = *piVar5;
  *(uint *)(this + 0x54) = param_2;
  *(int *)this = *(int *)(DAT_0009dd9c + 0x9dc0e) + 8;
  this[0x50] = (QCamera3ProcessingChannel)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(uint *)(this + 0x48) = param_1;
  *(mm_camera_ops_t **)(this + 0x4c) = param_3;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(FuncDef66 **)(this + 100) = param_5;
  *(undefined4 *)(this + 0x5c) = 0;
  *(FuncDef65 **)(this + 0x60) = param_4;
  *(void **)(this + 4) = param_7;
  auVar1 = *(undefined (*) [16])param_6;
  uVar6 = *(undefined8 *)(param_6 + 0x14);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_6 + 0xc);
  *(undefined8 *)(this + 0x1c) = uVar6;
  *(longlong *)(this + 8) = SUB168(auVar1,0);
  *(longlong *)(this + 0x10) = SUB168(auVar1 >> 0x40,0);
  *(undefined4 *)(this + 0x6c) = param_10._4_4_;
  *(undefined4 *)(this + 0x68) = (undefined4)param_10;
  this[0x7c] = (QCamera3ProcessingChannel)0x1;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(uint *)(this + 0x78) = param_12;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  uVar2 = BSTLiveBokeh::createInstance();
  *(undefined4 *)(this + 0x90) = uVar2;
  *(int *)this = *(int *)(DAT_0009dda0 + 0x9dc84) + 8;
  QCamera3PostProcessor::QCamera3PostProcessor((QCamera3PostProcessor *)(this + 0x94),this);
  *(undefined4 *)(this + 0x6a8) = 0;
  *(undefined4 *)(this + 0x6ac) = 0;
  *(undefined4 *)(this + 0x69c) = 0;
  *(undefined4 *)(this + 0x6a0) = 0;
  QCamera3StreamMem::QCamera3StreamMem((QCamera3StreamMem *)(this + 0x6b0),param_12,true);
  *(undefined4 *)(this + 0x14f8) = 0;
  *(QCamera3Channel **)(this + 0x14f4) = param_11;
  *(undefined2 *)(this + 0x14f1) = 0;
  *(cam_stream_type_t *)(this + 0x14e8) = param_9;
  *(undefined4 *)(this + 0x14e4) = 0x40;
  *(camera3_stream **)(this + 0x14e0) = param_8;
  QCamera3StreamMem::QCamera3StreamMem((QCamera3StreamMem *)(this + 0x14fc),0,true);
  QCamera3StreamMem::QCamera3StreamMem((QCamera3StreamMem *)(this + 0x232c),param_12 + 1,false);
  *(int *)(this + 0x315c) = *(int *)(DAT_0009dda4 + 0x9dcfe) + 8;
  pvVar3 = operator_new__(0xc);
  *(void **)(this + 0x3160) = pvVar3;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  *(void **)((int)pvVar3 + 8) = pvVar3;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x3164),(pthread_mutexattr_t *)0x0);
  *(int *)(this + 0x3168) = *(int *)(DAT_0009dda8 + 0x9dd28) + 8;
  pvVar3 = operator_new__(0xc);
  *(void **)(this + 0x316c) = pvVar3;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  *(void **)((int)pvVar3 + 8) = pvVar3;
  property_get(DAT_0009ddac + 0x9dd48,acStack124,DAT_0009ddb0 + 0x9dd4a);
  iVar4 = atoi(acStack124);
  this[0x698] = SUB41(iVar4,0);
  iVar4 = QCamera3PostProcessor::init
                    ((QCamera3PostProcessor *)(this + 0x94),
                     (EVP_PKEY_CTX *)(QCamera3StreamMem *)(this + 0x6b0));
  if ((iVar4 != 0) && (*(int *)(*(int *)(DAT_0009ddb4 + 0x9dd66) + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_0009ddbc + 0x9dd7e,0x31a,DAT_0009ddb8 + 0x9dd76);
  }
  if (*piVar5 == local_20) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

