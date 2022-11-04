
/* qcamera::QCamera2HardwareInterface::cancel_auto_focus(camera_device*) */

int qcamera::QCamera2HardwareInterface::cancel_auto_focus(camera_device *param_1)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int local_148 [4];
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_20;
  
  piVar3 = *(int **)(DAT_000ae8d4 + 0xae77a);
  local_20 = *piVar3;
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_000ae8d8 + 0xae796));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  puVar4 = *(uint **)(DAT_000ae8dc + 0xae7a4);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ae8e0 + 0xae7b4) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae8e4 + 0xae7c2) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ae8e8 + 0xae8be);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ae8ec + 0xae7d0) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ae8f4 + 0xae838,0x49d,DAT_000ae8f0 + 0xae830);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000ae8ec + 0xae7d0);
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000ae8fc + 0xae7ee,0x4a1,DAT_000ae8f8 + 0xae7e2,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x1c,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,0x1c,(qcamera_api_result_t *)local_148);
        iVar1 = local_148[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000ae904 + 0xae864,0x4aa,DAT_000ae900 + 0xae85a,iVar1);
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ae908 + 0xae874) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae90c + 0xae882) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_138);
  if (local_138[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_138[0] + *(int *)(*local_138[0] + -0xc)));
  }
  if (*piVar3 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

