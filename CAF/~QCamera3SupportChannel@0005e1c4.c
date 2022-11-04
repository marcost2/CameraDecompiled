
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* qcamera::QCamera3SupportChannel::~QCamera3SupportChannel() */

void __thiscall
qcamera::QCamera3SupportChannel::_QCamera3SupportChannel
          (QCamera3SupportChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_padding_info_t *param_4,ulonglong param_5,cam_stream_type_t param_6,
          cam_dimension_t *param_7,cam_format_t param_8,uchar param_9,
          cam_color_filter_arrangement_t param_10,void *param_11,uint param_12)

{
  void *pvVar1;
  cam_padding_info_t *unaff_r7;
  undefined4 in_lr;
  undefined3 in_stack_00000019;
  
  pvVar1 = (void *)_QCamera3SupportChannel
                             (this,param_1,param_2,param_3,unaff_r7,CONCAT44(param_4,in_lr),
                              (cam_stream_type_t)param_5,param_5._4_4_,param_6,(uchar)param_7,
                              param_8,_param_9,param_10);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

