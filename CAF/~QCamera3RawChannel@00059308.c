
/* qcamera::QCamera3RawChannel::~QCamera3RawChannel() */

void __thiscall
qcamera::QCamera3RawChannel::_QCamera3RawChannel
          (QCamera3RawChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef14 *param_4,FuncDef15 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,ulonglong param_9,QCamera3Channel *param_10,bool param_11,
          uint param_12)

{
  void *pvVar1;
  FuncDef10 *unaff_r7;
  FuncDef11 *in_lr;
  
  pvVar1 = (void *)QCamera3RegularChannel::_QCamera3RegularChannel
                             ((QCamera3RegularChannel *)this,param_1,param_2,param_3,unaff_r7,in_lr,
                              (cam_padding_info_t *)param_4,param_5,(camera3_stream *)param_6,
                              (cam_stream_type_t)param_7,CONCAT44((undefined4)param_9,param_8),
                              param_9._4_4_,(uint)param_10);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

