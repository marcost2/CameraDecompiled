
/* qcamera::QCamera3PicChannel::request(native_handle const**, unsigned int, camera3_stream_buffer*,
   metadata_buffer_t*, int&, bool, bool) */

undefined4
qcamera::QCamera3PicChannel::request
          (native_handle **param_1,uint param_2,camera3_stream_buffer *param_3,
          metadata_buffer_t *param_4,int *param_5,bool param_6,bool param_7)

{
  int *piVar1;
  mm_camera_super_buf_t *__ptr;
  native_handle *pnVar2;
  int iVar3;
  uint *puVar4;
  native_handle *pnVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 uVar6;
  uint extraout_r1_04;
  undefined4 extraout_r1_05;
  uint extraout_r1_06;
  uint extraout_r1_07;
  undefined4 extraout_r1_08;
  uint extraout_r1_09;
  uint uVar7;
  uint uVar8;
  native_handle **this;
  int *piVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined3 in_stack_00000005;
  undefined3 in_stack_00000009;
  int in_stack_0000000c;
  undefined4 in_stack_fffffdfc;
  _Node a_Stack504 [4];
  AbstractUnwindCursor aAStack500 [4];
  uint uStack496;
  Autolock aAStack492 [4];
  ScopedTraceDbg aSStack488 [8];
  camera3_stream_buffer acStack480 [440];
  int local_28;
  
  piVar9 = *(int **)(DAT_0005bc78 + 0x5b964);
  local_28 = *piVar9;
  ScopedTraceDbg::ScopedTraceDbg
            (aSStack488,CONCAT44(in_stack_fffffdfc,DAT_0005bc7c + 0x5b972),(char *)param_2);
  __aeabi_memclr4(acStack480,0x1b8);
  piVar1 = (int *)param_1[0x491];
  pnVar5 = param_1[0xbb9];
  QCamera3ProcessingChannel::setReprocConfig
            ((reprocess_config_t *)param_1,acStack480,param_4,(cam_format_t)param_5,SUB41(piVar1,0))
  ;
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(int *)(*(int *)(DAT_0005bc80 + 0x5ba4c) + 0x20) == 0) {
      uVar10 = CONCAT44(extraout_r1,0xffffffed);
    }
    else {
      piVar1 = (int *)(DAT_0005bc84 + 0x5ba58);
      mm_camera_debug_log();
      uVar10 = CONCAT44(extraout_r1_02,0xffffffed);
    }
    goto LAB_0005bbf8;
  }
  QCamera3ProcessingChannel::startPostProc
            ((QCamera3ProcessingChannel *)param_1,(reprocess_config_t *)acStack480);
  if (_param_7 == 0) {
    this = param_1 + 0x102;
    pnVar2 = (native_handle *)QCamera3StreamMem::getMatchBufIndex(this);
    if ((int)pnVar2 < 0) {
      uVar10 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_1[0x1d]);
      pnVar2 = (native_handle *)uVar10;
      if (pnVar2 != (native_handle *)0x0) {
        if (*(int *)(*(int *)(DAT_0005bc8c + 0x5bb3c) + 0x20) != 0) {
          piVar1 = (int *)(DAT_0005bc90 + 0x5bb48);
          mm_camera_debug_log();
          uVar10 = uVar10 & 0xffffffff | (ulonglong)extraout_r1_04 << 0x20;
          pnVar5 = pnVar2;
        }
        goto LAB_0005bbf8;
      }
      uVar11 = QCamera3StreamMem::getMatchBufIndex(this);
      pnVar2 = (native_handle *)uVar11;
      if ((native_handle *)0x7fffffff < pnVar2) {
        if (*(int *)(*(int *)(DAT_0005bc98 + 0x5bc28) + 0x20) == 0) {
          uVar10 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),0xffffffe0);
        }
        else {
          piVar1 = (int *)(DAT_0005bc9c + 0x5bc32);
          mm_camera_debug_log();
          uVar10 = CONCAT44(extraout_r1_08,0xffffffe0);
        }
        goto LAB_0005bbf8;
      }
    }
    if (*(int *)(*(int *)(DAT_0005bca4 + 0x5ba88) + 0x2c) != 0) {
      piVar1 = (int *)(DAT_0005bca8 + 0x5ba92);
      pnVar5 = pnVar2;
      mm_camera_debug_log();
    }
    QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)this,(uint)pnVar2,(uint)param_3);
    uVar8 = queueJpegSetting((QCamera3PicChannel *)param_1,(uint)pnVar2,(metadata_buffer_t *)param_5
                            );
  }
  else {
    if (*(int *)(*(int *)(DAT_0005bcb0 + 0x5b9cc) + 0x2c) != 0) {
      piVar1 = (int *)(DAT_0005bcb4 + 0x5b9d6);
      mm_camera_debug_log();
    }
    uVar8 = 0;
  }
  if (param_4 != (metadata_buffer_t *)0x0) {
    __ptr = (mm_camera_super_buf_t *)calloc(1,0x604);
    if (__ptr == (mm_camera_super_buf_t *)0x0) {
      uVar6 = extraout_r1_00;
      if (*(int *)(*(int *)(DAT_0005bcc8 + 0x5bb04) + 0x20) != 0) {
        piVar1 = (int *)(DAT_0005bccc + 0x5bb0e);
        mm_camera_debug_log();
        uVar6 = extraout_r1_03;
      }
      uVar10 = CONCAT44(uVar6,0xfffffff4);
    }
    else {
      pnVar5 = (native_handle *)0x0;
      pnVar2 = (native_handle *)
               QCamera3ProcessingChannel::setFwkInputPPData
                         ((QCamera3ProcessingChannel *)param_1,(qcamera_fwk_input_pp_data_t *)__ptr,
                          (camera3_stream_buffer *)param_4,(reprocess_config_t *)acStack480,
                          (metadata_buffer_t *)param_5,(native_handle **)0x0,(uint)param_3);
      piVar1 = param_5;
      if (pnVar2 == (native_handle *)0x0) {
        if (*(int *)(*(int *)(DAT_0005bce0 + 0x5bbd2) + 0x28) != 0) {
          piVar1 = (int *)(DAT_0005bce4 + 0x5bbdc);
          mm_camera_debug_log();
        }
        QCamera3PostProcessor::processData((QCamera3PostProcessor *)(param_1 + 0x24),__ptr);
        uVar10 = (ulonglong)extraout_r1_07 << 0x20;
      }
      else {
        if (*(int *)(*(int *)(DAT_0005bcd4 + 0x5ba22) + 0x20) != 0) {
          piVar1 = (int *)(DAT_0005bcd8 + 0x5ba2c);
          pnVar5 = pnVar2;
          mm_camera_debug_log();
        }
        free(__ptr);
        uVar10 = CONCAT44(extraout_r1_01,pnVar2);
      }
    }
    goto LAB_0005bbf8;
  }
  android::Mutex::Autolock::Autolock(aAStack492,(Mutex *)(param_1 + 0xbbe));
  iVar3 = android::List<unsigned_int>::empty((List_unsigned_int_ *)(param_1 + 0xbbf));
  if (iVar3 == 0) {
    android::List<unsigned_int>::begin();
    puVar4 = (uint *)android::List<unsigned_int>::
                     _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                     operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                *)&uStack496);
    uVar7 = *puVar4;
    android::List<unsigned_int>::_Node::_Node(a_Stack504,&uStack496);
    android::List<unsigned_int>::erase((_ListIterator)aAStack500);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack500);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack504);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack496);
