
/* qcamera::QCamera2HardwareInterface::snapshot_channel_cb_routine(mm_camera_super_buf_t*, void*) */

void qcamera::QCamera2HardwareInterface::snapshot_channel_cb_routine
               (mm_camera_super_buf_t *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  QCameraStream *this;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  piVar10 = *(int **)(DAT_000db9dc + 0xdb72c);
  local_28 = *piVar10;
  puVar11 = *(uint **)(DAT_000db9e0 + 0xdb73a);
  if (1 < *puVar11) {
    if ((**(byte **)(DAT_000db9e4 + 0xdb74a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000db9e8 + 0xdb75a) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000db9ec + 0xdb9c8);
    }
  }
  iVar9 = *(int *)(DAT_000db9f0 + 0xdb768);
  piVar1 = *(int **)(iVar9 + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log(1,3,DAT_000db9f8 + 0xdb780,0x771,DAT_000db9f4 + 0xdb778);
  }
  if (param_2 != (void *)0x0) {
    piVar1 = *(int **)((int)param_2 + 0x60);
  }
  if ((param_2 != (void *)0x0 && piVar1 != (int *)0x0) && (*piVar1 == *(int *)param_1)) {
    iVar2 = isLowPowerMode((QCamera2HardwareInterface *)param_2);
    iVar4 = 0x9c4;
    if (iVar2 != 0) {
      iVar4 = 0x9c0;
    }
    piVar1 = *(int **)((int)param_2 + iVar4);
    if ((piVar1 == (int *)0x0) || (piVar1[4] != *(int *)(param_1 + 4))) {
      if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000db7ae;
      uVar5 = 1;
      uVar7 = 0x783;
      iVar9 = DAT_000dba04 + 0xdb926;
      iVar2 = DAT_000dba08 + 0xdb92e;
    }
    else {
      property_get(DAT_000dba0c + 0xdb822,acStack132,DAT_000dba10 + 0xdb824);
      iVar2 = atoi(acStack132);
      if (iVar2 != 0) {
        if (piVar1[4] != *(int *)(param_1 + 4)) {
          if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000db7ae;
          uVar5 = 1;
          uVar7 = 0x78c;
          iVar9 = DAT_000dba18 + 0xdb946;
          iVar2 = DAT_000dba1c + 0xdb94e;
          goto LAB_000db92c;
        }
        if (*(int *)(param_1 + 8) != 0) {
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
                                   (char *)(DAT_000dba14 + 0xdb99c));
              }
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(param_1 + 8));
        }
      }
      puVar3 = (undefined8 *)malloc(0x30);
      if (puVar3 == (undefined8 *)0x0) {
        if (*(int *)(iVar9 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000dba24 + 0xdb966,0x7a3,DAT_000dba20 + 0xdb95e);
        }
        (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
        goto LAB_000db7ae;
      }
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
        mm_camera_debug_log(1,6,DAT_000dba2c + 0xdb8cc,0x7ab,DAT_000dba28 + 0xdb8c0,
                            *(undefined4 *)(*(int *)(puVar3 + 2) + 0x1c));
      }
      iVar2 = waitDeferredWork((QCamera2HardwareInterface *)param_2,(uint *)((int)param_2 + 0x1da4))
      ;
      if ((iVar2 != 0) ||
         (iVar2 = QCameraPostProcessor::processData
                            ((QCameraPostProcessor *)((int)param_2 + 0x550),
                             (mm_camera_super_buf_t *)puVar3), iVar2 != 0)) {
        if (*(int *)(iVar9 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000dba34 + 0xdb902,0x7b0,DAT_000dba30 + 0xdb8fa);
        }
        (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
        param_1 = (mm_camera_super_buf_t *)puVar3;
        goto LAB_000db7aa;
      }
      if (*(int *)(iVar9 + 0x28) == 0) goto LAB_000db7ae;
      uVar5 = 3;
      uVar7 = 0x7b7;
      iVar9 = DAT_000dba38 + 0xdb9b4;
      iVar2 = DAT_000dba3c + 0xdb9bc;
    }
LAB_000db92c:
    mm_camera_debug_log(1,uVar5,iVar2,uVar7,iVar9);
  }
  else {
    if (*(int *)(iVar9 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000dba00 + 0xdb7a6,0x776,DAT_000db9fc + 0xdb79e);
    }
LAB_000db7aa:
    free(param_1);
  }
LAB_000db7ae:
  if (1 < *puVar11) {
    if ((**(byte **)(DAT_000dba40 + 0xdb7bc) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dba44 + 0xdb7cc) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar10 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

