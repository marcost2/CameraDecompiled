
/* qcamera::QCamera2HardwareInterface::put_parameters(camera_device*, char*) */

void qcamera::QCamera2HardwareInterface::put_parameters(camera_device *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  QCamera2HardwareInterface *this;
  int iVar5;
  int *piVar6;
  qcamera_api_result_t aqStack48 [16];
  int local_20;
  
  piVar6 = *(int **)(DAT_000af3c0 + 0xaf2a4);
  local_20 = *piVar6;
  puVar4 = *(uint **)(DAT_000af3c4 + 0xaf2b2);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000af3c8 + 0xaf2be) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000af3cc + 0xaf2cc) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000af3d0 + 0xaf39c);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000af3d4 + 0xaf2da) + 0x20) != 0) {
      uVar2 = 1;
      uVar3 = 0x677;
      iVar5 = DAT_000af3d8 + 0xaf356;
      iVar1 = DAT_000af3dc + 0xaf35e;
      goto LAB_000af35c;
    }
  }
  else {
    iVar5 = *(int *)(DAT_000af3d4 + 0xaf2da);
    if (*(int *)(iVar5 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000af3e4 + 0xaf2f8,0x67a,DAT_000af3e0 + 0xaf2ec,
                          *(undefined4 *)(this + 0x5c));
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if ((this[0x54c] != (QCamera2HardwareInterface)0x0) &&
       (iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0xb,param_2),
       iVar1 == 0)) {
      waitAPIResult(this,0xb,aqStack48);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar5 + 0x2c) != 0) {
      uVar3 = 0x682;
      iVar5 = DAT_000af3e8 + 0xaf338;
      uVar2 = 4;
      iVar1 = DAT_000af3ec + 0xaf344;
LAB_000af35c:
      mm_camera_debug_log(1,uVar2,iVar1,uVar3,iVar5);
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000af3f0 + 0xaf36c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000af3f4 + 0xaf37a) + 1) << 0x1d) < 0) {
      if (*piVar6 == local_20) {
        atrace_end_body();
        return;
      }
      goto LAB_000af3ba;
    }
  }
  if (*piVar6 == local_20) {
    return;
  }
LAB_000af3ba:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

