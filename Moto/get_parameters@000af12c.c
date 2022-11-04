
/* qcamera::QCamera2HardwareInterface::get_parameters(camera_device*) */

undefined4 qcamera::QCamera2HardwareInterface::get_parameters(camera_device *param_1)

{
  int iVar1;
  undefined4 uVar2;
  QCamera2HardwareInterface *this;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  qcamera_api_result_t aqStack48 [12];
  undefined4 local_24;
  int local_20;
  
  piVar4 = *(int **)(DAT_000af25c + 0xaf13a);
  local_20 = *piVar4;
  puVar5 = *(uint **)(DAT_000af260 + 0xaf148);
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000af264 + 0xaf158) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000af268 + 0xaf166) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000af26c + 0xaf248);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000af270 + 0xaf174) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000af278 + 0xaf1dc,0x654,DAT_000af274 + 0xaf1d4);
    }
    uVar2 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_000af270 + 0xaf174);
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000af280 + 0xaf192,0x657,DAT_000af27c + 0xaf186,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      uVar2 = 0;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),10,(void *)0x0);
      uVar2 = 0;
      if (iVar1 == 0) {
        waitAPIResult(this,10,aqStack48);
        uVar2 = local_24;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000af288 + 0xaf206,0x660,DAT_000af284 + 0xaf1fa,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000af28c + 0xaf216) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000af290 + 0xaf224) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar4 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

