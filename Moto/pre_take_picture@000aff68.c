
/* qcamera::QCamera2HardwareInterface::pre_take_picture(camera_device*) */

int qcamera::QCamera2HardwareInterface::pre_take_picture(camera_device *param_1)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int local_30 [4];
  int local_20;
  
  piVar3 = *(int **)(DAT_000b0098 + 0xaff76);
  local_20 = *piVar3;
  puVar4 = *(uint **)(DAT_000b009c + 0xaff84);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000b00a0 + 0xaff94) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b00a4 + 0xaffa2) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b00a8 + 0xb0084);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000b00ac + 0xaffb0) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b00b4 + 0xb0018,0x4c1,DAT_000b00b0 + 0xb0010);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000b00ac + 0xaffb0);
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b00bc + 0xaffce,0x4c5,DAT_000b00b8 + 0xaffc2,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x18,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,0x18,(qcamera_api_result_t *)local_30);
        iVar1 = local_30[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b00c4 + 0xb0042,0x4ce,DAT_000b00c0 + 0xb003a);
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000b00c8 + 0xb0052) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b00cc + 0xb0060) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar3 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

