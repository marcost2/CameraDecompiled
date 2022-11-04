
/* qcamera::QCamera2HardwareInterface::callback_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::callback_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  QCameraMemory *pQVar7;
  bool bVar8;
  
  puVar6 = *(uint **)(DAT_000dd324 + 0xdd182);
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_000dd328 + 0xdd18e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dd32c + 0xdd19e) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000dd330 + 0xdd30e);
    }
  }
  iVar5 = *(int *)(DAT_000dd334 + 0xdd1ac);
  piVar1 = *(int **)(iVar5 + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log(1,3,DAT_000dd33c + 0xdd1c4,0xb76,DAT_000dd338 + 0xdd1bc);
  }
  if (param_3 != (void *)0x0) {
    piVar1 = *(int **)((int)param_3 + 0x60);
  }
  if ((param_3 != (void *)0x0 && piVar1 != (int *)0x0) && (*piVar1 == *(int *)param_1)) {
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      if (*(int *)(iVar5 + 0x20) != 0) {
        uVar4 = 0xb84;
        iVar5 = DAT_000dd348 + 0xdd2d0;
        iVar3 = DAT_000dd34c + 0xdd2d8;
        goto LAB_000dd1e8;
      }
    }
    else {
      iVar2 = needProcessPreviewFrame((QCamera2HardwareInterface *)param_3,*(uint *)(iVar3 + 0x1c));
      if (iVar2 != 0) {
        if (*(int *)((int)param_3 + 0x4c0) != 0) {
          pQVar7 = *(QCameraMemory **)(iVar3 + 0x210);
          iVar2 = msgTypeEnabledWithLock((QCamera2HardwareInterface *)param_3,0x10);
          if ((0 < iVar2) &&
             (iVar2 = QCameraParametersIntf::isSceneSelectionEnabled
                                ((QCameraParametersIntf *)((int)param_3 + 0x4ac)), iVar2 == 0)) {
            iVar2 = sendPreviewCallback((QCamera2HardwareInterface *)param_3,param_2,pQVar7,
                                        *(uint *)(iVar3 + 0xc));
            bVar8 = iVar2 != 0;
            if (bVar8) {
              iVar2 = *(int *)(iVar5 + 0x20);
            }
            if (bVar8 && iVar2 != 0) {
              mm_camera_debug_log(1,1,DAT_000dd35c + 0xdd28a,0xb97,DAT_000dd358 + 0xdd282);
            }
          }
        }
        (**(code **)(*(int *)param_2 + 0x10))(param_2,*(undefined4 *)(iVar3 + 0xc));
        free(param_1);
        if (*(int *)(iVar5 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000dd364 + 0xdd2ba,0xb9c,DAT_000dd360 + 0xdd2b2);
        }
        goto LAB_000dd1f2;
      }
      if (*(int *)(iVar5 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000dd354 + 0xdd2f0,0xb8a,DAT_000dd350 + 0xdd2e8);
      }
      (**(code **)(*(int *)param_2 + 0x10))(param_2,*(undefined4 *)(iVar3 + 0xc));
    }
  }
  else if (*(int *)(iVar5 + 0x20) != 0) {
    uVar4 = 0xb7c;
    iVar5 = DAT_000dd340 + 0xdd1e2;
    iVar3 = DAT_000dd344 + 0xdd1ea;
LAB_000dd1e8:
    mm_camera_debug_log(1,1,iVar3,uVar4,iVar5);
  }
  free(param_1);
LAB_000dd1f2:
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_000dd368 + 0xdd1fe) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dd36c + 0xdd20e) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

