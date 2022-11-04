
/* qcamera::QCamera2HardwareInterface::postproc_channel_cb_routine(mm_camera_super_buf_t*, void*) */

void qcamera::QCamera2HardwareInterface::postproc_channel_cb_routine
               (mm_camera_super_buf_t *param_1,void *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar7 = *(uint **)(DAT_000d98e0 + 0xd9740);
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_000d98e4 + 0xd974c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000d98e8 + 0xd975c) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000d98ec + 0xd98b8);
    }
  }
  iVar6 = *(int *)(DAT_000d98f0 + 0xd976a);
  piVar1 = *(int **)(iVar6 + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log(1,3,DAT_000d98f8 + 0xd9782,0x355,DAT_000d98f4 + 0xd977a);
  }
  if (param_2 != (void *)0x0) {
    piVar1 = *(int **)((int)param_2 + 0x60);
  }
  if ((param_2 != (void *)0x0 && piVar1 != (int *)0x0) && (*piVar1 == *(int *)param_1)) {
    kpi_postproc_channel_cb_routine((QCamera2HardwareInterface *)param_2);
    puVar2 = (undefined8 *)malloc(0x30);
    if (puVar2 == (undefined8 *)0x0) {
      if (*(int *)(iVar6 + 0x20) == 0) goto LAB_000d97aa;
      uVar3 = 1;
      uVar5 = 0x366;
      iVar6 = DAT_000d9904 + 0xd98a4;
      iVar4 = DAT_000d9908 + 0xd98ac;
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      *puVar2 = *(undefined8 *)param_1;
      puVar2[1] = uVar9;
      puVar2[4] = uVar10;
      puVar2[5] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      iVar4 = *(int *)(param_1 + 8);
      bVar8 = iVar4 != 0;
      if (bVar8) {
        iVar4 = *(int *)(iVar6 + 0x34);
      }
      if (bVar8 && iVar4 != 0) {
        mm_camera_debug_log(1,6,DAT_000d9910 + 0xd983e,0x36c,DAT_000d990c + 0xd9832,
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c));
      }
      waitDeferredWork((QCamera2HardwareInterface *)param_2,(uint *)((int)param_2 + 0x1da8));
      QCameraPostProcessor::processPPData
                ((QCameraPostProcessor *)((int)param_2 + 0x550),(mm_camera_super_buf_t *)puVar2);
      if (1 < *puVar7) {
        if ((**(byte **)(DAT_000d9914 + 0xd9862) & 1) == 0) {
          atrace_setup();
        }
        if ((int)((uint)*(byte *)(*(int *)(DAT_000d9918 + 0xd9870) + 1) << 0x1d) < 0) {
          atrace_int_body(DAT_000d991c + 0xd98da,0);
        }
      }
      if (*(int *)(iVar6 + 0x28) == 0) goto LAB_000d97aa;
      uVar3 = 3;
      uVar5 = 0x375;
      iVar6 = DAT_000d9920 + 0xd9888;
      iVar4 = DAT_000d9924 + 0xd9890;
    }
  }
  else {
    if (*(int *)(iVar6 + 0x20) == 0) goto LAB_000d97aa;
    uVar3 = 1;
    uVar5 = 0x35a;
    iVar6 = DAT_000d98fc + 0xd97a0;
    iVar4 = DAT_000d9900 + 0xd97a8;
  }
  mm_camera_debug_log(1,uVar3,iVar4,uVar5,iVar6);
LAB_000d97aa:
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_000d9928 + 0xd97b6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000d992c + 0xd97c4) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

