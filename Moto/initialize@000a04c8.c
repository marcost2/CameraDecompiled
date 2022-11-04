
/* qcamera::QCamera3MetadataChannel::initialize(cam_is_type_t) */

uint __thiscall
qcamera::QCamera3MetadataChannel::initialize(QCamera3MetadataChannel *this,cam_is_type_t param_1)

{
  uint uVar1;
  uint *puVar2;
  cam_is_type_t in_stack_ffffffdc;
  
  puVar2 = *(uint **)(DAT_000a05c4 + 0xa04d6);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000a05c8 + 0xa04e2) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a05cc + 0xa04f0) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a05d0 + 0xa05b2);
    }
  }
  if ((*(int *)(this + 0x94) == 0) && (*(int *)(this + 0x44) == 0)) {
    *(cam_is_type_t *)(this + 0x74) = param_1;
    uVar1 = QCamera3Channel::addStream
                      ((cam_stream_type_t)this,7,(cam_dimension_t)0x7c,
                       (cam_rotation_t)&PTR_bufDone_00117af8,'\x01',
                       (ulonglong)CONCAT14(this[0x78],1),in_stack_ffffffdc,*(uint *)(this + 0x68));
    if ((0x7fffffff < uVar1) && (*(int *)(*(int *)(DAT_000a05e0 + 0xa0588) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_000a05e8 + 0xa05a2,0x90f,DAT_000a05e4 + 0xa059a);
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000a05d4 + 0xa0506) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a05dc + 0xa051e,0x904,DAT_000a05d8 + 0xa0516);
    }
    uVar1 = 0xffffffea;
  }
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000a05ec + 0xa0530) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a05f0 + 0xa053e) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return uVar1;
}

