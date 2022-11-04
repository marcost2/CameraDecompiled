
/* qcamera::QCamera3ReprocessChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void qcamera::QCamera3ReprocessChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  qcamera_hal3_pp_data_t *__ptr;
  mm_camera_buf_def *pmVar6;
  int *piVar7;
  undefined4 *puVar8;
  QCamera3StreamMem *this;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *this_00;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int in_stack_fffffcb8;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 uStack436;
  undefined4 auStack432 [98];
  int local_28;
  
  piVar12 = *(int **)(DAT_0005c960 + 0x5c6d0);
  local_28 = *piVar12;
  this_00 = *(int **)(param_1 + 0x90);
  local_1b8 = 0;
  uStack436 = 0;
  __aeabi_memclr4(auStack432,0x188);
  if (param_2 == (QCamera3Stream *)0x0) {
    if (*(int *)(*(int *)(DAT_0005c964 + 0x5c7f0) + 0x20) != 0) {
      mm_camera_debug_log();
    }
  }
  else if (*(int *)(param_2 + 8) == 1) {
    if (*(int *)(param_2 + 0x10) == 0) {
      if (*(int *)(*(int *)(DAT_0005c97c + 0x5c83a) + 0x20) != 0) {
        mm_camera_debug_log();
      }
    }
    else {
      uVar11 = (uint)*(byte *)(*(int *)(param_2 + 0x10) + 0xc);
      if (*(int *)(param_1 + 0xc4) == 1) {
        local_1bc = QCamera3StreamMem::getFrameNumber
                              (*(QCamera3StreamMem **)(param_1 + 0xf0),uVar11);
        puVar2 = (undefined8 *)malloc(0x30);
        if (puVar2 == (undefined8 *)0x0) {
          if (*(int *)(*(int *)(DAT_0005c988 + 0x5c932) + 0x20) != 0) {
            mm_camera_debug_log();
          }
          if (param_3 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
            (**(code **)(*param_3 + 0xc))(param_3,uVar11);
          }
          goto LAB_0005c91a;
        }
        if (*(int *)(*(int *)(DAT_0005c994 + 0x5c730) + 0x34) != 0) {
          in_stack_fffffcb8 = DAT_0005c998 + 0x5c73a;
          mm_camera_debug_log();
        }
        uVar14 = *(undefined8 *)param_2;
        uVar15 = *(undefined8 *)(param_2 + 8);
        uVar16 = *(undefined8 *)(param_2 + 0x18);
        uVar17 = *(undefined8 *)(param_2 + 0x20);
        uVar18 = *(undefined8 *)(param_2 + 0x28);
        puVar2[2] = *(undefined8 *)(param_2 + 0x10);
        puVar2[3] = uVar16;
        *puVar2 = uVar14;
        puVar2[1] = uVar15;
        puVar2[4] = uVar17;
        puVar2[5] = uVar18;
        QCamera3Stream::getFrameDimension((QCamera3Stream *)param_3,(cam_dimension_t *)&local_1b8);
        QCamera3Stream::getFrameOffset
                  ((QCamera3Stream *)param_3,(cam_frame_len_offset_t *)auStack432);
        uVar1 = uStack436;
        uVar4 = local_1b8;
        pmVar6 = *(mm_camera_buf_def **)(puVar2 + 2);
        iVar3 = 0x188;
        puVar8 = auStack432;
        puVar9 = (undefined4 *)&stack0xfffffcb8;
        do {
          *puVar9 = *puVar8;
          iVar3 = iVar3 + -4;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar3 != 0);
        QCamera3Channel::dumpYUV
                  ((QCamera3Channel *)param_1,pmVar6,SUB41(uVar4,0),SUB41(uVar1,0),
                   (uchar)in_stack_fffffcb8);
        iVar3 = QCamera3ProcessingChannel::isFwkInputBuffer
                          ((QCamera3ProcessingChannel *)this_00,local_1bc);
        if (iVar3 != 0) {
          QCamera3PostProcessor::releaseOfflineBuffers
                    ((QCamera3PostProcessor *)(this_00 + 0x24),false);
          QCamera3ProcessingChannel::releaseInputBuffer
                    ((QCamera3ProcessingChannel *)this_00,local_1bc);
        }
        if (*(code **)(param_1 + 0x60) != (code *)0x0) {
          (**(code **)(param_1 + 0x60))(0,0,local_1bc,1);
        }
        QCamera3PostProcessor::processPPData
                  ((QCamera3PostProcessor *)(this_00 + 0x24),(mm_camera_super_buf_t *)puVar2);
      }
      else {
        this = (QCamera3StreamMem *)(param_1 + 0xf4);
        uVar4 = QCamera3StreamMem::getBufferHandle(this,uVar11);
        uVar5 = QCamera3StreamMem::getFrameNumber(this,uVar11);
                    /* WARNING: Load size is inaccurate */
        iVar3 = (**(code **)(*param_3 + 0x14))(param_3,uVar11);
        piVar7 = (int *)(DAT_0005c9a0 + 0x5c880);
        iVar10 = *piVar7;
        if (iVar3 != 0) {
          piVar7 = *(int **)(iVar10 + 0x20);
        }
        if (iVar3 != 0 && piVar7 != (int *)0x0) {
          mm_camera_debug_log();
        }
        uVar14 = QCamera3StreamMem::unregisterBuffer(this,uVar11);
        iVar3 = (int)((ulonglong)uVar14 >> 0x20);
        bVar13 = (int)uVar14 != 0;
        if (bVar13) {
          iVar3 = *(int *)(iVar10 + 0x20);
        }
        if (bVar13 && iVar3 != 0) {
          mm_camera_debug_log();
        }
        piVar7 = this_00 + 0x24;
        QCamera3PostProcessor::releaseOfflineBuffers((QCamera3PostProcessor *)piVar7,false);
        (**(code **)(*this_00 + 0x48))(this_00,uVar4,uVar5);
        __ptr = (qcamera_hal3_pp_data_t *)
                QCamera3PostProcessor::dequeuePPJob((QCamera3PostProcessor *)piVar7,uVar5);
        if (__ptr != (qcamera_hal3_pp_data_t *)0x0) {
          QCamera3PostProcessor::releasePPJobData((QCamera3PostProcessor *)piVar7,__ptr);
        }
        free(__ptr);
        resetToCamPerfNormal((QCamera3ReprocessChannel *)param_1,uVar5);
      }
      free(param_2);
    }
  }
  else if (*(int *)(*(int *)(DAT_0005c970 + 0x5c816) + 0x20) != 0) {
    mm_camera_debug_log();
  }
LAB_0005c91a:
  if (*piVar12 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

