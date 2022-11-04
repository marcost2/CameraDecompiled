
/* qcamera::QCamera2HardwareInterface::cancel_picture(camera_device*) */

int qcamera::QCamera2HardwareInterface::cancel_picture(camera_device *param_1)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int local_148 [4];
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_20;
  
  piVar3 = *(int **)(DAT_000aee38 + 0xaecda);
  local_20 = *piVar3;
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_000aee3c + 0xaecf6));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  puVar4 = *(uint **)(DAT_000aee40 + 0xaed04);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000aee44 + 0xaed14) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000aee48 + 0xaed22) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000aee4c + 0xaee22);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000aee50 + 0xaed30) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000aee58 + 0xaed98,0x568,DAT_000aee54 + 0xaed90);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000aee50 + 0xaed30);
    if (*(int *)(iVar2 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000aee60 + 0xaed4e,0x56c,DAT_000aee5c + 0xaed42,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x1a,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,0x1a,(qcamera_api_result_t *)local_148);
        iVar1 = local_148[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000aee68 + 0xaedc8,0x575,DAT_000aee64 + 0xaedba,
                          *(undefined4 *)(this + 0x5c),iVar1);
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000aee6c + 0xaedd8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000aee70 + 0xaede6) + 1) << 0x1d) < 0) {
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

