
/* qcamera::QCamera2HardwareInterface::preview_enabled(camera_device*) */

int qcamera::QCamera2HardwareInterface::preview_enabled(camera_device *param_1)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  qcamera_api_result_t aqStack48 [12];
  int local_24;
  int local_20;
  
  piVar3 = *(int **)(DAT_000ade24 + 0xadcf2);
  local_20 = *piVar3;
  puVar4 = *(uint **)(DAT_000ade28 + 0xadd00);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ade2c + 0xadd10) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ade30 + 0xadd1e) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ade34 + 0xade0e);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ade38 + 0xadd2c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ade40 + 0xadd94,0x305,DAT_000ade3c + 0xadd8c);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000ade38 + 0xadd2c);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ade48 + 0xadd4a,0x308,DAT_000ade44 + 0xadd3e,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x10,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,0x10,aqStack48);
        iVar1 = local_24;
      }
    }
    if (local_24 != 0) {
      this[0x549] = (QCamera2HardwareInterface)0x1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ade50 + 0xaddcc,0x317,DAT_000ade4c + 0xaddc0,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ade54 + 0xadddc) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ade58 + 0xaddea) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar3 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

