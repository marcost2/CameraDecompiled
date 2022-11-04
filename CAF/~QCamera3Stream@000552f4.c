
/* qcamera::QCamera3Stream::~QCamera3Stream() */

void __thiscall
qcamera::QCamera3Stream::_QCamera3Stream
          (QCamera3Stream *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_padding_info_t *param_4,QCamera3Channel *param_5)

{
  void *pvVar1;
  cam_padding_info_t *unaff_r7;
  QCamera3Channel *in_lr;
  
  pvVar1 = (void *)_QCamera3Stream(this,param_1,param_2,param_3,unaff_r7,in_lr);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

