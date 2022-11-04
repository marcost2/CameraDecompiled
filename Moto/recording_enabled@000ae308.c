
/* qcamera::QCamera2HardwareInterface::recording_enabled(camera_device*) */

int qcamera::QCamera2HardwareInterface::recording_enabled(camera_device *param_1)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  qcamera_api_result_t aqStack48 [12];
  int local_24;
  int local_20;
  
  piVar3 = *(int **)(DAT_000ae43c + 0xae316);
  local_20 = *piVar3;
  puVar4 = *(uint **)(DAT_000ae440 + 0xae324);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ae444 + 0xae334) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae448 + 0xae342) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ae44c + 0xae428);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ae450 + 0xae350) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ae458 + 0xae3b8,0x428,DAT_000ae454 + 0xae3b0);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000ae450 + 0xae350);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ae460 + 0xae36e,0x42b,DAT_000ae45c + 0xae362,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x15,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,0x15,aqStack48);
        iVar1 = local_24;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ae468 + 0xae3e6,0x434,DAT_000ae464 + 0xae3da,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ae46c + 0xae3f6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae470 + 0xae404) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar3 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

