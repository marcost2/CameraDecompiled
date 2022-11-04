
/* qcamera::QCamera3RegularChannel::~QCamera3RegularChannel() */

void __thiscall
qcamera::QCamera3RegularChannel::_QCamera3RegularChannel
          (QCamera3RegularChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef10 *param_4,FuncDef11 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,cam_stream_type_t param_9,ulonglong param_10,
          QCamera3Channel *param_11,uint param_12)

{
  void *pvVar1;
  FuncDef10 *unaff_r7;
  FuncDef11 *in_lr;
  
  pvVar1 = (void *)_QCamera3RegularChannel
                             (this,param_1,param_2,param_3,unaff_r7,in_lr,
                              (cam_padding_info_t *)param_4,param_5,(camera3_stream *)param_6,
                              (cam_stream_type_t)param_7,CONCAT44(param_9,param_8),
                              (QCamera3Channel *)param_10,param_10._4_4_);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

