
/* qcamera::QCamera3MetadataChannel::~QCamera3MetadataChannel() */

void __thiscall
qcamera::QCamera3MetadataChannel::_QCamera3MetadataChannel
          (QCamera3MetadataChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef12 *param_4,FuncDef13 *param_5,cam_padding_info_t *param_6,ulonglong param_7,
          void *param_8,uint param_9)

{
  void *pvVar1;
  FuncDef12 *unaff_r7;
  FuncDef13 *in_lr;
  
  pvVar1 = (void *)_QCamera3MetadataChannel
                             (this,param_1,param_2,param_3,unaff_r7,in_lr,
                              (cam_padding_info_t *)param_4,CONCAT44(param_6,param_5),
                              (void *)param_7,param_7._4_4_);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

