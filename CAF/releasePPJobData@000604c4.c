
/* qcamera::QCamera3PostProcessor::releasePPJobData(qcamera::qcamera_hal3_pp_data_t*) */

void __thiscall
qcamera::QCamera3PostProcessor::releasePPJobData
          (QCamera3PostProcessor *this,qcamera_hal3_pp_data_t *param_1)

{
  int iVar1;
  char *extraout_r1;
  char *extraout_r1_00;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_stack_ffffffdc;
  ScopedTraceDbg aSStack32 [8];
  int local_18;
  
  piVar3 = *(int **)(DAT_00060574 + 0x604d2);
  local_18 = *piVar3;
  iVar1 = DAT_00060578 + 0x604dc;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),(char *)param_1);
  iVar4 = *(int *)(DAT_0006057c + 0x604ee);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    iVar1 = DAT_00060580 + 0x604f8;
    mm_camera_debug_log();
  }
  if (param_1 != (qcamera_hal3_pp_data_t *)0x0) {
    if (*(void **)(param_1 + 4) != (void *)0x0) {
      free(*(void **)(param_1 + 4));
      if (*(mm_camera_super_buf_t **)(param_1 + 0x14) != (mm_camera_super_buf_t *)0x0) {
        QCamera3ProcessingChannel::metadataBufDone
                  (*(QCamera3ProcessingChannel **)(this + 4),
                   *(mm_camera_super_buf_t **)(param_1 + 0x14));
        free(*(void **)(param_1 + 0x14));
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      free(*(void **)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 800),3,'\0','\0');
  pcVar2 = extraout_r1;
  if (*(int *)(iVar4 + 0x2c) != 0) {
    iVar1 = DAT_00060588 + 0x6054c;
    mm_camera_debug_log();
    pcVar2 = extraout_r1_00;
  }
  ScopedTraceDbg::_ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),pcVar2);
  if (*piVar3 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

