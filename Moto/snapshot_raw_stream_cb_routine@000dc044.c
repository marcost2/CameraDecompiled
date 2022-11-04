
/* qcamera::QCamera2HardwareInterface::snapshot_raw_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::snapshot_raw_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  mm_camera_buf_def *pmVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  char acStack132 [92];
  int local_28;
  
  piVar6 = *(int **)(DAT_000dc1b8 + 0xdc056);
  local_28 = *piVar6;
  puVar7 = *(uint **)(DAT_000dc1bc + 0xdc064);
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_000dc1c0 + 0xdc074) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dc1c4 + 0xdc084) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000dc1c8 + 0xdc1a4);
    }
  }
  iVar5 = *(int *)(DAT_000dc1cc + 0xdc092);
  piVar1 = *(int **)(iVar5 + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log(1,3,DAT_000dc1d4 + 0xdc0aa,0x888,DAT_000dc1d0 + 0xdc0a2);
  }
  if (param_3 != (void *)0x0) {
    piVar1 = *(int **)((int)param_3 + 0x60);
  }
  if ((param_3 != (void *)0x0 && piVar1 != (int *)0x0) && (*piVar1 == *(int *)param_1)) {
    property_get(DAT_000dc1e0 + 0xdc122,acStack132,DAT_000dc1e4 + 0xdc124);
    iVar2 = atoi(acStack132);
    if (*(uint *)(param_1 + 8) != 0) {
      uVar4 = 0;
      do {
        pmVar3 = *(mm_camera_buf_def **)(param_1 + uVar4 * 4 + 0x10);
        if (*(int *)(pmVar3 + 4) == 8) {
          if (param_2 != (QCameraStream *)0x0) {
            if (0 < iVar2) {
              dumpFrameToFile((QCamera2HardwareInterface *)param_3,param_2,pmVar3,0x10,(char *)0x0);
              pmVar3 = *(mm_camera_buf_def **)(param_1 + uVar4 * 4 + 0x10);
            }
            (**(code **)(*(int *)param_2 + 0x10))(param_2,*(undefined4 *)(pmVar3 + 0xc));
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 8));
    }
    free(param_1);
    if (*(int *)(iVar5 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000dc1ec + 0xdc194,0x8a8,DAT_000dc1e8 + 0xdc18c);
    }
  }
  else {
    if (*(int *)(iVar5 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000dc1dc + 0xdc0d0,0x890,DAT_000dc1d8 + 0xdc0c8);
    }
    free(param_1);
  }
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_000dc1f0 + 0xdc0e6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dc1f4 + 0xdc0f4) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar6 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

