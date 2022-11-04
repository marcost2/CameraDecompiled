
/* qcamera::QCamera3ReprocessChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void __thiscall
qcamera::QCamera3ReprocessChannel::streamCbRoutine
          (QCamera3ReprocessChannel *this,mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  int iVar1;
  uint uVar2;
  BSTBokehParam *this_00;
  qcamera_hal3_pp_data_t *__ptr;
  mm_camera_buf_def *pmVar3;
  undefined4 uVar4;
  metadata_buffer_t *pmVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  QCamera3StreamMem *this_01;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int in_stack_fffffcb0;
  uint local_1c0;
  undefined8 *local_1bc;
  undefined4 local_1b8;
  undefined4 uStack436;
  undefined4 auStack432 [98];
  int local_28;
  
  piVar12 = *(int **)(DAT_000a48e4 + 0xa4590);
  local_28 = *piVar12;
  iVar11 = *(int *)(DAT_000a48e8 + 0xa459e);
  if (*(int *)(iVar11 + 0x2c) != 0) {
    in_stack_fffffcb0 = DAT_000a48ec + 0xa45b6;
    mm_camera_debug_log(1,4,DAT_000a48f0 + 0xa45c2,0x119f);
  }
  piVar13 = *(int **)(this + 0x94);
  if ((this[0xf51] != (QCamera3ReprocessChannel)0x0) &&
     (*(int *)(*(int *)(param_2 + 0x14) + 0x3e4) == 7)) {
    __aeabi_memcpy8(this + 0xf54,*(void **)(param_1 + 0x10),0x218);
    goto LAB_000a48ce;
  }
  local_1b8 = 0;
  uStack436 = 0;
  __aeabi_memclr8(auStack432,0x188);
  if (param_1 == (mm_camera_super_buf_t *)0x0) {
    if (*(int *)(iVar11 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a48f8 + 0xa4732,0x11b2);
    }
    goto LAB_000a48ce;
  }
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(iVar11 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a4900 + 0xa4754,0x11b7);
    }
    goto LAB_000a48ce;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(iVar11 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a4908 + 0xa4776,0x11bb);
    }
    goto LAB_000a48ce;
  }
  uVar7 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0xc);
  if (*(int *)(this + 0xd4) == 1) {
    local_1c0 = QCamera3StreamMem::getFrameNumber(*(QCamera3StreamMem **)(this + 0x100),uVar7);
    local_1bc = (undefined8 *)malloc(0x30);
    if (local_1bc == (undefined8 *)0x0) {
      if (*(int *)(iVar11 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a4910 + 0xa4866,0x11c5);
      }
      if (param_2 != (QCamera3Stream *)0x0) {
        (**(code **)(*(int *)param_2 + 0xc))(param_2,uVar7);
      }
      goto LAB_000a48ce;
    }
    if (*(int *)(iVar11 + 0x34) != 0) {
      in_stack_fffffcb0 = DAT_000a4914 + 0xa4650;
      mm_camera_debug_log(1,6,DAT_000a4918 + 0xa465a,0x11cc);
    }
    uVar14 = *(undefined8 *)param_1;
    uVar15 = *(undefined8 *)(param_1 + 8);
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    uVar18 = *(undefined8 *)(param_1 + 0x28);
    local_1bc[2] = *(undefined8 *)(param_1 + 0x10);
    local_1bc[3] = uVar16;
    *local_1bc = uVar14;
    local_1bc[1] = uVar15;
    local_1bc[4] = uVar17;
    local_1bc[5] = uVar18;
    QCamera3Stream::getFrameDimension(param_2,(cam_dimension_t *)&local_1b8);
    QCamera3Stream::getFrameOffset(param_2,(cam_frame_len_offset_t *)auStack432);
    uVar6 = uStack436;
    uVar4 = local_1b8;
    pmVar3 = *(mm_camera_buf_def **)(local_1bc + 2);
    iVar1 = 0x188;
    puVar8 = auStack432;
    puVar10 = (undefined4 *)&stack0xfffffcb0;
    do {
      iVar1 = iVar1 + -4;
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar1 != 0);
    QCamera3Channel::dumpYUV
              ((QCamera3Channel *)this,pmVar3,SUB41(uVar4,0),SUB41(uVar6,0),(uchar)in_stack_fffffcb0
              );
    piVar9 = piVar13 + 0x53f;
    iVar1 = QCamera3StreamMem::getGrallocBufferIndex((QCamera3StreamMem *)piVar9,local_1c0);
    if (-1 < iVar1) {
      QCamera3PostProcessor::releaseOfflineBuffers((QCamera3PostProcessor *)(piVar13 + 0x25),false);
      uVar7 = QCamera3StreamMem::getGrallocBufferIndex((QCamera3StreamMem *)piVar9,local_1c0);
      if ((int)uVar7 < 0) {
        if (*(int *)(iVar11 + 0x24) != 0) {
          uVar4 = 2;
          uVar6 = 0x79f;
          iVar11 = DAT_000a4920 + 0xa4892;
          goto LAB_000a4890;
        }
      }
      else {
        iVar1 = QCamera3StreamMem::unregisterBuffer((QCamera3StreamMem *)piVar9,uVar7);
        if ((iVar1 != 0) && (*(int *)(iVar11 + 0x20) != 0)) {
          uVar4 = 1;
          uVar6 = 0x7a2;
          iVar11 = DAT_000a4928 + 0xa4714;
LAB_000a4890:
          mm_camera_debug_log(1,uVar4,iVar11,uVar6);
        }
      }
    }
    if ((*(code **)(this + 0x60) != (code *)0x0) && (this[0x116c] == (QCamera3ReprocessChannel)0x0))
    {
      (**(code **)(this + 0x60))(0,0,local_1c0,1);
    }
    if (this[0xf51] == (QCamera3ReprocessChannel)0x0) {
      pmVar5 = (metadata_buffer_t *)0x0;
    }
    else {
      pmVar5 = *(metadata_buffer_t **)(this + 0x115c);
    }
    QCamera3PostProcessor::processPPData
              ((QCamera3PostProcessor *)(piVar13 + 0x25),(mm_camera_super_buf_t *)local_1bc,pmVar5);
  }
  else {
    this_01 = (QCamera3StreamMem *)(this + 0x108);
    uVar4 = QCamera3StreamMem::getBufferHandle(this_01,uVar7);
    uVar2 = QCamera3StreamMem::getFrameNumber(this_01,uVar7);
    this_00 = (BSTBokehParam *)BSTBokehParam::createInstance();
    iVar1 = BSTBokehParam::getStereoMode(this_00);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(this + 0x90) + 0x18))(*(int **)(this + 0x90),1);
      (**(code **)(**(int **)(this + 0x90) + 0x1c))(*(int **)(this + 0x90),0xffffffa6);
    }
    iVar1 = (**(code **)(*(int *)param_2 + 0x14))(param_2,uVar7);
    if ((iVar1 != 0) && (*(int *)(iVar11 + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_000a4930 + 0xa47e0,0x11ec);
    }
    iVar1 = QCamera3StreamMem::unregisterBuffer(this_01,uVar7);
    if ((iVar1 != 0) && (*(int *)(iVar11 + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_000a4938 + 0xa480a,0x11f1);
    }
    piVar9 = piVar13 + 0x25;
    QCamera3PostProcessor::releaseOfflineBuffers((QCamera3PostProcessor *)piVar9,false);
    (**(code **)(*piVar13 + 0x4c))(piVar13,uVar4,uVar2);
    __ptr = (qcamera_hal3_pp_data_t *)
            QCamera3PostProcessor::dequeuePPJob((QCamera3PostProcessor *)piVar9,uVar2);
    if (__ptr != (qcamera_hal3_pp_data_t *)0x0) {
      QCamera3PostProcessor::releasePPJobData((QCamera3PostProcessor *)piVar9,__ptr);
    }
    free(__ptr);
    resetToCamPerfNormal(this,uVar2);
  }
  free(param_1);
LAB_000a48ce:
  if (*piVar12 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

