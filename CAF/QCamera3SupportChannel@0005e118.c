
/* qcamera::QCamera3SupportChannel::QCamera3SupportChannel(unsigned int, unsigned int,
   mm_camera_ops_t*, cam_padding_info_t*, unsigned long long, cam_stream_type_t, cam_dimension_t*,
   cam_format_t, unsigned char, cam_color_filter_arrangement_t, void*, unsigned int) */

QCamera3SupportChannel * __thiscall
qcamera::QCamera3SupportChannel::QCamera3SupportChannel
          (QCamera3SupportChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_padding_info_t *param_4,ulonglong param_5,cam_stream_type_t param_6,
          cam_dimension_t *param_7,cam_format_t param_8,uchar param_9,
          cam_color_filter_arrangement_t param_10,void *param_11,uint param_12)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined3 in_stack_00000019;
  uint in_stack_ffffffdc;
  
  QCamera3Channel::QCamera3Channel
            ((QCamera3Channel *)this,param_1,param_2,param_3,(FuncDef6 *)0x0,(FuncDef7 *)0x0,param_4
             ,param_5 & 0xffffffff00000000 | (ulonglong)in_stack_ffffffdc,(void *)param_6,param_12);
  *(undefined4 *)(this + 0x90) = 0;
  *(int *)this = *(int *)(DAT_0005e188 + 0x5e148) + 8;
  uVar2 = *(undefined8 *)param_8;
  *(undefined4 *)(this + 0xa0) = _param_9;
  *(cam_dimension_t **)(this + 0x9c) = param_7;
  *(undefined8 *)(this + 0x94) = uVar2;
  if ((param_10 == 0 && param_7 == (cam_dimension_t *)0xb) && (param_11 != (void *)0x7)) {
    uVar1 = QCamera3Channel::getStreamDefaultFormat((QCamera3Channel *)param_11,1);
    *(undefined4 *)(this + 0xa0) = uVar1;
  }
  return this;
}

