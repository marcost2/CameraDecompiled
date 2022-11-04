
/* qcamera::QCamera2HardwareInterface::prepare_preview(camera_device*) */

int qcamera::QCamera2HardwareInterface::prepare_preview(camera_device *param_1)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int local_30 [4];
  int local_20;
  
  piVar3 = *(int **)(DAT_000afa60 + 0xaf93e);
  local_20 = *piVar3;
  puVar4 = *(uint **)(DAT_000afa64 + 0xaf94c);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000afa68 + 0xaf95c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000afa6c + 0xaf96a) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000afa70 + 0xafa4c);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000afa74 + 0xaf978) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000afa7c + 0xaf9e0,0x27e,DAT_000afa78 + 0xaf9d8);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000afa74 + 0xaf978);
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000afa84 + 0xaf996,0x282,DAT_000afa80 + 0xaf98a,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0xc,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,0xc,(qcamera_api_result_t *)local_30);
        iVar1 = local_30[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000afa8c + 0xafa0a,0x28c,DAT_000afa88 + 0xafa02);
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000afa90 + 0xafa1a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000afa94 + 0xafa28) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar3 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

