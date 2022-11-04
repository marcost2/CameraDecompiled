
/* qcamera::QCamera2HardwareInterface::release_recording_frame(camera_device*, void const*) */

void qcamera::QCamera2HardwareInterface::release_recording_frame
               (camera_device *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  QCamera2HardwareInterface *this;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  qcamera_api_result_t aqStack48 [16];
  int local_20;
  
  piVar6 = *(int **)(DAT_000ae5c4 + 0xae484);
  local_20 = *piVar6;
  puVar5 = *(uint **)(DAT_000ae5c8 + 0xae492);
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000ae5cc + 0xae49e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae5d0 + 0xae4ac) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ae5d4 + 0xae5a0);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  piVar1 = (int *)(DAT_000ae5d8 + 0xae4ba);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*piVar1 + 0x20) != 0) {
      uVar3 = 1;
      uVar4 = 0x44c;
      iVar7 = DAT_000ae5dc + 0xae540;
      iVar2 = DAT_000ae5e0 + 0xae548;
      goto LAB_000ae560;
    }
  }
  else if (param_2 == (void *)0x0) {
    if (*(int *)(*piVar1 + 0x20) != 0) {
      uVar3 = 1;
      uVar4 = 0x450;
      iVar7 = DAT_000ae5e4 + 0xae55a;
      iVar2 = DAT_000ae5e8 + 0xae562;
      goto LAB_000ae560;
    }
  }
  else {
    iVar7 = *piVar1;
    if (*(int *)(iVar7 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ae5f0 + 0xae4e0,0x453,DAT_000ae5ec + 0xae4d4,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if ((this[0x54c] != (QCamera2HardwareInterface)0x0) &&
       (iVar2 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x16,param_2),
       iVar2 == 0)) {
      waitAPIResult(this,0x16,aqStack48);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar7 + 0x2c) != 0) {
      uVar4 = 0x45c;
      iVar7 = DAT_000ae5f4 + 0xae522;
      uVar3 = 4;
      iVar2 = DAT_000ae5f8 + 0xae52e;
LAB_000ae560:
      mm_camera_debug_log(1,uVar3,iVar2,uVar4,iVar7);
    }
  }
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000ae5fc + 0xae570) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ae600 + 0xae57e) + 1) << 0x1d) < 0) {
      if (*piVar6 == local_20) {
        atrace_end_body();
        return;
      }
      goto LAB_000ae5be;
    }
  }
  if (*piVar6 == local_20) {
    return;
  }
LAB_000ae5be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

