
/* qcamera::QCamera3YUVChannel::~QCamera3YUVChannel() */

void __thiscall
qcamera::QCamera3YUVChannel::_QCamera3YUVChannel
          (QCamera3YUVChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef16 *param_4,FuncDef17 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,cam_stream_type_t param_9,ulonglong param_10,
          QCamera3Channel *param_11)

{
  void *pvVar1;
  FuncDef16 *unaff_r7;
  FuncDef17 *in_lr;
  
  pvVar1 = (void *)_QCamera3YUVChannel(this,param_1,param_2,param_3,unaff_r7,in_lr,
                                       (cam_padding_info_t *)param_4,param_5,
                                       (camera3_stream *)param_6,(cam_stream_type_t)param_7,
                                       CONCAT44(param_9,param_8),(QCamera3Channel *)param_10);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

