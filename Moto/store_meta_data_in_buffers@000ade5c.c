
/* qcamera::QCamera2HardwareInterface::store_meta_data_in_buffers(camera_device*, int) */

int qcamera::QCamera2HardwareInterface::store_meta_data_in_buffers
              (camera_device *param_1,int param_2)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  int local_14c [4];
  int local_13c;
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_1c;
  
  piVar3 = *(int **)(DAT_000adf60 + 0xade6c);
  local_1c = *piVar3;
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  local_13c = param_2;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_000adf64 + 0xade88));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000adf68 + 0xade98) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000adf70 + 0xadf00,0x333,DAT_000adf6c + 0xadef8);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000adf68 + 0xade98);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000adf78 + 0xadeb6,0x336,DAT_000adf74 + 0xadeaa,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x11,&local_13c);
      if (iVar1 == 0) {
        waitAPIResult(this,0x11,(qcamera_api_result_t *)local_14c);
        iVar1 = local_14c[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000adf80 + 0xadf2e,0x340,DAT_000adf7c + 0xadf22,
                          *(undefined4 *)(this + 0x5c));
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

