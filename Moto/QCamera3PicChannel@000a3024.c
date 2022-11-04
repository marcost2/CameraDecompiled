
/* qcamera::QCamera3PicChannel::QCamera3PicChannel(unsigned int, unsigned int, mm_camera_ops_t*,
   void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool, void*), void
   (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*), cam_padding_info_t*,
   void*, camera3_stream*, unsigned long long, bool, bool, qcamera::QCamera3Channel*, unsigned int)
    */

QCamera3PicChannel * __thiscall
qcamera::QCamera3PicChannel::QCamera3PicChannel
          (QCamera3PicChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef75 *param_4,FuncDef76 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,ulonglong param_9,bool param_10,bool param_11,
          QCamera3Channel *param_12,uint param_13)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined3 in_stack_0000001d;
  uint in_stack_0000002c;
  undefined4 local_28;
  undefined4 uStack36;
  
  piVar5 = *(int **)(DAT_000a3138 + 0xa3038);
  iVar1 = *piVar5;
  QCamera3ProcessingChannel::QCamera3ProcessingChannel
            ((QCamera3ProcessingChannel *)this,param_1,param_2,param_3,(FuncDef65 *)param_4,
             (FuncDef66 *)param_5,param_6,param_7,param_8,3,CONCAT44(_param_10,param_9._4_4_),
             (QCamera3Channel *)param_13,in_stack_0000002c);
  *(undefined4 *)(this + 0x3190) = 0;
  this[0x318c] = SUB41(param_12,0);
  *(undefined4 *)(this + 0x317c) = 0;
  *(int *)this = *(int *)(DAT_000a313c + 0xa3086) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x3194),(pthread_mutexattr_t *)0x0);
  *(int *)(this + 0x3198) = *(int *)(DAT_000a3140 + 0xa309e) + 8;
  pvVar2 = operator_new__(0xc);
  *(void **)(this + 0x319c) = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined4 *)(this + 0x31a0) = 0;
  QCamera3HardwareInterface::calcMaxJpegDim();
  *(undefined4 *)(this + 0x3178) = uStack36;
  *(undefined4 *)(this + 0x3174) = local_28;
  *(undefined4 *)(this + 0x3180) = *(undefined4 *)(param_8 + 4);
  uVar3 = *(undefined4 *)(param_8 + 8);
  *(undefined4 *)(this + 0x14ec) = 2;
  *(undefined4 *)(this + 0x14e8) = 3;
  *(undefined4 *)(this + 0x3184) = uVar3;
  iVar4 = QCamera3PostProcessor::initJpeg
                    ((QCamera3PostProcessor *)(this + 0x94),*(FuncDef79 **)(DAT_000a3144 + 0xa30fa),
                     (cam_dimension_t *)(this + 0x3174),this);
  if ((iVar4 != 0) && (*(int *)(*(int *)(DAT_000a3148 + 0xa310a) + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_000a3150 + 0xa3122,0xeef,DAT_000a314c + 0xa311a);
  }
  if (*piVar5 == iVar1) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

