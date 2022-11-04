
/* qcamera::QCamera2HardwareInterface::disable_msg_type(camera_device*, int) */

void qcamera::QCamera2HardwareInterface::disable_msg_type(camera_device *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  QCamera2HardwareInterface *this;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  qcamera_api_result_t aqStack48 [16];
  int iStack32;
  int local_1c;
  
  piVar7 = *(int **)(DAT_000ad780 + 0xad672);
  local_1c = *piVar7;
  puVar6 = *(uint **)(DAT_000ad784 + 0xad682);
  iStack32 = param_2;
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_000ad788 + 0xad68e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ad78c + 0xad69c) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ad790 + 0xad76c);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ad794 + 0xad6aa) + 0x20) == 0) goto LAB_000ad730;
    uVar2 = 1;
    uVar4 = 0x233;
    iVar5 = DAT_000ad798 + 0xad726;
    puVar3 = (undefined *)(DAT_000ad79c + 0xad72e);
  }
  else {
    iVar5 = *(int *)(DAT_000ad794 + 0xad6aa);
    if (*(int *)(iVar5 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ad7a4 + 0xad6c8,0x236,DAT_000ad7a0 + 0xad6bc,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if ((this[0x54c] != (QCamera2HardwareInterface)0x0) &&
       (iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),4,&iStack32),
       iVar1 == 0)) {
      waitAPIResult(this,4,aqStack48);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar5 + 0x2c) == 0) goto LAB_000ad730;
    uVar4 = 0x23f;
    iVar5 = DAT_000ad7a8 + 0xad708;
    uVar2 = 4;
    puVar3 = &LAB_000ad714 + DAT_000ad7ac;
  }
  mm_camera_debug_log(1,uVar2,puVar3,uVar4,iVar5);
LAB_000ad730:
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_000ad7b0 + 0xad73c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ad7b4 + 0xad74a) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar7 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

