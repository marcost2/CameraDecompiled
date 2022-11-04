
/* qcamera::QCamera2HardwareInterface::start_preview(camera_device*) */

int qcamera::QCamera2HardwareInterface::start_preview(camera_device *param_1)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  qcamera_sm_evt_enum_t qVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_150 [4];
  int *local_140 [68];
  undefined4 local_30;
  undefined local_2c;
  int local_24;
  
  piVar3 = *(int **)(DAT_000adaf4 + 0xad96e);
  local_24 = *piVar3;
  local_2c = 0;
  local_30 = 0;
  local_140[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_140,(char *)(DAT_000adaf8 + 0xad98a));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_140);
  piVar4 = *(int **)(DAT_000adafc + 0xad998);
  if (*piVar4 != 0) {
    if ((**(byte **)(DAT_000adb00 + 0xad9a6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000adb04 + 0xad9b6) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000adb08 + 0xadade);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000adb0c + 0xad9c6) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000adb14 + 0xada52,0x2a7,DAT_000adb10 + 0xada4a);
    }
    iVar1 = -0x16;
  }
  else {
    iVar5 = *(int *)(DAT_000adb0c + 0xad9c6);
    if (*(int *)(iVar5 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000adb1c + 0xad9e8,0x2ab,DAT_000adb18 + 0xad9dc,
                          *(undefined4 *)(this + 0x5c));
    }
    QCameraPerfLock::lock_rel_timed((QCameraPerfLock *)(this + 0x8e0));
    QCameraPerfLock::lock_acq((QCameraPerfLock *)(this + 0x8e0));
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    iVar1 = QCameraParametersIntf::isNoDisplayMode((QCameraParametersIntf *)(this + 0x4ac));
    qVar2 = 0xd;
    if (iVar1 != 0) {
      qVar2 = 0xe;
    }
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),qVar2,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,qVar2,(qcamera_api_result_t *)local_150);
        iVar1 = local_150[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    this[0x9d8] = (QCamera2HardwareInterface)0x1;
    if (*(int *)(iVar5 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000adb24 + 0xada86,0x2be,DAT_000adb20 + 0xada7c,iVar1);
    }
  }
  if (*piVar4 != 0) {
    if ((**(byte **)(DAT_000adb28 + 0xada94) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000adb2c + 0xadaa2) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_140);
  if (local_140[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_140[0] + *(int *)(*local_140[0] + -0xc)));
  }
  if (*piVar3 == local_24) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

