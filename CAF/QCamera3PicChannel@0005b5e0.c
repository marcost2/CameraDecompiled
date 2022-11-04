
/* qcamera::QCamera3PicChannel::QCamera3PicChannel(unsigned int, unsigned int, mm_camera_ops_t*,
   void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool, void*), void
   (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*), cam_padding_info_t*,
   void*, camera3_stream*, unsigned long long, bool, bool, qcamera::QCamera3Channel*, unsigned int)
    */

QCamera3PicChannel * __thiscall
qcamera::QCamera3PicChannel::QCamera3PicChannel
          (QCamera3PicChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef18 *param_4,FuncDef19 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,ulonglong param_9,bool param_10,bool param_11,
          QCamera3Channel *param_12,uint param_13)

{
  int iVar1;
  QCamera3Channel *this_00;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined3 in_stack_0000001d;
  uint in_stack_0000002c;
  undefined4 local_28;
  undefined4 uStack36;
  
  piVar4 = *(int **)(DAT_0005b6e4 + 0x5b5ee);
  iVar1 = *piVar4;
  QCamera3ProcessingChannel::QCamera3ProcessingChannel
            ((QCamera3ProcessingChannel *)this,param_1,param_2,param_3,(FuncDef8 *)param_4,
             (FuncDef9 *)param_5,param_6,param_7,param_8,3,CONCAT44(_param_10,param_9._4_4_),
             (QCamera3Channel *)param_13,in_stack_0000002c);
  *(undefined4 *)(this + 0x2ef4) = 0;
  this[0x2ef0] = SUB41(param_12,0);
  *(undefined4 *)(this + 12000) = 0;
  *(int *)this = *(int *)(DAT_0005b6e8 + 0x5b640) + 8;
  android::Mutex::Mutex((Mutex *)(this + 0x2ef8));
  android::List<unsigned_int>::List((List_unsigned_int_ *)(this + 0x2efc));
  *(undefined4 *)(this + 0x2f04) = 0;
  QCamera3HardwareInterface::calcMaxJpegDim();
  *(undefined4 *)(this + 0x2edc) = uStack36;
  *(undefined4 *)(this + 0x2ed8) = local_28;
  *(undefined4 *)(this + 0x2ee4) = *(undefined4 *)(param_8 + 4);
  this_00 = *(QCamera3Channel **)(param_8 + 8);
  *(undefined4 *)(this + 0x1240) = 3;
  *(QCamera3Channel **)(this + 0x2ee8) = this_00;
  uVar2 = QCamera3Channel::getStreamDefaultFormat(this_00,3);
  *(undefined4 *)(this + 0x1244) = uVar2;
  iVar3 = QCamera3PostProcessor::initJpeg
                    ((QCamera3PostProcessor *)(this + 0x90),*(FuncDef22 **)(DAT_0005b6ec + 0x5b6a2),
                     (cam_dimension_t *)(this + 0x2ed8),this);
  if ((iVar3 != 0) && (*(int *)(*(int *)(DAT_0005b6f0 + 0x5b6b4) + 0x20) != 0)) {
    mm_camera_debug_log();
  }
  if (*piVar4 == iVar1) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

