
/* qcamera::QCamera2HardwareInterface::nodisplay_preview_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::nodisplay_preview_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  undefined4 extraout_r1;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  mm_camera_buf_def *pmVar10;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  longlong lVar11;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong lStack64;
  undefined8 local_38;
  undefined8 uStack48;
  int local_28;
  
  piVar7 = *(int **)(DAT_000da790 + 0xda4aa);
  local_28 = *piVar7;
  puVar8 = *(uint **)(DAT_000da794 + 0xda4b4);
  if (1 < *puVar8) {
    if ((**(byte **)(DAT_000da798 + 0xda4c0) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000da79c + 0xda4d0) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000da7a0 + 0xda766);
    }
  }
  iVar9 = *(int *)(DAT_000da7a4 + 0xda4de);
  piVar3 = *(int **)(iVar9 + 0x28);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)mm_camera_debug_log(1,3,DAT_000da7ac + 0xda4fa,0x596,DAT_000da7a8 + 0xda4f2);
  }
  if (param_3 != (void *)0x0) {
    piVar3 = *(int **)((int)param_3 + 0x60);
  }
  if ((param_3 != (void *)0x0 && piVar3 != (int *)0x0) && (*piVar3 == *(int *)param_1)) {
    pmVar10 = *(mm_camera_buf_def **)(param_1 + 0x10);
    if (pmVar10 == (mm_camera_buf_def *)0x0) {
      if (*(int *)(iVar9 + 0x20) != 0) {
        uVar6 = 0x5a2;
        iVar9 = DAT_000da7b8 + 0xda726;
        iVar5 = DAT_000da7bc + 0xda72e;
        goto LAB_000da520;
      }
      goto LAB_000da524;
    }
    iVar5 = needProcessPreviewFrame((QCamera2HardwareInterface *)param_3,*(uint *)(pmVar10 + 0x1c));
    if (iVar5 == 0) {
      uVar6 = extraout_s0;
      if (*(int *)(iVar9 + 0x28) != 0) {
        uVar6 = mm_camera_debug_log(extraout_s0,1,3,DAT_000da7c4 + 0xda748,0x5a8,
                                    DAT_000da7c0 + 0xda740);
      }
      (**(code **)(*(int *)param_2 + 0x10))(uVar6,param_2,*(undefined4 *)(pmVar10 + 0xc));
      goto LAB_000da524;
    }
    iVar5 = needDebugFps();
    if (iVar5 != 0) {
      piVar3 = (int *)((int)param_3 + 0x1c08);
      *piVar3 = *piVar3 + 1;
      lVar11 = systemTime(extraout_s0_00,1);
      lVar2 = lVar11 - *(longlong *)((int)param_3 + 0x1c10);
      uVar4 = (uint)lVar2;
      iVar5 = (int)((ulonglong)lVar2 >> 0x20);
      if ((int)(iVar5 - (uint)(uVar4 < 0xee6b281)) < 0 ==
          (SBORROW4(iVar5,(uint)(uVar4 < 0xee6b281)) != false)) {
        __floatdidf(uVar4,iVar5);
        iVar5 = *piVar3;
        *(double *)((int)param_3 + 0x1c18) =
             ((double)(longlong)(iVar5 - *(int *)((int)param_3 + 0x1c0c)) * DAT_000da788) /
             (double)CONCAT44(extraout_r1,uVar4);
        if (*(int *)(iVar9 + 0x34) != 0) {
          mm_camera_debug_log(1,6,DAT_000da7cc + 0xda61e,0xd35,DAT_000da7c8 + 0xda616);
          iVar5 = *piVar3;
        }
        *(int *)(longlong *)((int)param_3 + 0x1c10) = (int)lVar11;
        *(int *)((int)param_3 + 0x1c14) = (int)((ulonglong)lVar11 >> 0x20);
        *(int *)((int)param_3 + 0x1c0c) = iVar5;
      }
    }
    piVar3 = *(int **)(pmVar10 + 0x210);
    if (piVar3 != (int *)0x0) {
      puVar1 = (undefined4 *)(pmVar10 + 0xc);
      uVar4 = (**(code **)(*piVar3 + 0x1c))(piVar3,*puVar1,0);
      if (uVar4 != 0) {
        dumpFrameToFile((QCamera2HardwareInterface *)param_3,param_2,pmVar10,1,(char *)0x0);
        iVar5 = needProcessPreviewFrame
                          ((QCamera2HardwareInterface *)param_3,*(uint *)(pmVar10 + 0x1c));
        uVar6 = extraout_s0_01;
        if (((iVar5 != 0) &&
            (iVar5 = needSendPreviewCallback((QCamera2HardwareInterface *)param_3),
            uVar6 = extraout_s0_02, iVar5 != 0)) &&
           (iVar5 = getRelatedCamSyncInfo(), uVar6 = extraout_s0_03, *(int *)(iVar5 + 8) != 1)) {
          uStack48 = 0;
          local_48 = 0;
          local_58 = 0;
          local_5c = 0x10;
          local_60 = 1;
          lStack64 = ZEXT48(puVar1) << 0x20;
          local_50 = (ulonglong)uVar4;
          local_38 = CONCAT44(*(undefined4 *)(DAT_000da7d0 + 0xda6b2),param_2);
          iVar5 = QCameraCbNotifier::notifyCallback
                            ((QCameraCbNotifier *)((int)param_3 + 0x854),
                             (qcamera_callback_argm_t *)&local_60);
          if (iVar5 == 0) goto LAB_000da6e8;
          uVar6 = extraout_s0_04;
          if (*(int *)(iVar9 + 0x20) != 0) {
            uVar6 = mm_camera_debug_log(extraout_s0_04,1,1,DAT_000da7d8 + 0xda6d8,0x5cd,
                                        DAT_000da7d4 + 0xda6d0);
          }
        }
        (**(code **)(*(int *)param_2 + 0x10))(uVar6,param_2,*puVar1);
      }
    }
LAB_000da6e8:
    free(param_1);
    if (*(int *)(iVar9 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000da7e0 + 0xda70c,0x5d5,DAT_000da7dc + 0xda704);
    }
  }
  else {
    if (*(int *)(iVar9 + 0x20) != 0) {
      uVar6 = 0x59b;
      iVar9 = DAT_000da7b0 + 0xda51a;
      iVar5 = DAT_000da7b4 + 0xda522;
LAB_000da520:
      mm_camera_debug_log(1,1,iVar5,uVar6,iVar9);
    }
LAB_000da524:
    free(param_1);
  }
  if (1 < *puVar8) {
    if ((**(byte **)(DAT_000da7e4 + 0xda536) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000da7e8 + 0xda546) + 1) << 0x1d) < 0) {
      if (*piVar7 == local_28) {
        atrace_end_body();
        return;
      }
      goto LAB_000da782;
    }
  }
  if (*piVar7 == local_28) {
    return;
  }
LAB_000da782:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

