
/* qcamera::QCamera2HardwareInterface::raw_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::raw_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  int *piVar1;
  QCameraStream *extraout_r1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = *(uint **)(DAT_000dbb38 + 0xdba56);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000dbb3c + 0xdba62) & 1) == 0) {
      atrace_setup();
      param_2 = extraout_r1;
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dbb40 + 0xdba70) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000dbb44 + 0xdbb22,param_2);
    }
  }
  iVar3 = *(int *)(DAT_000dbb48 + 0xdba7c);
  piVar1 = *(int **)(iVar3 + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log(1,3,DAT_000dbb50 + 0xdba94,0x7d2,DAT_000dbb4c + 0xdba8c);
  }
  if (param_3 != (void *)0x0) {
    piVar1 = *(int **)((int)param_3 + 0x60);
  }
  if ((param_3 != (void *)0x0 && piVar1 != (int *)0x0) && (*piVar1 == *(int *)param_1)) {
    QCameraPostProcessor::processRawData((QCameraPostProcessor *)((int)param_3 + 0x550),param_1);
    if (*(int *)(iVar3 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000dbb60 + 0xdbb12,0x7de,DAT_000dbb5c + 0xdbb0a);
    }
  }
  else {
    if (*(int *)(iVar3 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000dbb58 + 0xdbaba,0x7d7,DAT_000dbb54 + 0xdbab2);
    }
    free(param_1);
  }
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000dbb64 + 0xdbace) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dbb68 + 0xdbadc) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

