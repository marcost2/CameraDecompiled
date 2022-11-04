
/* qcamera::QCamera3PostProcessor::releaseJpegJobData(qcamera::qcamera_hal3_jpeg_data_t*) */

void __thiscall
qcamera::QCamera3PostProcessor::releaseJpegJobData
          (QCamera3PostProcessor *this,qcamera_hal3_jpeg_data_t *param_1)

{
  int iVar1;
  int iVar2;
  char *extraout_r1;
  char *extraout_r1_00;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  int in_stack_ffffffdc;
  int iVar7;
  ScopedTraceDbg aSStack32 [8];
  int local_18;
  
  piVar4 = *(int **)(DAT_0005f6a8 + 0x5f59e);
  local_18 = *piVar4;
  iVar1 = DAT_0005f6ac + 0x5f5a8;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),(char *)param_1);
  iVar5 = *(int *)(DAT_0005f6b0 + 0x5f5ba);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    iVar1 = DAT_0005f6b4 + 0x5f5c4;
    mm_camera_debug_log();
  }
  if (param_1 != (qcamera_hal3_jpeg_data_t *)0x0) {
    if (*(void **)(param_1 + 0xc) != (void *)0x0) {
      free(*(void **)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    if (*(uint *)(param_1 + 8) != 0) {
      if (*(QCamera3ReprocessChannel **)(this + 0x1f0) != (QCamera3ReprocessChannel *)0x0) {
        uVar6 = QCamera3ReprocessChannel::bufDone
                          (*(QCamera3ReprocessChannel **)(this + 0x1f0),*(uint *)(param_1 + 8));
        iVar2 = (int)((ulonglong)uVar6 >> 0x20);
        iVar7 = (int)uVar6;
        if (iVar7 != 0) {
          iVar2 = *(int *)(iVar5 + 0x20);
        }
        if (iVar7 != 0 && iVar2 != 0) {
          iVar1 = DAT_0005f6bc + 0x5f604;
          mm_camera_debug_log();
          in_stack_ffffffdc = iVar7;
        }
      }
      free(*(void **)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(void **)(param_1 + 0x14) == (void *)0x0) {
      if (*(mm_camera_super_buf_t **)(param_1 + 0x20) != (mm_camera_super_buf_t *)0x0) {
        QCamera3ProcessingChannel::metadataBufDone
                  (*(QCamera3ProcessingChannel **)(this + 4),
                   *(mm_camera_super_buf_t **)(param_1 + 0x20));
        free(*(void **)(param_1 + 0x20));
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
    else {
      free(*(void **)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      free(*(void **)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 4))();
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (*(void **)(param_1 + 0x24) != (void *)0x0) {
      free(*(void **)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 800),3,'\0','\0');
  pcVar3 = extraout_r1;
  if (*(int *)(iVar5 + 0x2c) != 0) {
    iVar1 = DAT_0005f6c4 + 0x5f680;
    mm_camera_debug_log();
    pcVar3 = extraout_r1_00;
  }
  ScopedTraceDbg::_ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),pcVar3);
  if (*piVar4 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

