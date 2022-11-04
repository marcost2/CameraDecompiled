
/* qcamera::QCamera2HardwareInterface::start_recording(camera_device*) */

int qcamera::QCamera2HardwareInterface::start_recording(camera_device *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  QCamera2HardwareInterface *this;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  int local_148 [4];
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_20;
  
  piVar7 = *(int **)(DAT_000ae12c + 0xadf92);
  local_20 = *piVar7;
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_000ae130 + 0xadfae));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  puVar8 = *(uint **)(DAT_000ae134 + 0xadfbc);
  if (1 < *puVar8) {
    if ((**(byte **)(DAT_000ae138 + 0xadfcc) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae13c + 0xadfdc) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ae140 + 0xae116);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ae144 + 0xadfec) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ae14c + 0xae08a,0x3d6,DAT_000ae148 + 0xae082);
    }
    iVar2 = -0x16;
  }
  else {
    iVar6 = *(int *)(DAT_000ae144 + 0xadfec);
    if (*(int *)(iVar6 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000ae154 + 0xae00c,0x3da,DAT_000ae150 + 0xae000,
                          *(undefined4 *)(this + 0x5c));
    }
    piVar1 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo
                              ((QCameraParametersIntf *)(this + 0x4ac));
    if ((*piVar1 == 1) || (iVar2 = pre_start_recording(param_1), iVar2 == 0)) {
      pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
      if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
        iVar2 = -0x20;
      }
      else {
        iVar2 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x13,(void *)0x0)
        ;
        if (iVar2 == 0) {
          waitAPIResult(this,0x13,(qcamera_api_result_t *)local_148);
          iVar2 = local_148[0];
        }
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
      this[0x9d9] = (QCamera2HardwareInterface)0x1;
      if (*(int *)(iVar6 + 0x34) == 0) goto LAB_000ae0be;
      uVar3 = 6;
      uVar5 = 0x3ee;
      iVar6 = DAT_000ae160 + 0xae0b2;
      iVar4 = DAT_000ae164 + 0xae0bc;
    }
    else {
      if (*(int *)(iVar6 + 0x20) == 0) goto LAB_000ae0be;
      uVar3 = 1;
      uVar5 = 0x3e0;
      iVar6 = DAT_000ae158 + 0xae038;
      iVar4 = DAT_000ae15c + 0xae042;
    }
    mm_camera_debug_log(1,uVar3,iVar4,uVar5,iVar6,iVar2);
  }
LAB_000ae0be:
  if (1 < *puVar8) {
    if ((**(byte **)(DAT_000ae168 + 0xae0cc) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae16c + 0xae0da) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_138);
  if (local_138[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_138[0] + *(int *)(*local_138[0] + -0xc)));
  }
  if (*piVar7 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

