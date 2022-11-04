
/* qcamera::QCamera3RawChannel::streamCbRoutine(mm_camera_super_buf_t*, qcamera::QCamera3Stream*) */

void __thiscall
qcamera::QCamera3RawChannel::streamCbRoutine
          (QCamera3RawChannel *this,mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(DAT_000a09fc + 0xa0944);
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_000a0a00 + 0xa0950) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a0a04 + 0xa095e) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a0a08 + 0xa09e6);
    }
  }
  if (this[0x317c] != (QCamera3RawChannel)0x0) {
    dumpRawSnapshot(this,*(mm_camera_buf_def **)(param_1 + 0x10));
  }
  if (this[0x317d] != (QCamera3RawChannel)0x0) {
    if ((*(uint *)(QCameraParameters::FOCUS_MODES_MAP + *(int *)(this + 4) + 0x18) & 0xfffffffc) ==
        0x1c) {
      convertMipiToRaw16(this,*(mm_camera_buf_def **)(param_1 + 0x10));
    }
    else {
      convertLegacyToRaw16(this,*(mm_camera_buf_def **)(param_1 + 0x10));
    }
  }
  QCamera3StreamMem::cleanInvalidateCache
            ((QCamera3StreamMem *)(this + 0x6b0),*(uint *)(*(int *)(param_1 + 0x10) + 0xc));
  QCamera3ProcessingChannel::streamCbRoutine((QCamera3ProcessingChannel *)this,param_1,param_2);
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_000a0a0c + 0xa09c2) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a0a10 + 0xa09d0) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

