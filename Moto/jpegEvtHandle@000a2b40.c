
/* qcamera::QCamera3PicChannel::jpegEvtHandle(jpeg_job_status_t, unsigned int, unsigned int,
   mm_jpeg_output_t*, void*) */

void qcamera::QCamera3PicChannel::jpegEvtHandle
               (jpeg_job_status_t param_1,uint param_2,uint param_3,mm_jpeg_output_t *param_4,
               void *param_5)

{
  QCamera3PostProcessor *this;
  qcamera_hal3_jpeg_data_t *__ptr;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  QCamera3StreamMem *pQVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 local_4c;
  undefined2 uStack70;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack44;
  int local_28;
  
  piVar11 = *(int **)(DAT_000a2ed8 + 0xa2b52);
  local_28 = *piVar11;
  puVar10 = *(uint **)(DAT_000a2edc + 0xa2b60);
  if (1 < *puVar10) {
    if ((**(byte **)(DAT_000a2ee0 + 0xa2b70) & 1) == 0) {
      atrace_setup();
      param_2 = extraout_r1;
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a2ee4 + 0xa2b80) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a2fc8 + 0xa2fb4,param_2);
    }
  }
  if (*puVar10 != 0) {
    if ((**(byte **)(DAT_000a2ee8 + 0xa2b96) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a2eec + 0xa2ba6) + 1) << 0x1d) < 0) {
      atrace_int_body(DAT_000a2fcc + 0xa2f4e,0);
    }
  }
  if (param_5 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000a3010 + 0xa2f5c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a3018 + 0xa2f74,0xecc,DAT_000a3014 + 0xa2f6c);
    }
    goto LAB_000a2f76;
  }
  this = (QCamera3PostProcessor *)((int)param_5 + 0x94);
  __ptr = (qcamera_hal3_jpeg_data_t *)QCamera3PostProcessor::findJpegJobByJobId(this,param_3);
  if ((param_1 == 1) || (__ptr == (qcamera_hal3_jpeg_data_t *)0x0)) {
    if (*(int *)(*(int *)(DAT_000a2ef0 + 0xa2bd6) + 0x20) == 0) {
      local_4c = 1;
    }
    else {
      local_4c = 1;
      mm_camera_debug_log(1,1,DAT_000a2ef8 + 0xa2bf4,0xe41,DAT_000a2ef4 + 0xa2be6,param_3,param_1);
    }
  }
  else {
    local_4c = 0;
  }
  if (__ptr == (qcamera_hal3_jpeg_data_t *)0x0) goto LAB_000a2f76;
  uVar8 = **(uint **)(__ptr + 0x24);
  iVar13 = *(int *)(DAT_000a2efc + 0xa2c1a);
  if (*(int *)(iVar13 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a2f04 + 0xa2c38,0xe47,DAT_000a2f00 + 0xa2c2e,uVar8);
  }
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(param_4 + 8);
    iVar12 = *(int *)param_4;
    pQVar7 = (QCamera3StreamMem *)((int)param_5 + 0x6b0);
    piVar2 = (int *)QCamera3StreamMem::getBufferHandle(pQVar7,uVar8);
    if (piVar2 == (int *)0x0) {
      if (*(int *)(iVar13 + 0x20) == 0) {
        local_4c = 1;
      }
      else {
        local_4c = 1;
        mm_camera_debug_log(1,1,DAT_000a2fd4 + 0xa2cbc,0xe68,DAT_000a2fd0 + 0xa2cae,uVar8);
      }
    }
    else {
      iVar9 = *(int *)(*piVar2 + 0x1c);
      if ((iVar9 < 1) || (iVar3 = QCamera3StreamMem::getSize(pQVar7,uVar8), iVar3 < iVar9)) {
        iVar9 = QCamera3StreamMem::getSize(pQVar7,uVar8);
      }
      *(ulonglong *)(iVar12 + iVar9 + -8) = CONCAT44(uVar1,CONCAT22(uStack70,0xff));
      QCamera3StreamMem::cleanInvalidateCache(pQVar7,uVar8);
    }
  }
  pQVar7 = (QCamera3StreamMem *)((int)param_5 + 0x6b0);
  uStack56 = QCamera3StreamMem::getBufferHandle(pQVar7,uVar8);
  uVar4 = QCamera3StreamMem::getFrameNumber(pQVar7,uVar8);
  iVar12 = QCamera3StreamMem::unregisterBuffer(pQVar7,uVar8);
  if ((iVar12 != 0) && (*(int *)(iVar13 + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_000a2fdc + 0xa2d02,0xe74,DAT_000a2fd8 + 0xa2cf8,iVar12,uVar8);
  }
  local_3c = *(undefined4 *)((int)param_5 + 0x14e0);
  local_30 = 0xffffffff;
  uStack44 = 0xffffffff;
  local_34 = local_4c;
  iVar9 = *(int *)(__ptr + 0xc);
  if ((iVar9 == 0) && (iVar9 = *(int *)(__ptr + 8), iVar9 == 0)) {
LAB_000a2daa:
    if (*(int *)(iVar13 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a2fec + 0xa2dc6,0xe96,DAT_000a2fe8 + 0xa2dbe);
    }
  }
  else {
    iVar3 = **(int **)(iVar9 + 0x10);
    iVar6 = *(int *)(*(int *)((int)param_5 + 0x24) + 0xc);
    if (iVar6 == iVar3) {
      iVar9 = (*(int **)(iVar9 + 0x10))[3];
      if (iVar9 < 0) goto LAB_000a2daa;
      pthread_mutex_lock((pthread_mutex_t *)((int)param_5 + 0x3194));
      iVar3 = *(int *)((int)param_5 + 0x319c);
      piVar2 = (int *)operator_new(0xc);
      piVar2[2] = iVar3;
      *piVar2 = iVar9;
      piVar2[1] = *(int *)(iVar3 + 4);
      *(int **)(*(int *)(iVar3 + 4) + 8) = piVar2;
      *(int **)(iVar3 + 4) = piVar2;
      pthread_mutex_unlock((pthread_mutex_t *)((int)param_5 + 0x3194));
    }
    else if (*(int *)(iVar13 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a2fe4 + 0xa2da8,0xe8f,DAT_000a2fe0 + 0xa2d9a,iVar6,iVar3);
      goto LAB_000a2daa;
    }
  }
  if (*(int *)(iVar13 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000a2ff4 + 0xa2dea,0xe9a,DAT_000a2ff0 + 0xa2ddc,uVar4,local_4c);
  }
  if (*(code **)((int)param_5 + 0x60) != (code *)0x0) {
    (**(code **)((int)param_5 + 0x60))(0,&local_3c,uVar4,0,*(undefined4 *)((int)param_5 + 4));
  }
  if ((*(int *)(__ptr + 0x10) == 0) && (*(int *)(__ptr + 0x14) == 0)) {
    QCamera3PostProcessor::releaseOfflineBuffers(this,false);
  }
  else {
    uVar5 = QCamera3StreamMem::getGrallocBufferIndex
                      ((QCamera3StreamMem *)((int)param_5 + 0x14fc),uVar4);
    if ((int)uVar5 < 0) {
      if (*(int *)(iVar13 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a2ffc + 0xa2e4c,0xeac,DAT_000a2ff8 + 0xa2e42,uVar4);
      }
    }
    else {
      iVar12 = QCamera3StreamMem::unregisterBuffer
                         ((QCamera3StreamMem *)((int)param_5 + 0x14fc),uVar5);
    }
    if ((iVar12 != 0) && (*(int *)(iVar13 + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_000a3004 + 0xa2e70,0xeb0,DAT_000a3000 + 0xa2e62,iVar12,uVar8);
    }
    iVar12 = QCamera3StreamMem::getHeapBufferIndex
                       ((QCamera3StreamMem *)((int)param_5 + 0x232c),uVar4);
    if (iVar12 < 0) {
      if (*(int *)(iVar13 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a300c + 0xa2ed2,0xebb,DAT_000a3008 + 0xa2ec8,uVar4);
      }
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)((int)param_5 + 0x3164));
      iVar13 = *(int *)((int)param_5 + 0x3160);
      piVar2 = (int *)operator_new(0xc);
      piVar2[2] = iVar13;
      *piVar2 = iVar12;
      piVar2[1] = *(int *)(iVar13 + 4);
      *(int **)(*(int *)(iVar13 + 4) + 8) = piVar2;
      *(int **)(iVar13 + 4) = piVar2;
      pthread_mutex_unlock((pthread_mutex_t *)((int)param_5 + 0x3164));
    }
  }
  QCamera3PostProcessor::releaseJpegJobData(this,__ptr);
  free(__ptr);
  if ((*(QCamera3HardwareInterface **)((int)param_5 + 4))[0x118013] !=
      (QCamera3HardwareInterface)0x0) {
    QCamera3HardwareInterface::deleteQCFARawChannel
              (*(QCamera3HardwareInterface **)((int)param_5 + 4));
  }
LAB_000a2f76:
  if (1 < *puVar10) {
    if ((**(byte **)(DAT_000a301c + 0xa2f84) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a3020 + 0xa2f92) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar11 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

