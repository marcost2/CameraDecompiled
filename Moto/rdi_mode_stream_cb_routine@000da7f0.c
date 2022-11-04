
/* qcamera::QCamera2HardwareInterface::rdi_mode_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::rdi_mode_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  uint *puVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined4 extraout_s0_06;
  undefined4 extraout_s0_07;
  undefined4 uVar11;
  longlong lVar12;
  mm_camera_buf_def *local_64;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  
  piVar8 = *(int **)(DAT_000dabac + 0xda802);
  local_28 = *piVar8;
  puVar9 = *(uint **)(DAT_000dabb0 + 0xda80c);
  if (1 < *puVar9) {
    if ((**(byte **)(DAT_000dabb4 + 0xda81c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dabb8 + 0xda82c) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000dac48 + 0xdac18);
    }
  }
  iVar10 = *(int *)(DAT_000dabbc + 0xda83a);
  piVar3 = *(int **)(iVar10 + 0x28);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)mm_camera_debug_log(1,3,DAT_000dabc4 + 0xda856,0x5ee,DAT_000dabc0 + 0xda84e);
  }
  if (param_3 != (void *)0x0) {
    piVar3 = *(int **)((int)param_3 + 0x60);
  }
  if ((param_3 != (void *)0x0 && piVar3 != (int *)0x0) && (*piVar3 == *(int *)param_1)) {
    local_64 = *(mm_camera_buf_def **)(param_1 + 0x10);
    if (local_64 == (mm_camera_buf_def *)0x0) {
      if (*(int *)(iVar10 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000dac50 + 0xdaa52,0x5f9,DAT_000dac4c + 0xdaa4a);
      }
    }
    else {
      iVar4 = needProcessPreviewFrame
                        ((QCamera2HardwareInterface *)param_3,*(uint *)(local_64 + 0x1c));
      if (iVar4 == 0) {
        uVar11 = extraout_s0;
        if (*(int *)(iVar10 + 0x20) != 0) {
          uVar11 = 0x5fd;
          iVar4 = DAT_000dac54 + 0xdaa68;
          iVar7 = DAT_000dac58 + 0xdaa70;
          uVar6 = extraout_s0;
LAB_000daa6e:
          uVar11 = mm_camera_debug_log(uVar6,1,1,iVar7,uVar11,iVar4);
        }
LAB_000daa72:
        uVar5 = *(uint *)(local_64 + 0xc);
      }
      else {
        iVar4 = needDebugFps();
        if (iVar4 != 0) {
          piVar3 = (int *)((int)param_3 + 0x1c08);
          *piVar3 = *piVar3 + 1;
          lVar12 = systemTime(extraout_s0_00,1);
          lVar2 = lVar12 - *(longlong *)((int)param_3 + 0x1c10);
          uVar5 = (uint)lVar2;
          iVar4 = (int)((ulonglong)lVar2 >> 0x20);
          if ((int)(iVar4 - (uint)(uVar5 < 0xee6b281)) < 0 ==
              (SBORROW4(iVar4,(uint)(uVar5 < 0xee6b281)) != false)) {
            __floatdidf(uVar5,iVar4);
            iVar4 = *piVar3;
            *(double *)((int)param_3 + 0x1c18) =
                 ((double)(longlong)(iVar4 - *(int *)((int)param_3 + 0x1c0c)) * DAT_000dac40) /
                 (double)CONCAT44(extraout_r1,uVar5);
            if (*(int *)(iVar10 + 0x34) != 0) {
              mm_camera_debug_log(1,6,DAT_000dac60 + 0xda974,0xd35,DAT_000dac5c + 0xda96c);
              iVar4 = *piVar3;
            }
            *(int *)(longlong *)((int)param_3 + 0x1c10) = (int)lVar12;
            *(int *)((int)param_3 + 0x1c14) = (int)((ulonglong)lVar12 >> 0x20);
            *(int *)((int)param_3 + 0x1c0c) = iVar4;
          }
        }
        iVar4 = QCameraParametersIntf::isSecureMode((QCameraParametersIntf *)((int)param_3 + 0x4ac))
        ;
        piVar3 = *(int **)(local_64 + 0x210);
        uVar6 = extraout_s0_01;
        uVar11 = extraout_s0_01;
        if (iVar4 == 0) {
          if (piVar3 == (int *)0x0) {
            if (*(int *)(iVar10 + 0x20) != 0) {
              uVar11 = 0x608;
              iVar4 = DAT_000dac64 + 0xdaba4;
              iVar7 = (int)&DAT_000dabac + DAT_000dac68;
              goto LAB_000daa6e;
            }
            goto LAB_000daa72;
          }
          uVar5 = (**(code **)(*piVar3 + 0x1c))(extraout_s0_01,piVar3,*(uint *)(local_64 + 0xc),0);
          if (uVar5 == 0) {
            uVar11 = extraout_s0_05;
            if (*(int *)(iVar10 + 0x20) != 0) {
              uVar6 = 0x625;
              iVar4 = DAT_000dac78 + 0xdabfc;
              iVar7 = DAT_000dac7c + 0xdac04;
LAB_000dac02:
              uVar11 = mm_camera_debug_log(uVar11,1,1,iVar7,uVar6,iVar4);
            }
          }
          else {
            (**(code **)(*piVar3 + 0x14))
                      (extraout_s0_05,piVar3,*(undefined4 *)(local_64 + 0xc),0xc0144d00);
            dumpFrameToFile((QCamera2HardwareInterface *)param_3,param_2,local_64,0x10,(char *)0x0);
            iVar4 = needProcessPreviewFrame
                              ((QCamera2HardwareInterface *)param_3,*(uint *)(local_64 + 0x1c));
            uVar11 = extraout_s0_06;
            if (((iVar4 != 0) && (*(int *)((int)param_3 + 0x4c0) != 0)) &&
               (iVar4 = msgTypeEnabledWithLock((QCamera2HardwareInterface *)param_3,0x10),
               uVar11 = extraout_s0_07, 0 < iVar4)) {
              local_58 = 0;
              local_60 = 0x1000000001;
              local_50 = (ulonglong)uVar5;
              goto LAB_000dab3e;
            }
            if (*(int *)(iVar10 + 0x20) != 0) {
              uVar6 = 0x620;
              iVar4 = DAT_000dac70 + 0xdabe2;
              iVar7 = DAT_000dac74 + 0xdabea;
              goto LAB_000dac02;
            }
          }
          uVar5 = *(uint *)(local_64 + 0xc);
        }
        else {
          if (piVar3 == (int *)0x0) {
            if (*(int *)(iVar10 + 0x20) != 0) {
              uVar11 = 0x62d;
              iVar4 = DAT_000dac80 + 0xdab86;
              iVar7 = DAT_000dac84 + 0xdab8e;
              goto LAB_000daa6e;
            }
            goto LAB_000daa72;
          }
          puVar1 = (uint *)(local_64 + 0xc);
          uVar6 = QCameraMemory::getFd((QCameraMemory *)piVar3,*puVar1);
          if (*(int *)(iVar10 + 0x2c) != 0) {
            mm_camera_debug_log(extraout_s0_02,1,4,DAT_000dac8c + 0xda9d0,0x633,
                                DAT_000dac88 + 0xda9c2,uVar6,*puVar1);
          }
          iVar4 = needProcessPreviewFrame
                            ((QCamera2HardwareInterface *)param_3,*(uint *)(local_64 + 0x1c));
          uVar11 = extraout_s0_03;
          if (((iVar4 != 0) && (*(int *)((int)param_3 + 0x4c0) != 0)) &&
             (iVar4 = msgTypeEnabledWithLock((QCamera2HardwareInterface *)param_3,0x10),
             uVar11 = extraout_s0_04, 0 < iVar4)) {
            local_50 = 0;
            local_60 = 0x1000000000;
            local_58 = CONCAT44(uVar6,0x100);
LAB_000dab3e:
            local_64 = local_64 + 0xc;
            local_30 = 0;
            local_40 = ZEXT48(local_64) << 0x20;
            local_48 = 0;
            local_38 = CONCAT44(*(undefined4 *)(DAT_000dac6c + 0xdab44),param_2);
            QCameraCbNotifier::notifyCallback
                      ((QCameraCbNotifier *)((int)param_3 + 0x854),
                       (qcamera_callback_argm_t *)&local_60);
            goto LAB_000daa80;
          }
          if (*(int *)(iVar10 + 0x28) != 0) {
            uVar11 = mm_camera_debug_log(uVar11,1,3,DAT_000dac94 + 0xdab6a,0x645,
                                         DAT_000dac90 + 0xdab62);
          }
          uVar5 = *puVar1;
        }
      }
      (**(code **)(*(int *)param_2 + 0x10))(uVar11,param_2,uVar5);
    }
LAB_000daa80:
    free(param_1);
    if (*(int *)(iVar10 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000dac9c + 0xdaaa4,0x64b,DAT_000dac98 + 0xdaa9c);
    }
  }
  else {
    if (*(int *)(iVar10 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000dabcc + 0xda87e,0x5f3,DAT_000dabc8 + 0xda876);
    }
    free(param_1);
  }
  if (1 < *puVar9) {
    if ((**(byte **)(DAT_000dac38 + 0xda894) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dac3c + 0xda8a4) + 1) << 0x1d) < 0) {
      if (*piVar8 == local_28) {
        atrace_end_body();
        return;
      }
      goto LAB_000dac34;
    }
  }
  if (*piVar8 == local_28) {
    return;
  }
LAB_000dac34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

