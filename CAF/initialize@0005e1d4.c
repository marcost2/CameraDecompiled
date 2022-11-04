
/* qcamera::QCamera3SupportChannel::initialize(cam_is_type_t) */

uint qcamera::QCamera3SupportChannel::initialize
               (camera3_device *param_1,camera3_callback_ops *param_2)

{
  uint uVar1;
  cam_is_type_t in_stack_ffffffdc;
  
  if ((*(int *)(param_1 + 0x90) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
    *(camera3_callback_ops **)(param_1 + 0x74) = param_2;
    uVar1 = QCamera3Channel::addStream
                      ((cam_stream_type_t)param_1,*(cam_format_t *)(param_1 + 0x9c),
                       SUB41(*(undefined4 *)(param_1 + 0xa0),0),*(cam_rotation_t *)(param_1 + 0x94),
                       (uchar)*(undefined4 *)(param_1 + 0x98),0x1200000001,in_stack_ffffffdc,
                       *(uint *)(param_1 + 0x68));
    if ((0x7fffffff < uVar1) && (*(int *)(*(int *)(DAT_0005e26c + 0x5e242) + 0x20) != 0)) {
      mm_camera_debug_log();
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_0005e260 + 0x5e1e8) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

