
/* qcamera::QCamera2HardwareInterface::release(camera_device*) */

void qcamera::QCamera2HardwareInterface::release(camera_device *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  QCamera2HardwareInterface *this;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  qcamera_api_result_t aqStack328 [16];
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_1c;
  
  piVar6 = *(int **)(DAT_000af6c0 + 0xaf57e);
  local_1c = *piVar6;
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_000af6c4 + 0xaf59a));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  puVar5 = *(uint **)(DAT_000af6c8 + 0xaf5a8);
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000af6cc + 0xaf5b4) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000af6d0 + 0xaf5c2) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000af6d4 + 0xaf6aa);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000af6d8 + 0xaf5d0) + 0x20) == 0) goto LAB_000af656;
    uVar2 = 1;
    uVar3 = 0x6f7;
    iVar4 = DAT_000af6dc + 0xaf64c;
    iVar1 = DAT_000af6e0 + 0xaf654;
  }
  else {
    iVar4 = *(int *)(DAT_000af6d8 + 0xaf5d0);
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000af6e8 + 0xaf5ee,0x6fa,DAT_000af6e4 + 0xaf5e2,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if ((this[0x54c] != (QCamera2HardwareInterface)0x0) &&
       (iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x1e,(void *)0x0)
       , iVar1 == 0)) {
      waitAPIResult(this,0x1e,aqStack328);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar4 + 0x2c) == 0) goto LAB_000af656;
    uVar3 = 0x702;
    iVar4 = DAT_000af6ec + 0xaf62e;
    uVar2 = 4;
    iVar1 = DAT_000af6f0 + 0xaf63a;
  }
  mm_camera_debug_log(1,uVar2,iVar1,uVar3,iVar4);
LAB_000af656:
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000af6f4 + 0xaf662) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000af6f8 + 0xaf670) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_138);
  if (local_138[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_138[0] + *(int *)(*local_138[0] + -0xc)));
  }
  if (*piVar6 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

