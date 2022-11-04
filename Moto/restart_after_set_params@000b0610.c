
/* qcamera::QCamera2HardwareInterface::restart_after_set_params(camera_device*) */

int qcamera::QCamera2HardwareInterface::restart_after_set_params(camera_device *param_1)

{
  int *piVar1;
  int iVar2;
  QCamera2HardwareInterface *this;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int local_30 [4];
  int local_20;
  
  piVar4 = *(int **)(DAT_000b077c + 0xb061e);
  local_20 = *piVar4;
  puVar5 = *(uint **)(DAT_000b0780 + 0xb062c);
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000b0784 + 0xb063c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b0788 + 0xb064c) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b078c + 0xb0768);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000b0790 + 0xb065c) + 0x20) == 0) {
      iVar2 = -0x16;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000b0798 + 0xb06d2,0x62c,DAT_000b0794 + 0xb06ca);
      iVar2 = -0x16;
    }
  }
  else {
    iVar3 = *(int *)(DAT_000b0790 + 0xb065c);
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b07a0 + 0xb067a,0x62f,DAT_000b079c + 0xb066e,
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
        iVar2 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),9,(void *)0x0);
        if (iVar2 == 0) {
          waitAPIResult(this,9,(qcamera_api_result_t *)local_30);
          iVar2 = local_30[0];
        }
      }
    }
    else {
      if (*(int *)(iVar3 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000b07a8 + 0xb06f2,0x63a,DAT_000b07a4 + 0xb06ea);
      }
      iVar2 = -0x26;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b07b0 + 0xb0726,0x63f,DAT_000b07ac + 0xb071a,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000b07b4 + 0xb0736) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b07b8 + 0xb0744) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar4 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

