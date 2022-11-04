
/* qcamera::QCamera2HardwareInterface::capture_channel_cb_routine(mm_camera_super_buf_t*, void*) */

void qcamera::QCamera2HardwareInterface::capture_channel_cb_routine
               (mm_camera_super_buf_t *param_1,void *param_2)

{
  int *piVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  uint uVar3;
  QCameraStream *pQVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  mm_camera_buf_def *pmVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char acStack132 [92];
  int local_28;
  
  piVar13 = *(int **)(DAT_000d96cc + 0xd9424);
  local_28 = *piVar13;
  piVar12 = *(int **)(DAT_000d96d0 + 0xd9432);
  if (*piVar12 != 0) {
    if ((**(byte **)(DAT_000d96d4 + 0xd9442) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000d96d8 + 0xd9452) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000d96dc + 0xd96b8);
    }
  }
  iVar11 = *(int *)(DAT_000d96e0 + 0xd9460);
  piVar1 = *(int **)(iVar11 + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log(1,3,DAT_000d96e8 + 0xd9478,0x251,DAT_000d96e4 + 0xd9470);
  }
  if (param_2 != (void *)0x0) {
    piVar1 = *(int **)((int)param_2 + 0x60);
  }
  if ((param_2 != (void *)0x0 && piVar1 != (int *)0x0) && (*piVar1 == *(int *)param_1)) {
    kpi_capture_channel_cb_routine((QCamera2HardwareInterface *)param_2);
    piVar1 = *(int **)((int)param_2 + 0x9b8);
    if ((piVar1 == (int *)0x0) || (piVar1[4] != *(int *)(param_1 + 4))) {
      if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000d94a0;
      uVar5 = 1;
      uVar10 = 0x260;
      iVar11 = DAT_000d96f4 + 0xd958e;
      iVar8 = DAT_000d96f8 + 0xd9596;
    }
    else {
      __ptr = (undefined8 *)malloc(0x30);
      if (__ptr == (undefined8 *)0x0) {
        if (*(int *)(iVar11 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d9700 + 0xd95ae,0x268,DAT_000d96fc + 0xd95a6);
        }
        (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
        goto LAB_000d94a0;
      }
      uVar14 = *(undefined8 *)(param_1 + 8);
      puVar6 = (uint *)(param_1 + 8);
      uVar17 = *(undefined8 *)(param_1 + 0x10);
      uVar18 = *(undefined8 *)(param_1 + 0x18);
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      uVar16 = *(undefined8 *)(param_1 + 0x28);
      *__ptr = *(undefined8 *)param_1;
      __ptr[1] = uVar14;
      puVar2 = __ptr + 2;
      __ptr[4] = uVar15;
      __ptr[5] = uVar16;
      *puVar2 = uVar17;
      __ptr[3] = uVar18;
      uVar3 = *puVar6;
      if (uVar3 != 0) {
        puVar6 = *(uint **)(iVar11 + 0x34);
      }
      if (uVar3 != 0 && puVar6 != (uint *)0x0) {
        mm_camera_debug_log(1,6,DAT_000d9708 + 0xd955c,0x270,DAT_000d9704 + 0xd9550,
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c));
        uVar3 = *(uint *)(param_1 + 8);
      }
      if (uVar3 != 0) {
        uVar7 = 0;
        do {
          puVar6 = *(uint **)((int)(param_1 + 0x10) + uVar7 * 4);
          if (puVar6[1] == 3) {
            pQVar4 = (QCameraStream *)
                     QCameraChannel::getStreamByHandle((QCameraChannel *)piVar1,*puVar6);
            if (pQVar4 != (QCameraStream *)0x0) {
              dumpFrameToFile((QCamera2HardwareInterface *)param_2,pQVar4,
                              (mm_camera_buf_def *)puVar6,0x40,(char *)0x0);
            }
            break;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
      }
      property_get(DAT_000d970c + 0xd95e2,acStack132,DAT_000d9710 + 0xd95e4);
      iVar8 = atoi(acStack132);
      if ((iVar8 != 0) && (*(int *)(__ptr + 1) != 0)) {
        uVar3 = 0;
        do {
          pQVar4 = (QCameraStream *)
                   QCameraChannel::getStreamByHandle
                             ((QCameraChannel *)piVar1,**(uint **)((int)puVar2 + uVar3 * 4));
          if ((pQVar4 != (QCameraStream *)0x0) &&
             (iVar8 = QCameraStream::isTypeOf(pQVar4,7), iVar8 != 0)) {
            pmVar9 = *(mm_camera_buf_def **)((int)puVar2 + uVar3 * 4);
            if ((pmVar9 != (mm_camera_buf_def *)0x0) &&
               ((QCamera2HardwareInterface *)
                (uint)(byte)"Failed to Q new buffer to stream"[*(int *)(pmVar9 + 0x208) + 8] !=
                (QCamera2HardwareInterface *)0x0)) {
              dumpMetadataToFile((QCamera2HardwareInterface *)
                                 (uint)(byte)"Failed to Q new buffer to stream"
                                             [*(int *)(pmVar9 + 0x208) + 8],pQVar4,pmVar9,
                                 (char *)(DAT_000d9714 + 0xd968c));
            }
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(__ptr + 1));
      }
      iVar8 = waitDeferredWork((QCamera2HardwareInterface *)param_2,(uint *)((int)param_2 + 0x1da4))
      ;
      if ((iVar8 != 0) ||
         (iVar8 = QCameraPostProcessor::processData
                            ((QCameraPostProcessor *)((int)param_2 + 0x550),
                             (mm_camera_super_buf_t *)__ptr), iVar8 != 0)) {
        if (*(int *)(iVar11 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d971c + 0xd9652,0x296,DAT_000d9718 + 0xd964a);
        }
        (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
        free(__ptr);
        goto LAB_000d94a0;
      }
      if (*(int *)(iVar11 + 0x28) == 0) goto LAB_000d94a0;
      uVar5 = 3;
      uVar10 = 0x2c2;
      iVar11 = DAT_000d9720 + 0xd96a4;
      iVar8 = DAT_000d9724 + 0xd96ac;
    }
  }
  else {
    if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000d94a0;
    uVar5 = 1;
    uVar10 = 0x256;
    iVar11 = DAT_000d96ec + 0xd9496;
    iVar8 = DAT_000d96f0 + 0xd949e;
  }
  mm_camera_debug_log(1,uVar5,iVar8,uVar10,iVar11);
LAB_000d94a0:
  if (*piVar12 != 0) {
    if ((**(byte **)(DAT_000d9728 + 0xd94ac) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000d972c + 0xd94bc) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar13 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

