
/* qcamera::QCamera2HardwareInterface::register_face_image(camera_device*, void*,
   cam_pp_offline_src_config_t*) */

int qcamera::QCamera2HardwareInterface::register_face_image
              (camera_device *param_1,void *param_2,cam_pp_offline_src_config_t *param_3)

{
  int iVar1;
  QCamera2HardwareInterface *this;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  qcamera_api_result_t aqStack56 [12];
  int local_2c;
  void *local_28;
  cam_pp_offline_src_config_t *pcStack36;
  int local_20;
  
  piVar3 = *(int **)(DAT_000b0c08 + 0xb0ade);
  local_20 = *piVar3;
  puVar4 = *(uint **)(DAT_000b0c0c + 0xb0aec);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000b0c10 + 0xb0afc) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b0c14 + 0xb0b0a) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b0c18 + 0xb0bf4);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000b0c1c + 0xb0b18) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b0c24 + 0xb0b84,0x76b,DAT_000b0c20 + 0xb0b7c);
    }
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(DAT_000b0c1c + 0xb0b18);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b0c2c + 0xb0b36,0x76e,DAT_000b0c28 + 0xb0b2a,
                          *(undefined4 *)(this + 0x5c));
    }
    local_28 = param_2;
    pcStack36 = param_3;
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] == (QCamera2HardwareInterface)0x0) {
      iVar1 = -0x20;
    }
    else {
      iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x20,&local_28);
      if (iVar1 == 0) {
        waitAPIResult(this,0x20,aqStack56);
        iVar1 = local_2c;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b0c34 + 0xb0bb2,0x77b,DAT_000b0c30 + 0xb0ba6,
                          *(undefined4 *)(this + 0x5c));
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000b0c38 + 0xb0bc2) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b0c3c + 0xb0bd0) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar3 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

