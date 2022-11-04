
/* qcamera::QCamera3RegularChannel::~QCamera3RegularChannel() */

void __thiscall
qcamera::QCamera3RegularChannel::_QCamera3RegularChannel
          (QCamera3RegularChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef10 *param_4,FuncDef11 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,cam_stream_type_t param_9,ulonglong param_10,
          QCamera3Channel *param_11,uint param_12)

{
  uint extraout_r1;
  
  *(int *)this = *(int *)(DAT_00058a64 + 0x58a4e) + 8;
  QCamera3Channel::destroy((QCamera3Channel *)this,(__tree_node *)param_1);
  QCamera3ProcessingChannel::__ThumbV7PILongThunk__ZN7qcamera25QCamera3ProcessingChannelD2Ev
            ((QCamera3ProcessingChannel *)this,extraout_r1,param_2,param_3,(FuncDef8 *)param_4,
             (FuncDef9 *)param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  return;
}

