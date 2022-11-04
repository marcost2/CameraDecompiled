
/* qcamera::QCamera3PicChannel::~QCamera3PicChannel() */

void __thiscall
qcamera::QCamera3PicChannel::_QCamera3PicChannel
          (QCamera3PicChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef18 *param_4,FuncDef19 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,ulonglong param_9,bool param_10,bool param_11,
          QCamera3Channel *param_12,uint param_13)

{
  void *pvVar1;
  FuncDef18 *unaff_r7;
  FuncDef19 *in_lr;
  undefined3 in_stack_0000001d;
  undefined3 in_stack_00000021;
  
  pvVar1 = (void *)_QCamera3PicChannel(this,param_1,param_2,param_3,unaff_r7,in_lr,
                                       (cam_padding_info_t *)param_4,param_5,
                                       (camera3_stream *)param_6,CONCAT44(param_8,param_7),
                                       param_9._0_1_,param_9._4_1_,_param_10,_param_11);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

