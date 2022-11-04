
/* qcamera::QCamera3PicChannel::streamCbRoutine(mm_camera_super_buf_t*, qcamera::QCamera3Stream*) */

void qcamera::QCamera3PicChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2,void *param_3)

{
  undefined4 uVar1;
  int iVar2;
  QCamera3ProcessingChannel *this;
  int iVar3;
  undefined4 uVar4;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  mm_camera_buf_def *pmVar5;
  char *extraout_r1_02;
  char *extraout_r1_03;
  Mutex *extraout_r1_04;
  Mutex *extraout_r1_05;
  Mutex *pMVar6;
  char *extraout_r1_06;
  char *pcVar7;
  code *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint in_stack_fffffca4;
  QCamera3StreamMem **local_1d0;
  undefined8 *local_1cc;
  Autolock aAStack452 [4];
  undefined4 local_1c0;
  undefined4 uStack444;
  ScopedTraceDbg aSStack440 [8];
  undefined4 auStack432 [98];
  int local_28;
  
  piVar11 = *(int **)(DAT_0005c254 + 0x5c008);
  local_28 = *piVar11;
  iVar2 = DAT_0005c258 + 0x5c016;
  ScopedTraceDbg::ScopedTraceDbg(aSStack440,CONCAT44(in_stack_fffffca4,iVar2),(char *)param_2);
  local_1c0 = 0;
  uStack444 = 0;
  this = (QCamera3ProcessingChannel *)__aeabi_memclr4(auStack432,0x188);
  uVar18 = QCamera3ProcessingChannel::checkStreamCbErrors
                     (this,(mm_camera_super_buf_t *)param_2,(QCamera3Stream *)param_3);
  pcVar7 = (char *)((ulonglong)uVar18 >> 0x20);
  if ((int)uVar18 != 0) {
    if (*(int *)(*(int *)(DAT_0005c25c + 0x5c044) + 0x20) != 0) {
      iVar2 = DAT_0005c260 + 0x5c052;
      mm_camera_debug_log();
      pcVar7 = extraout_r1;
    }
    goto LAB_0005c21a;
  }
  uVar12 = (uint)*(byte *)(*(int *)(param_2 + 0x10) + 0xc);
  iVar13 = *(int *)(DAT_0005c268 + 0x5c070);
  if (*(int *)(iVar13 + 0x2c) != 0) {
    iVar2 = DAT_0005c26c + 0x5c07e;
    in_stack_fffffca4 = uVar12;
    mm_camera_debug_log();
    pcVar7 = extraout_r1_00;
  }
  if (uVar12 < *(uint *)(param_1 + 12000)) {
    iVar3 = QCamera3StreamMem::getFrameNumber(*(QCamera3StreamMem **)(param_1 + 0x2ef4),uVar12);
    if (iVar3 != -1) {
      local_1cc = (undefined8 *)malloc(0x30);
      if (local_1cc != (undefined8 *)0x0) {
        local_1d0 = (QCamera3StreamMem **)(param_1 + 0x2ef4);
        uVar18 = *(undefined8 *)param_2;
        uVar14 = *(undefined8 *)(param_2 + 8);
        uVar15 = *(undefined8 *)(param_2 + 0x18);
        uVar16 = *(undefined8 *)(param_2 + 0x20);
        uVar17 = *(undefined8 *)(param_2 + 0x28);
        local_1cc[2] = *(undefined8 *)(param_2 + 0x10);
        local_1cc[3] = uVar15;
        *local_1cc = uVar18;
        local_1cc[1] = uVar14;
        local_1cc[4] = uVar16;
        local_1cc[5] = uVar17;
        QCamera3Stream::getFrameDimension((QCamera3Stream *)param_3,(cam_dimension_t *)&local_1c0);
        QCamera3Stream::getFrameOffset
                  ((QCamera3Stream *)param_3,(cam_frame_len_offset_t *)auStack432);
        uVar1 = uStack444;
        uVar4 = local_1c0;
        pmVar5 = *(mm_camera_buf_def **)(local_1cc + 2);
        iVar3 = 0x188;
        puVar9 = auStack432;
        puVar10 = (undefined4 *)&stack0xfffffca0;
        do {
          *puVar10 = *puVar9;
          iVar3 = iVar3 + -4;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar3 != 0);
        QCamera3Channel::dumpYUV
                  ((QCamera3Channel *)param_1,pmVar5,SUB41(uVar4,0),SUB41(uVar1,0),(uchar)iVar2);
        if ((int)((uint)*(byte *)(*(int *)(param_2 + 0x10) + 0x214) << 0x19) < 0) {
          pcVar8 = *(code **)(param_1 + 100);
          uVar4 = QCamera3StreamMem::getFrameNumber(*local_1d0,uVar12);
          (*pcVar8)(param_1,uVar4,1,*(undefined4 *)(param_1 + 4));
        }
        if (*(int *)(iVar13 + 0x2c) != 0) {
          in_stack_fffffca4 = QCamera3StreamMem::getFrameNumber(*local_1d0,uVar12);
          iVar2 = DAT_0005c28c + 0x5c158;
          mm_camera_debug_log();
        }
        QCamera3StreamMem::getFrameNumber(*local_1d0,uVar12);
        QCamera3PostProcessor::processData
                  ((QCamera3PostProcessor *)(param_1 + 0x90),(mm_camera_super_buf_t *)local_1cc);
        free(param_2);
        pcVar7 = extraout_r1_02;
        goto LAB_0005c21a;
      }
      pcVar7 = extraout_r1_01;
      if (*(int *)(iVar13 + 0x20) != 0) {
        iVar2 = DAT_0005c284 + 0x5c240;
        goto LAB_0005c1a0;
      }
      goto LAB_0005c1a4;
    }
    if (*(int *)(iVar13 + 0x2c) != 0) {
      iVar2 = DAT_0005c27c + 0x5c1de;
      mm_camera_debug_log();
    }
    android::Mutex::Autolock::Autolock(aAStack452,(Mutex *)(param_1 + 0x2ef8));
    android::List<unsigned_int>::push_back((uint *)(param_1 + 0x2efc));
    free(param_2);
    pMVar6 = extraout_r1_05;
  }
  else {
    if (*(int *)(iVar13 + 0x20) != 0) {
      iVar2 = DAT_0005c274 + 0x5c194;
LAB_0005c1a0:
      mm_camera_debug_log();
      pcVar7 = extraout_r1_03;
    }
LAB_0005c1a4:
    if (param_3 == (void *)0x0) goto LAB_0005c21a;
    android::Mutex::Autolock::Autolock(aAStack452,(Mutex *)(param_1 + 0x2ef8));
    android::List<unsigned_int>::push_back((uint *)(param_1 + 0x2efc));
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*param_3 + 0xc))(param_3,uVar12);
    pMVar6 = extraout_r1_04;
  }
  android::Mutex::Autolock::_Autolock(aAStack452,pMVar6);
  pcVar7 = extraout_r1_06;
LAB_0005c21a:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack440,CONCAT44(in_stack_fffffca4,iVar2),pcVar7);
  if (*piVar11 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

