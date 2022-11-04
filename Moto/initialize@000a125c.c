
/* qcamera::QCamera3RawDumpChannel::initialize(cam_is_type_t) */

uint __thiscall
qcamera::QCamera3RawDumpChannel::initialize(QCamera3RawDumpChannel *this,cam_is_type_t param_1)

{
  uint uVar1;
  cam_is_type_t in_stack_ffffffdc;
  
  *(cam_is_type_t *)(this + 0x74) = param_1;
  uVar1 = QCamera3Channel::addStream
                    ((cam_stream_type_t)this,8,(cam_dimension_t)0x1c,
                     *(cam_rotation_t *)(this + 0x94),(uchar)*(undefined4 *)(this + 0x98),
                     (ulonglong)CONCAT14(this[0x78],1),in_stack_ffffffdc,*(uint *)(this + 0x68));
  if ((0x7fffffff < uVar1) && (*(int *)(*(int *)(DAT_000a12b8 + 0xa1298) + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_000a12c0 + 0xa12b0,0xb04,DAT_000a12bc + 0xa12a8);
  }
  return uVar1;
}

