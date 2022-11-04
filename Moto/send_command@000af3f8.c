
/* qcamera::QCamera2HardwareInterface::send_command(camera_device*, int, int, int) */

int qcamera::QCamera2HardwareInterface::send_command
              (camera_device *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int local_40 [4];
  int local_30;
  int iStack44;
  int iStack40;
  int local_24;
  
  piVar3 = *(int **)(DAT_000af538 + 0xaf40c);
  local_24 = *piVar3;
  puVar4 = *(uint **)(DAT_000af53c + 0xaf41a);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000af540 + 0xaf42a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000af544 + 0xaf438) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000af548 + 0xaf524);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000af54c + 0xaf446) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000af554 + 0xaf4b4,0x69e,DAT_000af550 + 0xaf4ac);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000af54c + 0xaf446);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000af55c + 0xaf464,0x6a1,DAT_000af558 + 0xaf458,
                          *(undefined4 *)(this + 0x5c));
    }
    local_30 = param_2;
    iStack44 = param_3;
    iStack40 = param_4;
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x1d,&local_30);
      if (iVar1 == 0) {
        waitAPIResult(this,0x1d,(qcamera_api_result_t *)local_40);
        iVar1 = local_40[0];
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000af564 + 0xaf4e2,0x6b0,DAT_000af560 + 0xaf4d6,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000af568 + 0xaf4f2) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000af56c + 0xaf500) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar3 == local_24) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

