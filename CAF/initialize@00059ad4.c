
/* qcamera::QCamera3RawDumpChannel::initialize(cam_is_type_t) */

uint qcamera::QCamera3RawDumpChannel::initialize
               (camera3_device *param_1,camera3_callback_ops *param_2)

{
  uint uVar1;
  cam_is_type_t in_stack_ffffffdc;
  
  *(camera3_callback_ops **)(param_1 + 0x74) = param_2;
  uVar1 = QCamera3Channel::addStream
                    ((cam_stream_type_t)param_1,8,(cam_dimension_t)0x1c,
                     *(cam_rotation_t *)(param_1 + 0x90),(uchar)*(undefined4 *)(param_1 + 0x94),
                     (ulonglong)CONCAT14(param_1[0x78],1),in_stack_ffffffdc,
                     *(uint *)(param_1 + 0x68));
  if ((0x7fffffff < uVar1) && (*(int *)(*(int *)(DAT_00059b30 + 0x59b10) + 0x20) != 0)) {
    mm_camera_debug_log();
  }
  return uVar1;
}

