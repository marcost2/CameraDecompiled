
/* qcamera::QCamera2HardwareInterface::msg_type_enabled(camera_device*, int) */

int qcamera::QCamera2HardwareInterface::msg_type_enabled(camera_device *param_1,int param_2)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  qcamera_api_result_t aqStack332 [12];
  int local_140;
  int local_13c;
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_20;
  
  piVar3 = *(int **)(DAT_000ad924 + 0xad7c8);
  local_20 = *piVar3;
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  local_13c = param_2;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_000ad928 + 0xad7e4));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  puVar4 = *(uint **)(DAT_000ad92c + 0xad7f2);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ad930 + 0xad802) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ad934 + 0xad810) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ad938 + 0xad90e);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ad93c + 0xad81e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ad944 + 0xad886,0x259,DAT_000ad940 + 0xad87e);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000ad93c + 0xad81e);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ad94c + 0xad83c,0x25c,DAT_000ad948 + 0xad830,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),5,&local_13c);
      if (iVar1 == 0) {
        waitAPIResult(this,5,aqStack332);
        iVar1 = local_140;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ad954 + 0xad8b4,0x266,DAT_000ad950 + 0xad8a8,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ad958 + 0xad8c4) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ad95c + 0xad8d2) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_138);
  if (local_138[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_138[0] + *(int *)(*local_138[0] + -0xc)));
  }
  if (*piVar3 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

