
/* qcamera::QCamera2HardwareInterface::stopPreview(bool) */

undefined4 qcamera::QCamera2HardwareInterface::stopPreview(bool param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = (uint)param_1;
  piVar2 = *(int **)(DAT_000b4db0 + 0xb4c34);
  if (*piVar2 != 0) {
    if ((**(byte **)(DAT_000b4db4 + 0xb4c40) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b4db8 + 0xb4c50) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b4dbc + 0xb4da0);
    }
  }
  iVar3 = *(int *)(DAT_000b4dc0 + 0xb4c5e);
  if (*(int *)(iVar3 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000b4dc8 + 0xb4c76,0x1186,DAT_000b4dc4 + 0xb4c6e);
  }
  *(undefined4 *)(uVar1 + 0x1dc8) = 0xffffffff;
  *(undefined *)(uVar1 + 0xa9c) = 0;
  gettimeofday((timeval *)(uVar1 + 0x1ee0),(__timezone_ptr_t)0x0);
  *(undefined *)(uVar1 + 0x1f44) = 0;
  QCameraPerfLock::lock_acq((QCameraPerfLock *)(uVar1 + 0x8e0));
  MotMemThrottle::disable((MotMemThrottle *)(uVar1 + 0x1e28));
  if (*(int **)(uVar1 + 0x9d4) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9d4) + 0x18))();
  }
  if (*(int **)(uVar1 + 0x9b4) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9b4) + 0x18))();
  }
  if (*(int **)(uVar1 + 0x9bc) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9bc) + 0x18))();
  }
  if (*(int **)(uVar1 + 0x9c8) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9c8) + 0x18))();
  }
  QCameraCbNotifier::flushPreviewNotifications((QCameraCbNotifier *)(uVar1 + 0x854));
  if (*(int **)(uVar1 + 0x9b4) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9b4) + 4))();
    *(undefined4 *)(uVar1 + 0x9b4) = 0;
  }
  if (*(int **)(uVar1 + 0x9bc) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9bc) + 4))();
    *(undefined4 *)(uVar1 + 0x9bc) = 0;
  }
  if (*(int **)(uVar1 + 0x9c0) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9c0) + 4))();
    *(undefined4 *)(uVar1 + 0x9c0) = 0;
  }
  if (*(int **)(uVar1 + 0x9c4) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9c4) + 4))();
    *(undefined4 *)(uVar1 + 0x9c4) = 0;
  }
  if (*(int **)(uVar1 + 0x9d4) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9d4) + 4))();
    *(undefined4 *)(uVar1 + 0x9d4) = 0;
  }
  if (*(int **)(uVar1 + 0x9c8) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9c8) + 4))();
    *(undefined4 *)(uVar1 + 0x9c8) = 0;
  }
  QCameraPerfLock::lock_rel((QCameraPerfLock *)(uVar1 + 0x8e0));
  if (*(int *)(iVar3 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000b4dd0 + 0xb4d6e,0x11c8,DAT_000b4dcc + 0xb4d66);
  }
  if (*piVar2 != 0) {
    if ((**(byte **)(DAT_000b4dd4 + 0xb4d7a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b4dd8 + 0xb4d88) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return 0;
}

