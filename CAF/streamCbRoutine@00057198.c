
/* qcamera::QCamera3ProcessingChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void qcamera::QCamera3ProcessingChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2,void *param_3)

{
  int iVar1;
  QCamera3ProcessingChannel *this;
  int iVar2;
  undefined4 *puVar3;
  _Node *this_00;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  mm_camera_super_buf_t **ppmVar7;
  char *extraout_r1;
  mm_camera_buf_def *pmVar8;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *extraout_r1_02;
  char *pcVar9;
  cam_dimension_t cVar10;
  cam_frame_len_offset_t cVar11;
  undefined4 *puVar12;
  QCamera3StreamMem *this_01;
  uint uVar13;
  undefined8 uVar14;
  int in_stack_fffffc74;
  int *local_200;
  int *local_1fc;
  _Node a_Stack500 [4];
  _Node a_Stack496 [4];
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  undefined4 local_1e0;
  undefined4 uStack476;
  undefined4 local_1d4;
  undefined4 uStack464;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack452;
  ScopedTraceDbg aSStack448 [12];
  QCamera3Stream *local_1b4;
  undefined4 local_1b0 [98];
  int local_28;
  
  local_200 = *(int **)(DAT_00057538 + 0x571ac);
  local_28 = *local_200;
  iVar1 = DAT_0005753c + 0x571b6;
  local_1b4 = param_2;
  ScopedTraceDbg::ScopedTraceDbg(aSStack448,CONCAT44(in_stack_fffffc74,iVar1),(char *)param_2);
  local_1e0 = 0;
  uStack476 = 0;
  this = (QCamera3ProcessingChannel *)__aeabi_memclr4(local_1b0,0x188);
  uVar14 = checkStreamCbErrors(this,(mm_camera_super_buf_t *)local_1b4,(QCamera3Stream *)param_3);
  pcVar9 = (char *)((ulonglong)uVar14 >> 0x20);
  if ((int)uVar14 != 0) {
    if (*(int *)(*(int *)(DAT_00057540 + 0x571e2) + 0x20) != 0) {
      iVar1 = DAT_00057544 + 0x571f0;
      mm_camera_debug_log();
      pcVar9 = extraout_r1;
    }
    goto LAB_000575ca;
  }
  uVar13 = (uint)*(byte *)(*(int *)(local_1b4 + 0x10) + 0xc);
  if (*(uint *)(param_1 + 0x123c) <= uVar13) {
    if (*(int *)(*(int *)(DAT_000575e4 + 0x57272) + 0x20) != 0) {
      iVar1 = DAT_000575e8 + 0x5727c;
      mm_camera_debug_log();
    }
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*param_3 + 0xc))(param_3,uVar13);
    pcVar9 = extraout_r1_00;
    goto LAB_000575ca;
  }
  if (param_1[0x3f4] != (mm_camera_super_buf_t)0x0) {
    iVar2 = QCamera3Stream::getMyType((QCamera3Stream *)param_3);
    showDebugFPS((QCamera3ProcessingChannel *)param_1,iVar2);
  }
  QCamera3Stream::getFrameDimension((QCamera3Stream *)param_3,(cam_dimension_t *)&local_1e0);
  QCamera3Stream::getFrameOffset((QCamera3Stream *)param_3,(cam_frame_len_offset_t *)local_1b0);
  iVar2 = QCamera3Stream::getMyType((QCamera3Stream *)param_3);
  local_1fc = (int *)param_3;
  if (iVar2 == 1) {
    pmVar8 = *(mm_camera_buf_def **)(local_1b4 + 0x10);
    cVar10 = SUB41(local_1e0,0);
    cVar11 = SUB41(uStack476,0);
    iVar2 = 0x188;
    puVar3 = local_1b0;
    puVar12 = (undefined4 *)&stack0xfffffc70;
    do {
      *puVar12 = *puVar3;
      iVar2 = iVar2 + -4;
      puVar3 = puVar3 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar2 != 0);
LAB_000572ec:
    QCamera3Channel::dumpYUV((QCamera3Channel *)param_1,pmVar8,cVar10,cVar11,(uchar)iVar1);
  }
  else {
    iVar2 = QCamera3Stream::getMyType((QCamera3Stream *)param_3);
    if (iVar2 == 4) {
      pmVar8 = *(mm_camera_buf_def **)(local_1b4 + 0x10);
      cVar10 = SUB41(local_1e0,0);
      cVar11 = SUB41(uStack476,0);
      iVar2 = 0x188;
      puVar3 = local_1b0;
      puVar12 = (undefined4 *)&stack0xfffffc70;
      do {
        *puVar12 = *puVar3;
        iVar2 = iVar2 + -4;
        puVar3 = puVar3 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar2 != 0);
      goto LAB_000572ec;
    }
    iVar2 = QCamera3Stream::getMyType((QCamera3Stream *)param_3);
    if (iVar2 == 5) {
      pmVar8 = *(mm_camera_buf_def **)(local_1b4 + 0x10);
      cVar10 = SUB41(local_1e0,0);
      cVar11 = SUB41(uStack476,0);
      iVar2 = 0x188;
      puVar3 = local_1b0;
      puVar12 = (undefined4 *)&stack0xfffffc70;
      do {
        *puVar12 = *puVar3;
        iVar2 = iVar2 + -4;
        puVar3 = puVar3 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar2 != 0);
      goto LAB_000572ec;
    }
  }
  this_01 = (QCamera3StreamMem *)(param_1 + 0x408);
  iVar2 = *(int *)(DAT_000575f0 + 0x5730c);
  while( true ) {
    uVar4 = QCamera3StreamMem::getBufferHandle(this_01,uVar13);
    iVar5 = QCamera3StreamMem::getFrameNumber(this_01,uVar13);
    iVar6 = QCamera3StreamMem::getOldestFrameNumber(this_01,&local_1e4);
    if (((iVar6 != -1) && (iVar6 < iVar5)) &&
       (*(char *)(*(int *)(param_1 + 4) + 0x117880) != '\x01')) {
      if (*(int *)(iVar2 + 0x20) != 0) {
        iVar1 = DAT_000575f4 + 0x57592;
        mm_camera_debug_log();
        in_stack_fffffc74 = iVar6;
      }
      iVar2 = android::List<unsigned_int>::empty((List_unsigned_int_ *)(param_1 + 0x2ec4));
      if (iVar2 != 0) {
        (**(code **)(*local_1fc + 0x10))(local_1fc,local_1e4);
      }
      android::List<unsigned_int>::push_back((uint *)(param_1 + 0x2ec4));
      pcVar9 = extraout_r1_02;
      goto LAB_000575ca;
    }
    local_1d4 = *(undefined4 *)(param_1 + 0x1238);
    uStack464 = uVar4;
    if ((int)((uint)*(byte *)(*(int *)(local_1b4 + 0x10) + 0x214) << 0x19) < 0) {
      local_1cc = 1;
      if (*(int *)(iVar2 + 0x24) != 0) {
        in_stack_fffffc74 = QCamera3Stream::getMyType(*(QCamera3Stream **)(param_1 + 0x24));
        iVar1 = DAT_000575fc + 0x57388;
        mm_camera_debug_log();
      }
      (**(code **)(param_1 + 100))(param_1,iVar5,1,*(undefined4 *)(param_1 + 4));
    }
    else {
      local_1cc = 0;
    }
    local_1c8 = 0xffffffff;
    uStack452 = 0xffffffff;
    if (param_1[0x7c] != (mm_camera_super_buf_t)0x0) {
      iVar6 = (**(code **)(*local_1fc + 0x14))(local_1fc,uVar13);
      if ((iVar6 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
        iVar1 = DAT_00057604 + 0x573d4;
        mm_camera_debug_log();
        in_stack_fffffc74 = iVar6;
      }
      iVar6 = QCamera3StreamMem::unregisterBuffer(this_01,uVar13);
      if ((iVar6 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
        iVar1 = DAT_0005760c + 0x573fe;
        mm_camera_debug_log();
        in_stack_fffffc74 = iVar6;
      }
    }
    if (iVar5 < 0) {
      if (*(int *)(iVar2 + 0x20) != 0) {
        iVar1 = DAT_00057614 + 0x5743a;
        mm_camera_debug_log();
      }
    }
    else if (*(code **)(param_1 + 0x60) != (code *)0x0) {
      iVar1 = *(int *)(param_1 + 4);
      (**(code **)(param_1 + 0x60))(0,&local_1d4,iVar5,0);
    }
    free(local_1b4);
    local_1b4 = (QCamera3Stream *)0x0;
    uVar14 = android::List<unsigned_int>::empty((List_unsigned_int_ *)(param_1 + 0x2ec4));
    pcVar9 = (char *)((ulonglong)uVar14 >> 0x20);
    if ((int)uVar14 != 0) goto LAB_000575ca;
    android::List<unsigned_int>::begin();
    ppmVar7 = (mm_camera_super_buf_t **)
              android::List<unsigned_int>::
              _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                        ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                          *)&local_1e8);
    local_1b4 = (QCamera3Stream *)*ppmVar7;
    uVar13 = (uint)*(byte *)(*(int *)((mm_camera_super_buf_t *)local_1b4 + 0x10) + 0xc);
    iVar5 = QCamera3StreamMem::getFrameNumber(this_01,uVar13);
    iVar6 = QCamera3StreamMem::getOldestFrameNumber(this_01,&local_1e4);
    if (*(int *)(iVar2 + 0x20) != 0) {
      iVar1 = DAT_0005761c + 0x5749a;
      in_stack_fffffc74 = iVar5;
      mm_camera_debug_log();
    }
    if ((iVar6 != -1) && (iVar6 < iVar5)) break;
    if (iVar6 == iVar5) {
      if (*(int *)(iVar2 + 0x20) != 0) {
        iVar1 = DAT_0005762c + 0x574c8;
        mm_camera_debug_log();
      }
      this_00 = a_Stack496;
      android::List<unsigned_int>::_Node::_Node(this_00,&local_1e8);
      android::List<unsigned_int>::erase((_ListIterator)&local_1ec);
      local_1e8 = local_1ec;
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_1ec);
    }
    else {
      if (*(int *)(iVar2 + 0x20) != 0) {
        iVar1 = DAT_00057634 + 0x57504;
        mm_camera_debug_log();
      }
      this_00 = a_Stack500;
      android::List<unsigned_int>::_Node::_Node(this_00,&local_1e8);
      android::List<unsigned_int>::erase((_ListIterator)&local_1ec);
      local_1e8 = local_1ec;
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_1ec);
    }
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)this_00);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_1e8);
  }
  if (*(int *)(iVar2 + 0x20) != 0) {
    iVar1 = DAT_00057624 + 0x5755a;
    mm_camera_debug_log();
    in_stack_fffffc74 = iVar6;
  }
  (**(code **)(*local_1fc + 0x10))(local_1fc,local_1e4);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_1e8);
  pcVar9 = extraout_r1_01;
LAB_000575ca:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack448,CONCAT44(in_stack_fffffc74,iVar1),pcVar9);
  if (*local_200 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

