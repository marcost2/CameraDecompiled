
/* qcamera::QCameraPostProcessor::releaseSaveJobData(void*, void*) */

void qcamera::QCameraPostProcessor::releaseSaveJobData(void *param_1,void *param_2)

{
  qcamera_jpeg_data_t *__ptr;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000d5af0 + 0xd5a2a);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d5af8 + 0xd5a42,0x812,DAT_000d5af4 + 0xd5a3a);
  }
  if (param_2 == (void *)0x0) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return;
    }
    uVar1 = 1;
    uVar3 = 0x816;
    iVar4 = DAT_000d5afc + 0xd5a7a;
    iVar2 = DAT_000d5b00 + 0xd5a82;
    goto LAB_000d5ae4;
  }
  if (param_1 == (void *)0x0) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return;
    }
    uVar1 = 1;
    uVar3 = 0x81c;
    iVar4 = DAT_000d5b04 + 0xd5a92;
    iVar2 = DAT_000d5b08 + 0xd5a9a;
    goto LAB_000d5ae4;
  }
                    /* WARNING: Load size is inaccurate */
  if (*param_1 == 0) {
    if (*(int *)(iVar4 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d5b10 + 0xd5ab2,0x6dc,DAT_000d5b0c + 0xd5aaa);
      goto LAB_000d5ab4;
    }
  }
  else {
    __ptr = (qcamera_jpeg_data_t *)
            QCameraQueue::dequeue((QCameraQueue *)((int)param_2 + 0x1d8),true);
    if (__ptr == (qcamera_jpeg_data_t *)0x0) {
LAB_000d5ab4:
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d5b18 + 0xd5acc,0x827,DAT_000d5b14 + 0xd5ac4);
      }
    }
    else {
      releaseJpegJobData((QCameraPostProcessor *)param_2,__ptr);
      free(__ptr);
    }
  }
  if (*(int *)(iVar4 + 0x2c) == 0) {
    return;
  }
  uVar1 = 4;
  uVar3 = 0x82a;
  iVar4 = DAT_000d5b1c + 0xd5ade;
  iVar2 = DAT_000d5b20 + 0xd5ae6;
LAB_000d5ae4:
  mm_camera_debug_log(1,uVar1,iVar2,uVar3,iVar4);
  return;
}

