
/* qcamera::QCamera3PicChannel::streamCbRoutine(mm_camera_super_buf_t*, qcamera::QCamera3Stream*) */

void __thiscall
qcamera::QCamera3PicChannel::streamCbRoutine
          (QCamera3PicChannel *this,mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  undefined4 uVar1;
  QCamera3ProcessingChannel *this_00;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  mm_camera_buf_def *pmVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int in_stack_fffffcb0;
  QCamera3StreamMem **local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 uStack436;
  undefined4 auStack432 [98];
  int local_28;
  
  piVar12 = *(int **)(DAT_000a4008 + 0xa3d84);
  local_28 = *piVar12;
  puVar13 = *(uint **)(DAT_000a400c + 0xa3d92);
  if (1 < *puVar13) {
    if ((**(byte **)(DAT_000a4010 + 0xa3da2) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a4014 + 0xa3db2) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a4018 + 0xa3ff2);
    }
  }
  local_1b8 = 0;
  uStack436 = 0;
  this_00 = (QCamera3ProcessingChannel *)__aeabi_memclr8(auStack432,0x188);
  iVar2 = QCamera3ProcessingChannel::checkStreamCbErrors(this_00,param_1,param_2);
  if (iVar2 != 0) {
    if (*(int *)(*(int *)(DAT_000a401c + 0xa3ddc) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a4024 + 0xa3df8,0x1032);
    }
    goto LAB_000a3f96;
  }
  local_1bc = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0xc);
  iVar2 = *(int *)(DAT_000a4028 + 0xa3e06);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    in_stack_fffffcb0 = DAT_000a402c + 0xa3e1a;
    mm_camera_debug_log(1,4,DAT_000a4030 + 0xa3e24,0x1038);
  }
  if (local_1bc < *(uint *)(this + 0x317c)) {
    iVar3 = QCamera3StreamMem::getFrameNumber(*(QCamera3StreamMem **)(this + 0x3190),local_1bc);
    if (iVar3 != -1) {
      puVar4 = (undefined8 *)malloc(0x30);
      if (puVar4 != (undefined8 *)0x0) {
        local_1c0 = (QCamera3StreamMem **)(this + 0x3190);
        uVar16 = *(undefined8 *)(param_1 + 0x18);
        uVar14 = *(undefined8 *)param_1;
        uVar15 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)(param_1 + 0x20);
        uVar18 = *(undefined8 *)(param_1 + 0x28);
        puVar4[2] = *(undefined8 *)(param_1 + 0x10);
        puVar4[3] = uVar16;
        *puVar4 = uVar14;
        puVar4[1] = uVar15;
        puVar4[4] = uVar17;
        puVar4[5] = uVar18;
        QCamera3Stream::getFrameDimension(param_2,(cam_dimension_t *)&local_1b8);
        QCamera3Stream::getFrameOffset(param_2,(cam_frame_len_offset_t *)auStack432);
        uVar1 = uStack436;
        uVar5 = local_1b8;
        pmVar7 = *(mm_camera_buf_def **)(puVar4 + 2);
        iVar2 = 0x188;
        puVar10 = auStack432;
        puVar11 = (undefined4 *)&stack0xfffffcb0;
        do {
          iVar2 = iVar2 + -4;
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar2 != 0);
        QCamera3Channel::dumpYUV
                  ((QCamera3Channel *)this,pmVar7,SUB41(uVar5,0),SUB41(uVar1,0),
                   (uchar)in_stack_fffffcb0);
        if ((int)((uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x214) << 0x19) < 0) {
          pcVar8 = *(code **)(this + 100);
          uVar5 = QCamera3StreamMem::getFrameNumber(*local_1c0,local_1bc);
          (*pcVar8)(this,uVar5,1,*(undefined4 *)(this + 4));
        }
        QCamera3PostProcessor::processData
                  ((QCamera3PostProcessor *)(this + 0x94),(mm_camera_super_buf_t *)puVar4);
        free(param_1);
        goto LAB_000a3f96;
      }
      if (*(int *)(iVar2 + 0x20) != 0) {
        uVar5 = 0x104c;
        iVar2 = DAT_000a4048 + 0xa3fe6;
        goto LAB_000a3f08;
      }
      goto LAB_000a3f0c;
    }
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a4040 + 0xa3f64,0x1044);
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x3194));
    uVar9 = *(uint *)(this + 0x319c);
    puVar6 = (uint *)operator_new(0xc);
    puVar6[2] = uVar9;
    *puVar6 = local_1bc;
    puVar6[1] = *(uint *)(uVar9 + 4);
    *(uint **)(*(int *)(uVar9 + 4) + 8) = puVar6;
    *(uint **)(uVar9 + 4) = puVar6;
  }
  else {
    if (*(int *)(iVar2 + 0x20) != 0) {
      uVar5 = 0x103a;
      iVar2 = DAT_000a4038 + 0xa3f0a;
LAB_000a3f08:
      mm_camera_debug_log(1,1,iVar2,uVar5);
    }
LAB_000a3f0c:
    if (param_2 == (QCamera3Stream *)0x0) goto LAB_000a3f96;
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x3194));
    uVar9 = *(uint *)(this + 0x319c);
    puVar6 = (uint *)operator_new(0xc);
    puVar6[2] = uVar9;
    *puVar6 = local_1bc;
    puVar6[1] = *(uint *)(uVar9 + 4);
    *(uint **)(*(int *)(uVar9 + 4) + 8) = puVar6;
    *(uint **)(uVar9 + 4) = puVar6;
    (**(code **)(*(int *)param_2 + 0xc))(param_2,local_1bc);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3194));
LAB_000a3f96:
  if (1 < *puVar13) {
    if ((**(byte **)(DAT_000a404c + 0xa3fa4) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a4050 + 0xa3fb2) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar12 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

