
/* qcamera::QCamera2HardwareInterface::restart_start_preview(camera_device*) */

int qcamera::QCamera2HardwareInterface::restart_start_preview(camera_device *param_1)

{
  int *piVar1;
  int iVar2;
  QCamera2HardwareInterface *this;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int local_30 [4];
  int local_20;
  
  piVar4 = *(int **)(DAT_000afc0c + 0xafaa6);
  local_20 = *piVar4;
  puVar5 = *(uint **)(DAT_000afc10 + 0xafab4);
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000afc14 + 0xafac4) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000afc18 + 0xafad4) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000afc1c + 0xafbf8);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000afc20 + 0xafae4) + 0x20) == 0) {
      iVar2 = -0x16;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000afc28 + 0xafb5a,0x358,DAT_000afc24 + 0xafb52);
      iVar2 = -0x16;
    }
  }
  else {
    iVar3 = *(int *)(DAT_000afc20 + 0xafae4);
    if (*(int *)(iVar3 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000afc30 + 0xafb02,0x35b,DAT_000afc2c + 0xafaf6,
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
        iVar2 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x2a,(void *)0x0)
        ;
        if (iVar2 == 0) {
          waitAPIResult(this,0x2a,(qcamera_api_result_t *)local_30);
          iVar2 = local_30[0];
        }
      }
    }
    else {
      if (*(int *)(iVar3 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000afc38 + 0xafb7a,0x366,DAT_000afc34 + 0xafb72);
      }
      iVar2 = -0x26;
    }
    this[0x1be8] = (QCamera2HardwareInterface)0x0;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar3 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000afc40 + 0xafbb6,0x36c,DAT_000afc3c + 0xafbaa,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000afc44 + 0xafbc6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000afc48 + 0xafbd4) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar4 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

