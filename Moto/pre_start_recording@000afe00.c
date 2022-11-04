
/* qcamera::QCamera2HardwareInterface::pre_start_recording(camera_device*) */

int qcamera::QCamera2HardwareInterface::pre_start_recording(camera_device *param_1)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int local_30 [4];
  int local_20;
  
  piVar3 = *(int **)(DAT_000aff30 + 0xafe0e);
  local_20 = *piVar3;
  puVar4 = *(uint **)(DAT_000aff34 + 0xafe1c);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000aff38 + 0xafe2c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000aff3c + 0xafe3a) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000aff40 + 0xaff1c);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000aff44 + 0xafe48) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000aff4c + 0xafeb0,0x3af,DAT_000aff48 + 0xafea8);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000aff44 + 0xafe48);
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000aff54 + 0xafe66,0x3b3,DAT_000aff50 + 0xafe5a,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x12,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,0x12,(qcamera_api_result_t *)local_30);
        iVar1 = local_30[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000aff5c + 0xafeda,0x3bc,DAT_000aff58 + 0xafed2);
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000aff60 + 0xafeea) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000aff64 + 0xafef8) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar3 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

