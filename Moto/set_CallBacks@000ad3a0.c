
/* qcamera::QCamera2HardwareInterface::set_CallBacks(camera_device*, void (*)(int, int, int, void*),
   void (*)(int, camera_memory const*, unsigned int, camera_frame_metadata*, void*), void (*)(long
   long, int, camera_memory const*, unsigned int, void*), camera_memory* (*)(int, unsigned int,
   unsigned int, void*), void*) */

void qcamera::QCamera2HardwareInterface::set_CallBacks
               (camera_device *param_1,FuncDef80 *param_2,FuncDef81 *param_3,FuncDef82 *param_4,
               FuncDef83 *param_5,void *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  QCamera2HardwareInterface *this;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  qcamera_api_result_t aqStack76 [16];
  FuncDef80 *local_3c;
  FuncDef81 *pFStack56;
  FuncDef82 *pFStack52;
  FuncDef83 *pFStack48;
  void *local_2c;
  int local_28;
  
  piVar6 = *(int **)(DAT_000ad4d4 + 0xad3b4);
  local_28 = *piVar6;
  puVar4 = *(uint **)(DAT_000ad4d8 + 0xad3c2);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ad4dc + 0xad3ce) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ad4e0 + 0xad3dc) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000ad4e4 + 0xad4be);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000ad4e8 + 0xad468) + 0x20) == 0) goto LAB_000ad482;
    uVar2 = 1;
    uVar3 = 0x1ea;
    iVar5 = DAT_000ad4ec + 0xad478;
    iVar1 = DAT_000ad4f0 + 0xad480;
  }
  else {
    iVar5 = *(int *)(DAT_000ad4f4 + 0xad3f0);
    if (*(int *)(iVar5 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ad4fc + 0xad40c,0x1ed,DAT_000ad4f8 + 0xad400,
                          *(undefined4 *)(this + 0x5c));
    }
    local_2c = param_6;
    pFStack48 = param_5;
    local_3c = param_2;
    pFStack56 = param_3;
    pFStack52 = param_4;
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if ((this[0x54c] != (QCamera2HardwareInterface)0x0) &&
       (iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),2,&local_3c),
       iVar1 == 0)) {
      waitAPIResult(this,2,aqStack76);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar5 + 0x2c) == 0) goto LAB_000ad482;
    uVar3 = 0x1fd;
    iVar5 = DAT_000ad500 + 0xad456;
    uVar2 = 4;
    iVar1 = DAT_000ad504 + 0xad462;
  }
  mm_camera_debug_log(1,uVar2,iVar1,uVar3,iVar5);
LAB_000ad482:
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000ad508 + 0xad48e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ad50c + 0xad49c) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar6 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

