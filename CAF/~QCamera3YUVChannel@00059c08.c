
/* qcamera::QCamera3YUVChannel::~QCamera3YUVChannel() */

void __thiscall
qcamera::QCamera3YUVChannel::_QCamera3YUVChannel
          (QCamera3YUVChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef16 *param_4,FuncDef17 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,cam_stream_type_t param_9,ulonglong param_10,
          QCamera3Channel *param_11)

{
  uint extraout_r1;
  uint in_stack_00000024;
  
  *(int *)this = *(int *)(DAT_00059c48 + 0x59c12) + 8;
  android::Mutex::_Mutex((Mutex *)(this + 0x2f10));
  android::List<unsigned_int>::_List((List_unsigned_int_ *)(this + 0x2f08));
  android::List<qcamera::QCamera3YUVChannel::PpInfo>::_List
            ((List_qcamera__QCamera3YUVChannel__PpInfo_ *)(this + 0x2efc));
  android::Mutex::_Mutex((Mutex *)(this + 0x2ef8));
  QCamera3ProcessingChannel::__ThumbV7PILongThunk__ZN7qcamera25QCamera3ProcessingChannelD2Ev
            ((QCamera3ProcessingChannel *)this,extraout_r1,param_2,param_3,(FuncDef8 *)param_4,
             (FuncDef9 *)param_5,param_6,param_7,param_8,param_9,param_10,param_11,in_stack_00000024
            );
  return;
}

