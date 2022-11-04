
/* qcamera::QCamera3Stream::dataProcRoutine(void*) */

undefined4 qcamera::QCamera3Stream::dataProcRoutine(void *param_1)

{
  int iVar1;
  int *piVar2;
  mm_camera_super_buf_t *pmVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  
  QCameraCmdThread::setName
            ((QCameraCmdThread *)((int)param_1 + 0x88),
             *(char **)(*(int *)(DAT_00055940 + 0x55802) +
                       *(int *)(*(int *)((int)param_1 + 0x14) + 4) * 4));
  iVar6 = *(int *)(DAT_00055944 + 0x5581a);
  if (*(int *)(iVar6 + 0x48) != 0) {
    mm_camera_debug_log();
  }
LAB_00055852:
  while (iVar1 = cam_sem_wait((cam_semaphore_t *)((int)param_1 + 0xb0)), iVar1 != 0) {
    piVar2 = (int *)__errno();
    if (*piVar2 != 0x16) {
      if (*(int *)(iVar6 + 0x3c) != 0) {
        strerror(*piVar2);
LAB_00055934:
        mm_camera_debug_log();
      }
      return 0;
    }
  }
  iVar1 = QCameraCmdThread::getCmd((QCameraCmdThread *)((int)param_1 + 0x88));
  if (iVar1 == 3) {
    if (*(int *)(iVar6 + 0x48) != 0) {
      mm_camera_debug_log();
    }
    pmVar3 = (mm_camera_super_buf_t *)
             QCameraQueue::dequeue((QCameraQueue *)((int)param_1 + 0x40),true);
    if (pmVar3 == (mm_camera_super_buf_t *)0x0) goto LAB_00055852;
    if (*(int *)(*(int *)(pmVar3 + 0x10) + 8) == 1) {
      handleBatchBuffer((QCamera3Stream *)param_1,pmVar3);
      goto LAB_00055852;
    }
    if (*(code **)((int)param_1 + 0x38) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x38))(pmVar3,param_1,*(undefined4 *)((int)param_1 + 0x3c));
      goto LAB_00055852;
    }
    uVar4 = *(undefined4 *)(*(int *)(pmVar3 + 0x10) + 0xc);
                    /* WARNING: Load size is inaccurate */
    pcVar5 = *(code **)(*param_1 + 0xc);
  }
  else {
    if (iVar1 != 5) {
      if (iVar1 == 4) {
        if (*(int *)(iVar6 + 0x44) != 0) {
          mm_camera_debug_log();
        }
        QCameraQueue::flush((QCameraQueue *)((int)param_1 + 0x40));
        QCameraQueue::flush((QCameraQueue *)((int)param_1 + 100));
        flushFreeBatchBufQ((QCamera3Stream *)param_1);
        if (*(int *)(iVar6 + 0x48) == 0) {
          return 0;
        }
        goto LAB_00055934;
      }
      goto LAB_00055852;
    }
    uVar4 = QCameraQueue::dequeue((QCameraQueue *)((int)param_1 + 100),true);
                    /* WARNING: Load size is inaccurate */
    pcVar5 = *(code **)(*param_1 + 0x10);
  }
  (*pcVar5)(param_1,uVar4);
  goto LAB_00055852;
}

