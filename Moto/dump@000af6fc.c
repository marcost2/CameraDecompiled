
/* qcamera::QCamera2HardwareInterface::dump(camera_device*, int) */

int qcamera::QCamera2HardwareInterface::dump(camera_device *param_1,int param_2)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  int local_194;
  int *local_190 [68];
  undefined4 local_80;
  undefined local_7c;
  int local_78 [23];
  int local_1c;
  
  piVar3 = *(int **)(DAT_000af81c + 0xaf70c);
  local_1c = *piVar3;
  local_7c = 0;
  local_80 = 0;
  local_190[0] = (int *)0x0;
  local_194 = param_2;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_190,(char *)(DAT_000af820 + 0xaf728));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_190);
  property_get(DAT_000af824 + 0xaf73c,local_78,DAT_000af828 + 0xaf73e);
  iVar1 = atoi((char *)local_78);
  **(int **)(DAT_000af82c + 0xaf74c) = iVar1;
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000af830 + 0xaf756) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000af838 + 0xaf7be,0x720,DAT_000af834 + 0xaf7b6);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000af830 + 0xaf756);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000af840 + 0xaf774,0x723,DAT_000af83c + 0xaf768,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x1f,&local_194);
      if (iVar1 == 0) {
        waitAPIResult(this,0x1f,(qcamera_api_result_t *)local_78);
        iVar1 = local_78[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000af848 + 0xaf7ec,0x72c,DAT_000af844 + 0xaf7e0,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_190);
  if (local_190[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_190[0] + *(int *)(*local_190[0] + -0xc)));
  }
  if (*piVar3 == local_1c) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

