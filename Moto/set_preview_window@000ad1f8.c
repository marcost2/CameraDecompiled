
/* qcamera::QCamera2HardwareInterface::set_preview_window(camera_device*, preview_stream_ops*) */

int qcamera::QCamera2HardwareInterface::set_preview_window
              (camera_device *param_1,preview_stream_ops *param_2)

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
  
  piVar3 = *(int **)(DAT_000ad364 + 0xad208);
  local_20 = *piVar3;
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_000ad368 + 0xad224));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  puVar4 = *(uint **)(DAT_000ad36c + 0xad232);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ad370 + 0xad242) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ad374 + 0xad250) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ad378 + 0xad350);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ad37c + 0xad25e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ad384 + 0xad2c8,0x152,DAT_000ad380 + 0xad2c0);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000ad37c + 0xad25e);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ad38c + 0xad27e,0x155,DAT_000ad388 + 0xad270,
                          *(undefined4 *)(this + 0x5c),param_2);
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),1,param_2);
      if (iVar1 == 0) {
        waitAPIResult(this,1,(qcamera_api_result_t *)local_148);
        iVar1 = local_148[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ad394 + 0xad2f6,0x15f,DAT_000ad390 + 0xad2ea,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ad398 + 0xad306) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ad39c + 0xad314) + 1) << 0x1d) < 0) {
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

