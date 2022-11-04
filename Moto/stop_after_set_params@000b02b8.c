
/* qcamera::QCamera2HardwareInterface::stop_after_set_params(camera_device*) */

int qcamera::QCamera2HardwareInterface::stop_after_set_params(camera_device *param_1)

{
  int *piVar1;
  int iVar2;
  QCamera2HardwareInterface *this;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int local_30 [4];
  int local_20;
  
  piVar4 = *(int **)(DAT_000b0424 + 0xb02c6);
  local_20 = *piVar4;
  puVar5 = *(uint **)(DAT_000b0428 + 0xb02d4);
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000b042c + 0xb02e4) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b0430 + 0xb02f4) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b0434 + 0xb0410);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000b0438 + 0xb0304) + 0x20) == 0) {
      iVar2 = -0x16;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000b0440 + 0xb037a,0x5d6,DAT_000b043c + 0xb0372);
      iVar2 = -0x16;
    }
  }
  else {
    iVar3 = *(int *)(DAT_000b0438 + 0xb0304);
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b0448 + 0xb0322,0x5d9,DAT_000b0444 + 0xb0316,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    piVar1 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo
                              ((QCameraParametersIntf *)(this + 0x4ac));
    if (*piVar1 == 1) {
      if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
        iVar2 = -0x20;
      }
      else {
        iVar2 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),7,(void *)0x0);
        if (iVar2 == 0) {
          waitAPIResult(this,7,(qcamera_api_result_t *)local_30);
          iVar2 = local_30[0];
        }
      }
    }
    else {
      if (*(int *)(iVar3 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000b0450 + 0xb039a,0x5e4,DAT_000b044c + 0xb0392);
      }
      iVar2 = -0x26;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b0458 + 0xb03ce,0x5e9,DAT_000b0454 + 0xb03c2,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000b045c + 0xb03de) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b0460 + 0xb03ec) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar4 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

