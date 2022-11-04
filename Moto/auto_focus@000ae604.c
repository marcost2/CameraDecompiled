
/* qcamera::QCamera2HardwareInterface::auto_focus(camera_device*) */

int qcamera::QCamera2HardwareInterface::auto_focus(camera_device *param_1)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  int local_148 [4];
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_1c;
  
  piVar3 = *(int **)(DAT_000ae738 + 0xae612);
  local_1c = *piVar3;
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_000ae73c + 0xae62e));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  if (**(int **)(DAT_000ae740 + 0xae63c) != 0) {
    if ((**(byte **)(DAT_000ae744 + 0xae646) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae748 + 0xae654) + 1) << 0x1d) < 0) {
      atrace_int_body(DAT_000ae74c + 0xae730,1);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ae750 + 0xae662) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ae758 + 0xae6ca,0x475,DAT_000ae754 + 0xae6c2);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000ae750 + 0xae662);
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000ae760 + 0xae680,0x479,DAT_000ae75c + 0xae674,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x1b,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,0x1b,(qcamera_api_result_t *)local_148);
        iVar1 = local_148[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000ae768 + 0xae6f6,0x482,DAT_000ae764 + 0xae6ec,iVar1);
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_138);
  if (local_138[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_138[0] + *(int *)(*local_138[0] + -0xc)));
  }
  if (*piVar3 == local_1c) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

