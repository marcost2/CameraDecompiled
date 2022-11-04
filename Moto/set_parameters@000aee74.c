
/* qcamera::QCamera2HardwareInterface::set_parameters(camera_device*, char const*) */

int qcamera::QCamera2HardwareInterface::set_parameters(camera_device *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  QCamera2HardwareInterface *this;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int local_150 [4];
  int *local_140 [68];
  undefined4 local_30;
  undefined local_2c;
  int local_28;
  
  piVar5 = *(int **)(DAT_000af0d8 + 0xaee84);
  local_28 = *piVar5;
  local_2c = 0;
  local_30 = 0;
  local_140[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_140,(char *)(DAT_000af0dc + 0xaeea0));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_140);
  puVar4 = *(uint **)(DAT_000af0e0 + 0xaeeae);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000af0e4 + 0xaeeba) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000af0e8 + 0xaeeca) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000af0ec + 0xaf0c2);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000af0f0 + 0xaeeda) + 0x20) == 0) {
      iVar1 = -0x16;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000af0f8 + 0xaef46,0x592,DAT_000af0f4 + 0xaef3e);
      iVar1 = -0x16;
    }
    goto LAB_000af068;
  }
  iVar3 = *(int *)(DAT_000af0f0 + 0xaeeda);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000af100 + 0xaeef8,0x595,DAT_000af0fc + 0xaeeec,
                        *(undefined4 *)(this + 0x5c));
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
  if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
    iVar1 = -0x20;
  }
  else {
    iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),6,param_2);
    if (iVar1 == 0) {
      waitAPIResult(this,6,(qcamera_api_result_t *)local_150);
      iVar1 = local_150[0];
    }
  }
  piVar2 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo
                            ((QCameraParametersIntf *)(this + 0x4ac));
  if ((iVar1 == 0) && (*piVar2 != 1)) {
    if (this[0x1e0c] == (QCamera2HardwareInterface)0x0) {
LAB_000aefb2:
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000af110 + 0xaefca,0x5ab,DAT_000af10c + 0xaefc2);
      }
      if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
LAB_000af03e:
        iVar1 = -0x20;
      }
      else {
        iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),8,(void *)0x0);
        if (iVar1 == 0) {
          waitAPIResult(this,8,(qcamera_api_result_t *)local_150);
          iVar1 = local_150[0];
          if (local_150[0] == 0) {
            if (this[0x1e0c] == (QCamera2HardwareInterface)0x0) {
              iVar1 = 0;
            }
            else {
              if (*(int *)(iVar3 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000af118 + 0xaf014,0x5b4,DAT_000af114 + 0xaf00c);
              }
              if (this[0x54c] == (QCamera2HardwareInterface)0x0) goto LAB_000af03e;
              iVar1 = QCameraStateMachine::procAPI
                                ((QCameraStateMachine *)(this + 0x4dc),9,(void *)0x0);
              if (iVar1 == 0) {
                waitAPIResult(this,9,(qcamera_api_result_t *)local_150);
                iVar1 = local_150[0];
              }
            }
          }
        }
      }
    }
    else {
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000af108 + 0xaef86,0x5a2,DAT_000af104 + 0xaef7e);
      }
      if (this[0x54c] == (QCamera2HardwareInterface)0x0) goto LAB_000af03e;
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),7,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,7,(qcamera_api_result_t *)local_150);
        iVar1 = local_150[0];
        if (local_150[0] == 0) goto LAB_000aefb2;
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000af120 + 0xaf066,0x5be,DAT_000af11c + 0xaf058,
                        *(undefined4 *)(this + 0x5c),iVar1);
  }
LAB_000af068:
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000af124 + 0xaf074) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000af128 + 0xaf082) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_140);
  if (local_140[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_140[0] + *(int *)(*local_140[0] + -0xc)));
  }
  if (*piVar5 == local_28) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

