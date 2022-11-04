
/* qcamera::QCamera3MetadataChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void qcamera::QCamera3MetadataChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(DAT_000a06bc + 0xa0612);
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_000a06c0 + 0xa061e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a06c4 + 0xa062c) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a06c8 + 0xa0660);
    }
  }
  if ((param_2 == (QCamera3Stream *)0x0) || (*(int *)(param_2 + 8) != 1)) {
    if (*(int *)(*(int *)(DAT_000a06cc + 0xa066c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a06d4 + 0xa0684,0x926,DAT_000a06d0 + 0xa067c);
    }
  }
  else if (*(code **)(param_1 + 0x60) != (code *)0x0) {
    (**(code **)(param_1 + 0x60))(param_2,0,0,0,*(undefined4 *)(param_1 + 4));
  }
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_000a06d8 + 0xa0692) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a06dc + 0xa06a0) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

