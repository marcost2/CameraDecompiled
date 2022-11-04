
/* qcamera::QCamera2HardwareInterface::send_command_restart(camera_device*, int, int, int) */

int qcamera::QCamera2HardwareInterface::send_command_restart
              (camera_device *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int *piVar2;
  uint *puVar3;
  int local_3c [4];
  int local_2c;
  int iStack40;
  int iStack36;
  int local_20;
  
  piVar2 = *(int **)(DAT_000b08e0 + 0xb07d0);
  local_20 = *piVar2;
  puVar3 = *(uint **)(DAT_000b08e4 + 0xb07de);
  if (1 < *puVar3) {
    if ((**(byte **)(DAT_000b08e8 + 0xb07ee) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b08ec + 0xb07fc) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b08f0 + 0xb08cc);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000b08f4 + 0xb083e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b08fc + 0xb0856,0x6ce,DAT_000b08f8 + 0xb084e);
    }
    iVar1 = -0x16;
  }
  else {
    local_2c = param_2;
    iStack40 = param_3;
    iStack36 = param_4;
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x29,&local_2c);
      if (iVar1 == 0) {
        waitAPIResult(this,0x29,(qcamera_api_result_t *)local_3c);
        iVar1 = local_3c[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(*(int *)(DAT_000b0900 + 0xb086e) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b0908 + 0xb088a,0x6df,DAT_000b0904 + 0xb087e,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar3) {
    if ((**(byte **)(DAT_000b090c + 0xb089a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b0910 + 0xb08a8) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar2 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

