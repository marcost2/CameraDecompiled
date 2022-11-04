
/* qcamera::QCamera3PostProcessor::releaseJpegJobData(qcamera::qcamera_hal3_jpeg_data_t*) */

void __thiscall
qcamera::QCamera3PostProcessor::releaseJpegJobData
          (QCamera3PostProcessor *this,qcamera_hal3_jpeg_data_t *param_1)

{
  QCamera3ReprocessChannel *this_00;
  mm_camera_super_buf_t *pmVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = *(uint **)(DAT_000a890c + 0xa8790);
  if (1 < *puVar3) {
    if ((**(byte **)(DAT_000a8910 + 0xa87a0) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a8914 + 0xa87b0) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a8918 + 0xa88f6);
    }
  }
  iVar4 = *(int *)(DAT_000a891c + 0xa87be);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a8924 + 0xa87da,0x464,DAT_000a8920 + 0xa87d2);
  }
  if (param_1 != (qcamera_hal3_jpeg_data_t *)0x0) {
    if (*(void **)(param_1 + 0xc) != (void *)0x0) {
      free(*(void **)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    pmVar1 = *(mm_camera_super_buf_t **)(param_1 + 8);
    if (pmVar1 != (mm_camera_super_buf_t *)0x0) {
      if (0 < (char)this[0x470]) {
        iVar2 = 0;
        do {
          this_00 = *(QCamera3ReprocessChannel **)(this + iVar2 * 4 + 0x474);
          if ((this_00 != (QCamera3ReprocessChannel *)0x0) &&
             (*(int *)(this_00 + 0x54) == *(int *)(pmVar1 + 4))) {
            iVar2 = QCamera3ReprocessChannel::bufDone(this_00,pmVar1);
            if ((iVar2 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
              mm_camera_debug_log(1,1,DAT_000a892c + 0xa8836,0x472,DAT_000a8928 + 0xa882a,iVar2);
            }
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (char)this[0x470]);
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
    if (*(void **)(param_1 + 0x28) != (void *)0x0) {
      free(*(void **)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x5c0),3,'\0','\0');
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a8934 + 0xa88c0,0x49e,DAT_000a8930 + 0xa88b8);
  }
  if (1 < *puVar3) {
    if ((**(byte **)(DAT_000a8938 + 0xa88d0) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a893c + 0xa88de) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

