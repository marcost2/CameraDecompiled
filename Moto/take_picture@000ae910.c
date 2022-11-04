
/* qcamera::QCamera2HardwareInterface::take_picture(camera_device*) */

int qcamera::QCamera2HardwareInterface::take_picture(camera_device *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  QCamera2HardwareInterface *this;
  QCameraParametersIntf *this_00;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int local_150 [4];
  int *local_140 [68];
  undefined4 local_30;
  undefined local_2c;
  int local_28;
  
  piVar7 = *(int **)(DAT_000aec54 + 0xae91e);
  local_28 = *piVar7;
  local_2c = 0;
  local_30 = 0;
  local_140[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_140,(char *)(DAT_000aec58 + 0xae93a));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_140);
  piVar8 = *(int **)(DAT_000aec5c + 0xae948);
  if (*piVar8 != 0) {
    if ((**(byte **)(DAT_000aec60 + 0xae956) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000aec64 + 0xae966) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000aec68 + 0xaec3e);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000aec6c + 0xae978) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000aec74 + 0xaead0,0x4e8,DAT_000aec70 + 0xaeac8);
    }
    iVar4 = -0x16;
    goto LAB_000aeb20;
  }
  iVar9 = *(int *)(DAT_000aec6c + 0xae978);
  if (*(int *)(iVar9 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000aec7c + 0xae99e,0x4ec,DAT_000aec78 + 0xae992,
                        *(undefined4 *)(this + 0x5c));
  }
  if (this[0xa9e] == (QCamera2HardwareInterface)0x0) {
    QCameraPerfLock::lock_acq((QCameraPerfLock *)(this + 0x8e0));
  }
  if (*(int *)(iVar9 + 0x28) != 0) {
    uVar1 = QCameraStateMachine::isRecording((QCameraStateMachine *)(this + 0x4dc));
    uVar2 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(this + 0x4ac));
    uVar3 = QCameraParametersIntf::isHDREnabled((QCameraParametersIntf *)(this + 0x4ac));
    mm_camera_debug_log(1,3,DAT_000aec84 + 0xae9f0,0x4f9,DAT_000aec80 + 0xae9de,uVar1,uVar2,uVar3,
                        this[0xa9e]);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar4 = QCameraParametersIntf::getNumOfRetroSnapshots(this_00);
  if (iVar4 == 0) {
LAB_000aea24:
    this[0x9da] = (QCamera2HardwareInterface)0x0;
    if (this[0x1bd8] == (QCamera2HardwareInterface)0x0) {
      prepare_snapshot(param_1);
    }
    piVar5 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo(this_00);
    if ((*piVar5 == 1) || (iVar4 = pre_take_picture(param_1), iVar4 == 0)) {
      if (*(int *)(iVar9 + 0x30) != 0) {
        mm_camera_debug_log(1,5,DAT_000aecb4 + 0xaea86,0x53c,DAT_000aecb0 + 0xaea7e);
      }
      pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
      if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
        iVar4 = -0x20;
      }
      else {
        iVar4 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x19,(void *)0x0)
        ;
        if (iVar4 == 0) {
          waitAPIResult(this,0x19,(qcamera_api_result_t *)local_150);
          iVar4 = local_150[0];
        }
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
      if (this[0xa9e] == (QCamera2HardwareInterface)0x0) {
        this[0x1bd8] = (QCamera2HardwareInterface)0x0;
      }
LAB_000aeaee:
      android::CameraHalWatchdog::GlobalWatchdog::start
                ((ulong)"s19PREVIEW_FORMATS_MAPE",15000,(char *)(DAT_000aecb8 + 0xaeb00));
      if (*(int *)(iVar9 + 0x34) == 0) goto LAB_000aeb20;
      uVar2 = 6;
      uVar1 = 0x54e;
      iVar9 = DAT_000aecbc + 0xaeb14;
      iVar6 = DAT_000aecc0 + 0xaeb1e;
    }
    else {
      if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000aeb20;
      uVar2 = 1;
      uVar1 = 0x533;
      iVar9 = DAT_000aeca8 + 0xaea62;
      iVar6 = DAT_000aecac + 0xaea6c;
    }
  }
  else {
    iVar4 = QCameraStateMachine::isRecording((QCameraStateMachine *)(this + 0x4dc));
    if ((((iVar4 != 0) || (iVar4 = QCameraParametersIntf::isZSLMode(this_00), iVar4 == 0)) ||
        (iVar4 = QCameraParametersIntf::isHDREnabled(this_00), iVar4 != 0)) ||
       (this[0xa9e] != (QCamera2HardwareInterface)0x0)) goto LAB_000aea24;
    *(undefined2 *)(this + 0x9da) = 1;
    if (*(int *)(iVar9 + 0x30) != 0) {
      mm_camera_debug_log(1,5,DAT_000aec8c + 0xaeb8e,0x509,DAT_000aec88 + 0xaeb86);
    }
    piVar5 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo(this_00);
    if ((*piVar5 == 1) || (iVar4 = pre_take_picture(param_1), iVar4 == 0)) {
      pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
      if ((this[0x54c] != (QCamera2HardwareInterface)0x0) &&
         (iVar4 = QCameraStateMachine::procAPI
                            ((QCameraStateMachine *)(this + 0x4dc),0x19,(void *)0x0), iVar4 == 0)) {
        if (*(int *)(iVar9 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000aec9c + 0xaebfa,0x51b,DAT_000aec98 + 0xaebf2);
        }
        waitAPIResult(this,0x19,(qcamera_api_result_t *)local_150);
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
      if (*(int *)(iVar9 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000aeca4 + 0xaec26,0x523,DAT_000aeca0 + 0xaec1e);
      }
      iVar4 = prepare_snapshot(param_1);
      goto LAB_000aeaee;
    }
    if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000aeb20;
    uVar2 = 1;
    uVar1 = 0x510;
    iVar9 = DAT_000aec90 + 0xaebba;
    iVar6 = DAT_000aec94 + 0xaebc4;
  }
  mm_camera_debug_log(1,uVar2,iVar6,uVar1,iVar9,iVar4);
LAB_000aeb20:
  if (*piVar8 != 0) {
    if ((**(byte **)(DAT_000aecc4 + 0xaeb2c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000aecc8 + 0xaeb3c) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_140);
  if (local_140[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_140[0] + *(int *)(*local_140[0] + -0xc)));
  }
  if (*piVar7 == local_28) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

