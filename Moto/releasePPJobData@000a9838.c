
/* qcamera::QCamera3PostProcessor::releasePPJobData(qcamera::qcamera_hal3_pp_data_t*) */

void __thiscall
qcamera::QCamera3PostProcessor::releasePPJobData
          (QCamera3PostProcessor *this,qcamera_hal3_pp_data_t *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)(DAT_000a9920 + 0xa9846);
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_000a9924 + 0xa9852) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a9928 + 0xa9860) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a992c + 0xa990a);
    }
  }
  iVar2 = *(int *)(DAT_000a9930 + 0xa986c);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a9938 + 0xa9884,0x4b2,DAT_000a9934 + 0xa987c);
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
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x5c0),3,'\0','\0');
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a9940 + 0xa98d8,0x4c6,DAT_000a993c + 0xa98d0);
  }
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_000a9944 + 0xa98e6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a9948 + 0xa98f4) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

