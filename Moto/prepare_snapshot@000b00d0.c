
/* qcamera::QCamera2HardwareInterface::prepare_snapshot(camera_device*) */

int qcamera::QCamera2HardwareInterface::prepare_snapshot(camera_device *param_1)

{
  QCamera2HardwareInterface *this;
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int local_30 [4];
  int local_20;
  
  piVar3 = *(int **)(DAT_000b0270 + 0xb00de);
  local_20 = *piVar3;
  puVar2 = *(uint **)(DAT_000b0274 + 0xb00ec);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000b0278 + 0xb00f8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b027c + 0xb0108) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b0280 + 0xb025c);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000b0284 + 0xb0192) + 0x20) == 0) {
      iVar1 = -0x16;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000b028c + 0xb01aa,0x793,DAT_000b0288 + 0xb01a2);
      iVar1 = -0x16;
    }
    goto LAB_000b021e;
  }
  if ((this[0xa9e] != (QCamera2HardwareInterface)0x0) &&
     (this[0x1bd8] != (QCamera2HardwareInterface)0x0)) {
    if (*(int *)(*(int *)(DAT_000b0290 + 0xb0128) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b0298 + 0xb0140,0x798,DAT_000b0294 + 0xb0138);
    }
    iVar1 = 0;
    goto LAB_000b021e;
  }
  iVar4 = *(int *)(DAT_000b029c + 0xb014c);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b02a4 + 0xb016c,0x79c,DAT_000b02a0 + 0xb0160,
                        *(undefined4 *)(this + 0x5c));
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
  iVar1 = QCameraParametersIntf::getFlashValue((QCameraParametersIntf *)(this + 0x4ac));
  if (iVar1 == 0) {
    this[0xaa8] = (QCamera2HardwareInterface)0x0;
LAB_000b01b8:
    iVar1 = QCameraParametersIntf::isChromaFlashEnabled((QCameraParametersIntf *)(this + 0x4ac));
    if (iVar1 != 0) goto LAB_000b01c0;
    iVar1 = 0;
  }
  else {
    if (this[0xaa8] == (QCamera2HardwareInterface)0x0) goto LAB_000b01b8;
LAB_000b01c0:
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x17,(void *)0x0);
      if (iVar1 == 0) {
        waitAPIResult(this,0x17,(qcamera_api_result_t *)local_30);
        iVar1 = local_30[0];
      }
    }
    this[0x1bd8] = (QCamera2HardwareInterface)0x1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b02ac + 0xb021c,0x7be,DAT_000b02a8 + 0xb0212,iVar1);
  }
LAB_000b021e:
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000b02b0 + 0xb022a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b02b4 + 0xb0238) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar3 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

