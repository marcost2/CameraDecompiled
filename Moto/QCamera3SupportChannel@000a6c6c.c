
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
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  undefined3 in_stack_00000019;
  undefined4 in_stack_00000028;
  
  *(uint *)(this + 0x54) = param_2;
  this[0x50] = (QCamera3SupportChannel)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(uint *)(this + 0x48) = param_1;
  *(mm_camera_ops_t **)(this + 0x4c) = param_3;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(int *)this = *(int *)(DAT_000a6d28 + 0xa6c9e) + 8;
  *(uint *)(this + 4) = param_12;
  auVar1 = *(undefined (*) [16])param_4;
  uVar3 = *(undefined8 *)(param_4 + 0x14);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_4 + 0xc);
  *(undefined8 *)(this + 0x1c) = uVar3;
  *(longlong *)(this + 8) = SUB168(auVar1,0);
  *(longlong *)(this + 0x10) = SUB168(auVar1 >> 0x40,0);
  *(cam_stream_type_t *)(this + 0x6c) = param_6;
  *(undefined4 *)(this + 0x68) = param_5._4_4_;
  this[0x7c] = (QCamera3SupportChannel)0x1;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = in_stack_00000028;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  uVar2 = BSTLiveBokeh::createInstance();
  *(undefined4 *)(this + 0x90) = uVar2;
  *(undefined4 *)(this + 0x94) = 0;
  *(int *)this = *(int *)(DAT_000a6d2c + 0xa6cea) + 8;
  uVar3 = *(undefined8 *)param_8;
  *(undefined4 *)(this + 0xa4) = _param_9;
  *(cam_dimension_t **)(this + 0xa0) = param_7;
  *(undefined8 *)(this + 0x98) = uVar3;
  if ((param_10 == 0 && param_7 == (cam_dimension_t *)0xb) && (param_11 != (void *)0x7)) {
    *(undefined4 *)(this + 0xa4) = 7;
    return this;
  }
  return this;
}

