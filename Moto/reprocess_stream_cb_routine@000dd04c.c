
/* qcamera::QCamera2HardwareInterface::reprocess_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::reprocess_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  int *piVar1;
  QCameraStream *extraout_r1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = *(uint **)(DAT_000dd13c + 0xdd05a);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000dd140 + 0xdd066) & 1) == 0) {
      atrace_setup();
      param_2 = extraout_r1;
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dd144 + 0xdd074) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000dd148 + 0xdd126,param_2);
    }
  }
  iVar3 = *(int *)(DAT_000dd14c + 0xdd080);
  piVar1 = *(int **)(iVar3 + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log(1,3,DAT_000dd154 + 0xdd098,0xb55,DAT_000dd150 + 0xdd090);
  }
  if (param_3 != (void *)0x0) {
    piVar1 = *(int **)((int)param_3 + 0x60);
  }
  if ((param_3 != (void *)0x0 && piVar1 != (int *)0x0) && (*piVar1 == *(int *)param_1)) {
    QCameraPostProcessor::processPPData((QCameraPostProcessor *)((int)param_3 + 0x550),param_1);
    if (*(int *)(iVar3 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000dd164 + 0xdd116,0xb62,DAT_000dd160 + 0xdd10e);
    }
  }
  else {
    if (*(int *)(iVar3 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000dd15c + 0xdd0be,0xb5a,DAT_000dd158 + 0xdd0b6);
    }
    free(param_1);
  }
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000dd168 + 0xdd0d2) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dd16c + 0xdd0e0) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

