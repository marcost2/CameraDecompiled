
/* qcamera::QCamera3SupportChannel::initialize(cam_is_type_t) */

uint __thiscall
qcamera::QCamera3SupportChannel::initialize(QCamera3SupportChannel *this,cam_is_type_t param_1)

{
  uint uVar1;
  cam_is_type_t in_stack_ffffffdc;
  
  if ((*(int *)(this + 0x94) == 0) && (*(int *)(this + 0x44) == 0)) {
    *(cam_is_type_t *)(this + 0x74) = param_1;
    uVar1 = QCamera3Channel::addStream
                      ((cam_stream_type_t)this,*(cam_format_t *)(this + 0xa0),
                       SUB41(*(undefined4 *)(this + 0xa4),0),*(cam_rotation_t *)(this + 0x98),
                       (uchar)*(undefined4 *)(this + 0x9c),0x1200000001,in_stack_ffffffdc,
                       *(uint *)(this + 0x68));
    if ((0x7fffffff < uVar1) && (*(int *)(*(int *)(DAT_000a6ea0 + 0xa6e76) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_000a6ea8 + 0xa6e90,0x170f,DAT_000a6ea4 + 0xa6e88);
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000a6e94 + 0xa6e1c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a6e9c + 0xa6e34,0x1706,DAT_000a6e98 + 0xa6e2c);
    }
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

