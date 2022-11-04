
/* qcamera::QCamera2HardwareInterface::raw_channel_cb_routine(mm_camera_super_buf_t*, void*) */

void qcamera::QCamera2HardwareInterface::raw_channel_cb_routine
               (mm_camera_super_buf_t *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  QCameraStream *this;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  mm_camera_buf_def *pmVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char acStack132 [92];
  int local_28;
  
  piVar10 = *(int **)(DAT_000dbe18 + 0xdbb7c);
  local_28 = *piVar10;
  puVar11 = *(uint **)(DAT_000dbe1c + 0xdbb8a);
  if (1 < *puVar11) {
    if ((**(byte **)(DAT_000dbe20 + 0xdbb9a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dbe24 + 0xdbbaa) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000dbe28 + 0xdbe02);
    }
  }
  iVar9 = *(int *)(DAT_000dbe2c + 0xdbbb8);
  piVar1 = *(int **)(iVar9 + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log(1,3,DAT_000dbe34 + 0xdbbd0,0x7f8,DAT_000dbe30 + 0xdbbc8);
  }
  if (param_2 != (void *)0x0) {
    piVar1 = *(int **)((int)param_2 + 0x60);
  }
  if ((param_2 == (void *)0x0 || piVar1 == (int *)0x0) || (*piVar1 != *(int *)param_1)) {
    if (*(int *)(iVar9 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000dbe3c + 0xdbbf6,0x7fd,DAT_000dbe38 + 0xdbbee);
    }
LAB_000dbbfa:
    free(param_1);
    goto LAB_000dbbfe;
  }
  piVar1 = *(int **)((int)param_2 + 0x9c8);
  if (piVar1 == (int *)0x0) {
    if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000dbbfe;
    uVar4 = 1;
    uVar7 = 0x805;
    iVar9 = DAT_000dbe40 + 0xdbd5a;
    iVar2 = DAT_000dbe44 + 0xdbd62;
LAB_000dbd60:
    mm_camera_debug_log(1,uVar4,iVar2,uVar7,iVar9);
  }
  else {
    if (piVar1[4] == *(int *)(param_1 + 4)) {
      property_get(DAT_000dbe50 + 0xdbc62,acStack132,DAT_000dbe54 + 0xdbc64);
      iVar2 = atoi(acStack132);
      if ((iVar2 != 0) && (*(int *)(param_1 + 8) != 0)) {
        uVar8 = 0;
        do {
          this = (QCameraStream *)
                 QCameraChannel::getStreamByHandle
                           ((QCameraChannel *)piVar1,**(uint **)(param_1 + uVar8 * 4 + 0x10));
          if ((this != (QCameraStream *)0x0) &&
             (iVar2 = QCameraStream::isTypeOf(this,7), iVar2 != 0)) {
            pmVar6 = *(mm_camera_buf_def **)(param_1 + uVar8 * 4 + 0x10);
            if ((pmVar6 != (mm_camera_buf_def *)0x0) &&
               ((QCamera2HardwareInterface *)
                (uint)(byte)"Failed to Q new buffer to stream"[*(int *)(pmVar6 + 0x208) + 8] !=
                (QCamera2HardwareInterface *)0x0)) {
              dumpMetadataToFile((QCamera2HardwareInterface *)
                                 (uint)(byte)"Failed to Q new buffer to stream"
                                             [*(int *)(pmVar6 + 0x208) + 8],this,pmVar6,
                                 (char *)(DAT_000dbe58 + 0xdbdd6));
            }
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 8));
      }
      puVar3 = (undefined8 *)malloc(0x30);
      if (puVar3 != (undefined8 *)0x0) {
        uVar13 = *(undefined8 *)param_1;
        uVar14 = *(undefined8 *)(param_1 + 8);
        uVar15 = *(undefined8 *)(param_1 + 0x18);
        uVar16 = *(undefined8 *)(param_1 + 0x20);
        uVar17 = *(undefined8 *)(param_1 + 0x28);
        puVar3[2] = *(undefined8 *)(param_1 + 0x10);
        puVar3[3] = uVar15;
        puVar3[4] = uVar16;
        puVar3[5] = uVar17;
        *puVar3 = uVar13;
        puVar3[1] = uVar14;
        iVar2 = *(int *)(puVar3 + 1);
        bVar12 = iVar2 != 0;
        if (bVar12) {
          iVar2 = *(int *)(iVar9 + 0x34);
        }
        if (bVar12 && iVar2 != 0) {
          mm_camera_debug_log(1,6,DAT_000dbe68 + 0xdbd00,0x82e,DAT_000dbe64 + 0xdbcf4,
                              *(undefined4 *)(*(int *)(puVar3 + 2) + 0x1c));
        }
        iVar2 = waitDeferredWork((QCamera2HardwareInterface *)param_2,
                                 (uint *)((int)param_2 + 0x1da4));
        if ((iVar2 != 0) ||
           (iVar2 = QCameraPostProcessor::processData
                              ((QCameraPostProcessor *)((int)param_2 + 0x550),
                               (mm_camera_super_buf_t *)puVar3), iVar2 != 0)) {
          if (*(int *)(iVar9 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000dbe70 + 0xdbd36,0x835,DAT_000dbe6c + 0xdbd2e);
          }
          (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
          param_1 = (mm_camera_super_buf_t *)puVar3;
          goto LAB_000dbbfa;
        }
        if (*(int *)(iVar9 + 0x28) == 0) goto LAB_000dbbfe;
        uVar4 = 3;
        uVar7 = 0x83c;
        iVar9 = DAT_000dbe74 + 0xdbdee;
        iVar2 = DAT_000dbe78 + 0xdbdf6;
        goto LAB_000dbd60;
      }
      if (*(int *)(iVar9 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000dbe60 + 0xdbda0,0x826,DAT_000dbe5c + 0xdbd98);
      }
      pcVar5 = *(code **)(*piVar1 + 0x1c);
    }
    else {
      if (*(int *)(iVar9 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000dbe4c + 0xdbd7e,0x80a,DAT_000dbe48 + 0xdbd76);
      }
      pcVar5 = *(code **)(*piVar1 + 0x1c);
    }
    (*pcVar5)(piVar1,param_1);
  }
LAB_000dbbfe:
  if (1 < *puVar11) {
    if ((**(byte **)(DAT_000dbe7c + 0xdbc0c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dbe80 + 0xdbc1c) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar10 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

