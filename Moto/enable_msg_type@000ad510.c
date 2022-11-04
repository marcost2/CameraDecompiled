
/* qcamera::QCamera2HardwareInterface::enable_msg_type(camera_device*, int) */

void qcamera::QCamera2HardwareInterface::enable_msg_type(camera_device *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  QCamera2HardwareInterface *this;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  qcamera_api_result_t aqStack48 [16];
  int local_20;
  int local_1c;
  
  piVar6 = *(int **)(DAT_000ad62c + 0xad51e);
  local_1c = *piVar6;
  puVar5 = *(uint **)(DAT_000ad630 + 0xad52e);
  local_20 = param_2;
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000ad634 + 0xad53a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ad638 + 0xad548) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ad63c + 0xad618);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ad640 + 0xad556) + 0x20) == 0) goto LAB_000ad5dc;
    uVar2 = 1;
    uVar3 = 0x212;
    iVar4 = DAT_000ad644 + 0xad5d2;
    iVar1 = DAT_000ad648 + 0xad5da;
  }
  else {
    iVar4 = *(int *)(DAT_000ad640 + 0xad556);
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ad650 + 0xad574,0x215,DAT_000ad64c + 0xad568,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if ((this[0x54c] != (QCamera2HardwareInterface)0x0) &&
       (iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),3,&local_20),
       iVar1 == 0)) {
      waitAPIResult(this,3,aqStack48);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar4 + 0x2c) == 0) goto LAB_000ad5dc;
    uVar3 = 0x21e;
    iVar4 = DAT_000ad654 + 0xad5b4;
    uVar2 = 4;
    iVar1 = DAT_000ad658 + 0xad5c0;
  }
  mm_camera_debug_log(1,uVar2,iVar1,uVar3,iVar4);
LAB_000ad5dc:
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000ad65c + 0xad5e8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ad660 + 0xad5f6) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar6 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

