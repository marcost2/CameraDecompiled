
/* qcamera::QCamera2HardwareInterface::commit_params(camera_device*) */

int qcamera::QCamera2HardwareInterface::commit_params(camera_device *param_1)

{
  int *piVar1;
  int iVar2;
  QCamera2HardwareInterface *this;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int local_30 [4];
  int local_20;
  
  piVar4 = *(int **)(DAT_000b05d0 + 0xb0472);
  local_20 = *piVar4;
  puVar5 = *(uint **)(DAT_000b05d4 + 0xb0480);
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000b05d8 + 0xb0490) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b05dc + 0xb04a0) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b05e0 + 0xb05bc);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000b05e4 + 0xb04b0) + 0x20) == 0) {
      iVar2 = -0x16;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000b05ec + 0xb0526,0x601,DAT_000b05e8 + 0xb051e);
      iVar2 = -0x16;
    }
  }
  else {
    iVar3 = *(int *)(DAT_000b05e4 + 0xb04b0);
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b05f4 + 0xb04ce,0x604,DAT_000b05f0 + 0xb04c2,
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
        iVar2 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),8,(void *)0x0);
        if (iVar2 == 0) {
          waitAPIResult(this,8,(qcamera_api_result_t *)local_30);
          iVar2 = local_30[0];
        }
      }
    }
    else {
      if (*(int *)(iVar3 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000b05fc + 0xb0546,0x60f,DAT_000b05f8 + 0xb053e);
      }
      iVar2 = -0x26;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b0604 + 0xb057a,0x614,DAT_000b0600 + 0xb056e,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000b0608 + 0xb058a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b060c + 0xb0598) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar4 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

