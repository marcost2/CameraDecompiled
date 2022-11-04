
/* qcamera::QCamera2HardwareInterface::restart_stop_preview(camera_device*) */

int qcamera::QCamera2HardwareInterface::restart_stop_preview(camera_device *param_1)

{
  int *piVar1;
  int iVar2;
  QCamera2HardwareInterface *this;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int local_30 [4];
  int local_20;
  
  piVar4 = *(int **)(DAT_000afdc0 + 0xafc62);
  local_20 = *piVar4;
  puVar5 = *(uint **)(DAT_000afdc4 + 0xafc70);
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000afdc8 + 720000) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000afdcc + 0xafc90) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000afdd0 + 0xafdac);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000afdd4 + 0xafca0) + 0x20) == 0) {
      iVar2 = -0x16;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000afddc + 0xafd16,900,DAT_000afdd8 + 0xafd0e);
      iVar2 = -0x16;
    }
  }
  else {
    iVar3 = *(int *)(DAT_000afdd4 + 0xafca0);
    if (*(int *)(iVar3 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000afde4 + 0xafcbe,0x387,DAT_000afde0 + 0xafcb2,
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
        iVar2 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x2b,(void *)0x0)
        ;
        if (iVar2 == 0) {
          waitAPIResult(this,0x2b,(qcamera_api_result_t *)local_30);
          iVar2 = local_30[0];
        }
      }
    }
    else {
      if (*(int *)(iVar3 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000afdec + 0xafd36,0x392,DAT_000afde8 + 0xafd2e);
      }
      iVar2 = -0x26;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar3 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000afdf4 + 0xafd6a,0x397,DAT_000afdf0 + 0xafd5e,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000afdf8 + 0xafd7a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000afdfc + 0xafd88) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar4 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

