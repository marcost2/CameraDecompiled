
/* qcamera::QCamera2HardwareInterface::preview_raw_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::preview_raw_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  mm_camera_buf_def *pmVar5;
  uint *puVar6;
  int iVar7;
  char acStack132 [92];
  int local_28;
  
  piVar4 = *(int **)(DAT_000dc000 + 0xdbe96);
  local_28 = *piVar4;
  puVar6 = *(uint **)(DAT_000dc004 + 0xdbea0);
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_000dc008 + 0xdbeb0) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dc00c + 0xdbec0) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000dc010 + 0xdbfea);
    }
  }
  iVar7 = *(int *)(DAT_000dc014 + 0xdbece);
  piVar1 = *(int **)(iVar7 + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log(1,3,DAT_000dc01c + 0xdbeea,0x854,DAT_000dc018 + 0xdbee2);
  }
  if (param_3 != (void *)0x0) {
    piVar1 = *(int **)((int)param_3 + 0x60);
  }
  if ((param_3 == (void *)0x0 || piVar1 == (int *)0x0) || (*piVar1 != *(int *)param_1)) {
    if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000dc024 + 0xdbf12,0x85c,DAT_000dc020 + 0xdbf0a);
    }
    free(param_1);
    goto LAB_000dbf1a;
  }
  pmVar5 = *(mm_camera_buf_def **)(param_1 + 0x10);
  if (pmVar5 != (mm_camera_buf_def *)0x0) {
    iVar3 = DAT_000dc02c + 0xdbf64;
    property_get(DAT_000dc028 + 0xdbf66,acStack132);
    iVar2 = atoi(acStack132);
    property_get(DAT_000dc030 + 0xdbf7c,acStack132,iVar3);
    if (iVar2 < 1) {
      iVar2 = atoi(acStack132);
      iVar3 = QCameraParametersIntf::getRecordingHintValue
                        ((QCameraParametersIntf *)((int)param_3 + 0x4ac));
      if ((0 < iVar2) && (iVar3 != 0)) goto LAB_000dbf9c;
    }
    else {
LAB_000dbf9c:
      dumpFrameToFile((QCamera2HardwareInterface *)param_3,param_2,pmVar5,0x10,(char *)0x0);
    }
    (**(code **)(*(int *)param_2 + 0x10))(param_2,*(undefined4 *)(pmVar5 + 0xc));
  }
  free(param_1);
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000dc038 + 0xdbfda,0x871,DAT_000dc034 + 0xdbfd2);
  }
LAB_000dbf1a:
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_000dc03c + 0xdbf28) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dc040 + 0xdbf36) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar4 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