LAB_0005bb9c:
    if (in_stack_0000000c != 0) {
      param_3 = (camera3_stream_buffer *)0xffffffff;
    }
    QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)param_1[0xbbd],uVar7,(uint)param_3);
    (**(code **)(*(int *)param_1[9] + 0xc))(param_1[9],uVar7);
    uVar10 = CONCAT44(extraout_r1_05,uVar8);
    *_param_6 = uVar7;
  }
  else {
    uVar10 = QCamera3StreamMem::allocateOne
                       ((QCamera3StreamMem *)param_1[0xbbd],(uint)param_1[0xbc1]);
    uVar7 = (uint)uVar10;
    uVar8 = uVar7;
    if (-1 < (int)uVar7) goto LAB_0005bb9c;
    if (*(int *)(*(int *)(DAT_0005bcbc + 0x5bc4e) + 0x20) != 0) {
      piVar1 = (int *)(DAT_0005bcc0 + 0x5bc5a);
      mm_camera_debug_log();
      uVar10 = uVar10 & 0xffffffff | (ulonglong)extraout_r1_09 << 0x20;
    }
  }
  android::Mutex::Autolock::_Autolock(aAStack492,(Mutex *)(uVar10 >> 0x20));
  uVar10 = uVar10 & 0xffffffff | (ulonglong)extraout_r1_06 << 0x20;
LAB_0005bbf8:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack488,CONCAT44(pnVar5,piVar1),(char *)(uVar10 >> 0x20));
  if (*piVar9 == local_28) {
    return (int)uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

