
/* qcamera::QCamera3ProcessingChannel::QCamera3ProcessingChannel(unsigned int, unsigned int,
   mm_camera_ops_t*, void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool,
   void*), void (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*),
   cam_padding_info_t*, void*, camera3_stream*, cam_stream_type_t, unsigned long long,
   qcamera::QCamera3Channel*, unsigned int) */

QCamera3ProcessingChannel * __thiscall
qcamera::QCamera3ProcessingChannel::QCamera3ProcessingChannel
          (QCamera3ProcessingChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef8 *param_4,FuncDef9 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,cam_stream_type_t param_9,ulonglong param_10,
          QCamera3Channel *param_11,uint param_12)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_ffffff74;
  char acStack120 [92];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0005702c + 0x56efe);
  local_1c = *piVar2;
  QCamera3Channel::QCamera3Channel
            ((QCamera3Channel *)this,param_1,param_2,param_3,(FuncDef6 *)param_4,(FuncDef7 *)param_5
             ,param_6,CONCAT44((undefined4)param_10,in_stack_ffffff74),param_10._4_4_,(uint)param_7)
  ;
  *(int *)this = *(int *)(DAT_00057030 + 0x56f2e) + 8;
  QCamera3PostProcessor::QCamera3PostProcessor((QCamera3PostProcessor *)(this + 0x90),this);
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  QCamera3StreamMem::QCamera3StreamMem((QCamera3StreamMem *)(this + 0x408),param_12,true);
  *(undefined4 *)(this + 0x1250) = 0;
  *(QCamera3Channel **)(this + 0x124c) = param_11;
  *(undefined2 *)(this + 0x1249) = 0;
  *(cam_stream_type_t *)(this + 0x1240) = param_9;
  *(undefined4 *)(this + 0x123c) = 0x40;
  *(camera3_stream **)(this + 0x1238) = param_8;
  QCamera3StreamMem::QCamera3StreamMem((QCamera3StreamMem *)(this + 0x1254),0,true);
  QCamera3StreamMem::QCamera3StreamMem((QCamera3StreamMem *)(this + 0x2084),param_12 + 1,false);
  android::List<unsigned_int>::List((List_unsigned_int_ *)(this + 0x2eb4));
  android::Mutex::Mutex((Mutex *)(this + 0x2ebc));
  android::Mutex::Mutex((Mutex *)(this + 0x2ec0));
  android::List<mm_camera_super_buf_t*>::List((List_mm_camera_super_buf_t__ *)(this + 0x2ec4));
  android::List<unsigned_int>::List((List_unsigned_int_ *)(this + 0x2ecc));
  property_get();
  iVar1 = atoi(acStack120);
  this[0x3f4] = SUB41(iVar1,0);
  iVar1 = QCamera3PostProcessor::init((QCamera3PostProcessor *)(this + 0x90));
  if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_0005703c + 0x56ffc) + 0x20) != 0)) {
    mm_camera_debug_log();
  }
  if (*piVar2 == local_1c) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

