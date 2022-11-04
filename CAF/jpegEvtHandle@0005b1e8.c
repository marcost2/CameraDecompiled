
/* qcamera::QCamera3PicChannel::jpegEvtHandle(jpeg_job_status_t, unsigned int, unsigned int,
   mm_jpeg_output_t*, void*) */

void qcamera::QCamera3PicChannel::jpegEvtHandle
               (jpeg_job_status_t param_1,uint param_2,uint param_3,mm_jpeg_output_t *param_4,
               void *param_5)

{
  int iVar1;
  qcamera_hal3_jpeg_data_t *__ptr;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *extraout_r1_02;
  Mutex *extraout_r1_03;
  Mutex *extraout_r1_04;
  char *extraout_r1_05;
  char *pcVar6;
  int *piVar7;
  QCamera3StreamMem *pQVar8;
  QCamera3PostProcessor *this;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  uint in_stack_ffffff94;
  undefined4 local_5c;
  Autolock aAStack84 [4];
  undefined2 local_50;
  undefined2 uStack78;
  undefined4 uStack76;
  undefined4 local_44;
  undefined4 uStack64;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack52;
  ScopedTraceDbg aSStack48 [8];
  int local_28;
  
  piVar7 = *(int **)(DAT_0005b554 + 0x5b1fa);
  local_28 = *piVar7;
  iVar1 = DAT_0005b558 + 0x5b204;
  ScopedTraceDbg::ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffff94,iVar1),(char *)param_2);
  pcVar6 = extraout_r1;
  if (**(char ***)(DAT_0005b55c + 0x5b216) != (char *)0x0) {
    atrace_int(CONCAT44(in_stack_ffffff94,iVar1),**(char ***)(DAT_0005b55c + 0x5b216),
               (int)extraout_r1);
    pcVar6 = extraout_r1_00;
  }
  if (param_5 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_0005b5b0 + 0x5b24a) + 0x20) != 0) {
      iVar1 = DAT_0005b5b4 + 0x5b258;
      mm_camera_debug_log();
      pcVar6 = extraout_r1_01;
    }
  }
  else {
    this = (QCamera3PostProcessor *)((int)param_5 + 0x90);
    uVar13 = QCamera3PostProcessor::findJpegJobByJobId(this,param_3);
    pcVar6 = (char *)((ulonglong)uVar13 >> 0x20);
    __ptr = (qcamera_hal3_jpeg_data_t *)uVar13;
    if ((param_1 == 1) || (__ptr == (qcamera_hal3_jpeg_data_t *)0x0)) {
      if (*(int *)(*(int *)(DAT_0005b560 + 0x5b270) + 0x20) == 0) {
        local_5c = 1;
      }
      else {
        iVar1 = DAT_0005b564 + 0x5b27a;
        local_5c = 1;
        mm_camera_debug_log();
        pcVar6 = extraout_r1_02;
        in_stack_ffffff94 = param_3;
      }
    }
    else {
      local_5c = 0;
    }
    if (__ptr != (qcamera_hal3_jpeg_data_t *)0x0) {
      uVar9 = **(uint **)(__ptr + 0x24);
      iVar11 = *(int *)(DAT_0005b56c + 0x5b2b4);
      if (*(int *)(iVar11 + 0x2c) != 0) {
        iVar1 = DAT_0005b570 + 0x5b2c2;
        in_stack_ffffff94 = uVar9;
        mm_camera_debug_log();
      }
      local_50 = 0xff;
      if (param_1 == 0) {
        uStack76 = *(undefined4 *)(param_4 + 8);
        iVar12 = *(int *)param_4;
        pQVar8 = (QCamera3StreamMem *)((int)param_5 + 0x408);
        piVar2 = (int *)QCamera3StreamMem::getBufferHandle(pQVar8,uVar9);
        if (piVar2 == (int *)0x0) {
          if (*(int *)(iVar11 + 0x20) == 0) {
            local_5c = 1;
          }
          else {
            iVar1 = DAT_0005b578 + 0x5b332;
            local_5c = 1;
            in_stack_ffffff94 = uVar9;
            mm_camera_debug_log();
          }
        }
        else {
          iVar10 = *(int *)(*piVar2 + 0x1c);
          iVar3 = QCamera3StreamMem::getSize(pQVar8,uVar9);
          if (iVar3 < iVar10) {
            iVar10 = QCamera3StreamMem::getSize(pQVar8,uVar9);
          }
          *(ulonglong *)(iVar12 + iVar10 + -8) = CONCAT44(uStack76,CONCAT22(uStack78,local_50));
          QCamera3StreamMem::cleanInvalidateCache(pQVar8,uVar9);
        }
      }
      pQVar8 = (QCamera3StreamMem *)((int)param_5 + 0x408);
      uStack64 = QCamera3StreamMem::getBufferHandle(pQVar8,uVar9);
      uVar4 = QCamera3StreamMem::getFrameNumber(pQVar8,uVar9);
      uVar9 = QCamera3StreamMem::unregisterBuffer(pQVar8,uVar9);
      if ((uVar9 != 0) && (*(int *)(iVar11 + 0x20) != 0)) {
        iVar1 = DAT_0005b580 + 0x5b37e;
        in_stack_ffffff94 = uVar9;
        mm_camera_debug_log();
      }
      local_44 = *(undefined4 *)((int)param_5 + 0x1238);
      local_38 = 0xffffffff;
      uStack52 = 0xffffffff;
      local_3c = local_5c;
      iVar12 = *(int *)(__ptr + 0xc);
      if ((iVar12 != 0) || (iVar12 = *(int *)(__ptr + 8), iVar12 != 0)) {
        iVar3 = android::List<qcamera::ReprocessBuffer>::_Node::getNext
                          (*(_Node **)((int)param_5 + 0x24));
        if (iVar3 == **(int **)(iVar12 + 0x10)) {
          if (-1 < (*(int **)(iVar12 + 0x10))[3]) {
            android::Mutex::Autolock::Autolock(aAStack84,(Mutex *)((int)param_5 + 0x2ef8));
            android::List<unsigned_int>::push_back((uint *)((int)param_5 + 0x2efc));
            android::Mutex::Autolock::_Autolock(aAStack84,extraout_r1_03);
          }
        }
        else if (*(int *)(iVar11 + 0x2c) != 0) {
          in_stack_ffffff94 =
               android::List<qcamera::ReprocessBuffer>::_Node::getNext
                         (*(_Node **)((int)param_5 + 0x24));
          iVar1 = DAT_0005b588 + 0x5b408;
          mm_camera_debug_log();
        }
      }
      if (*(int *)(iVar11 + 0x34) != 0) {
        iVar1 = DAT_0005b590 + 0x5b428;
        in_stack_ffffff94 = uVar4;
        mm_camera_debug_log();
      }
      if (*(code **)((int)param_5 + 0x60) != (code *)0x0) {
        iVar1 = *(int *)((int)param_5 + 4);
        (**(code **)((int)param_5 + 0x60))(0,&local_44,uVar4,0);
      }
      if ((*(int *)(__ptr + 0x10) == 0) && (*(int *)(__ptr + 0x14) == 0)) {
        QCamera3PostProcessor::releaseOfflineBuffers(this,false);
      }
      else {
        uVar5 = QCamera3StreamMem::getGrallocBufferIndex
                          ((QCamera3StreamMem *)((int)param_5 + 0x1254),uVar4);
        if ((int)uVar5 < 0) {
          if (*(int *)(iVar11 + 0x20) != 0) {
            iVar1 = DAT_0005b598 + 0x5b490;
            in_stack_ffffff94 = uVar4;
            mm_camera_debug_log();
          }
        }
        else {
          uVar9 = QCamera3StreamMem::unregisterBuffer
                            ((QCamera3StreamMem *)((int)param_5 + 0x1254),uVar5);
        }
        if ((uVar9 != 0) && (*(int *)(iVar11 + 0x20) != 0)) {
          iVar1 = DAT_0005b5a0 + 0x5b4b0;
          mm_camera_debug_log();
          in_stack_ffffff94 = uVar9;
        }
        iVar12 = QCamera3StreamMem::getHeapBufferIndex
                           ((QCamera3StreamMem *)((int)param_5 + 0x2084),uVar4);
        if (iVar12 < 0) {
          if (*(int *)(iVar11 + 0x20) != 0) {
            iVar1 = DAT_0005b5a8 + 0x5b50c;
            mm_camera_debug_log();
            in_stack_ffffff94 = uVar4;
          }
        }
        else {
          android::Mutex::Autolock::Autolock(aAStack84,(Mutex *)((int)param_5 + 0x2ebc));
          android::List<unsigned_int>::push_back((uint *)((int)param_5 + 0x2eb4));
          android::Mutex::Autolock::_Autolock(aAStack84,extraout_r1_04);
        }
      }
      QCamera3PostProcessor::releaseJpegJobData(this,__ptr);
      free(__ptr);
      pcVar6 = extraout_r1_05;
    }
  }
  ScopedTraceDbg::_ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffff94,iVar1),pcVar6);
  if (*piVar7 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

