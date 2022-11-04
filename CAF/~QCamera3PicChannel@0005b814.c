
/* qcamera::QCamera3PicChannel::~QCamera3PicChannel() */

void __thiscall
qcamera::QCamera3PicChannel::_QCamera3PicChannel
          (QCamera3PicChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef18 *param_4,FuncDef19 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,ulonglong param_9,bool param_10,bool param_11,
          QCamera3Channel *param_12,uint param_13)

{
  uint extraout_r1;
  undefined3 in_stack_0000001d;
  undefined3 in_stack_00000021;
  
  *(int *)this = *(int *)(DAT_0005b840 + 0x5b81e) + 8;
  android::List<unsigned_int>::_List((List_unsigned_int_ *)(this + 0x2efc));
  android::Mutex::_Mutex((Mutex *)(this + 0x2ef8));
  QCamera3ProcessingChannel::__ThumbV7PILongThunk__ZN7qcamera25QCamera3ProcessingChannelD2Ev
            ((QCamera3ProcessingChannel *)this,extraout_r1,param_2,param_3,(FuncDef8 *)param_4,
             (FuncDef9 *)param_5,param_6,param_7,param_8,(cam_stream_type_t)param_9,
             CONCAT44(_param_10,param_9._4_4_),_param_11,(uint)param_12);
  return;
}

