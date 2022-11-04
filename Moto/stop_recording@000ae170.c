
/* qcamera::QCamera2HardwareInterface::stop_recording(camera_device*) */

void qcamera::QCamera2HardwareInterface::stop_recording(camera_device *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  QCamera2HardwareInterface *this;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  qcamera_api_result_t aqStack328 [16];
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_20;
  
  piVar5 = *(int **)(DAT_000ae2cc + 0xae17e);
  local_20 = *piVar5;
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_000ae2d0 + 0xae19a));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  puVar6 = *(uint **)(DAT_000ae2d4 + 0xae1a8);
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_000ae2d8 + 0xae1b8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae2dc + 0xae1c6) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ae2e0 + 0xae2b8);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ae2e4 + 0xae1d4) + 0x20) == 0) goto LAB_000ae262;
    uVar2 = 1;
    uVar3 = 0x406;
    iVar4 = DAT_000ae2e8 + 0xae234;
    iVar1 = DAT_000ae2ec + 0xae23c;
  }
  else {
    iVar4 = *(int *)(DAT_000ae2e4 + 0xae1d4);
    if (*(int *)(iVar4 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000ae2f4 + 0xae1f2,0x40a,DAT_000ae2f0 + 0xae1e6,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if ((this[0x54c] != (QCamera2HardwareInterface)0x0) &&
       (iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x14,(void *)0x0)
       , iVar1 == 0)) {
      waitAPIResult(this,0x14,aqStack328);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar4 + 0x34) == 0) goto LAB_000ae262;
    uVar2 = 6;
    uVar3 = 0x413;
    iVar4 = DAT_000ae2f8 + 0xae256;
    iVar1 = DAT_000ae2fc + 0xae260;
  }
  mm_camera_debug_log(1,uVar2,iVar1,uVar3,iVar4);
LAB_000ae262:
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_000ae300 + 0xae270) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae304 + 0xae27e) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_138);
  if (local_138[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_138[0] + *(int *)(*local_138[0] + -0xc)));
  }
  if (*piVar5 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

