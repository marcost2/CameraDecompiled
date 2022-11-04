
/* qcamera::QCamera3ProcessingChannel::setFwkInputPPData(qcamera::qcamera_fwk_input_pp_data_t*,
   camera3_stream_buffer*, qcamera::reprocess_config_t*, metadata_buffer_t*, native_handle const**,
   unsigned int) */

int __thiscall
qcamera::QCamera3ProcessingChannel::setFwkInputPPData
          (QCamera3ProcessingChannel *this,qcamera_fwk_input_pp_data_t *param_1,
          camera3_stream_buffer *param_2,reprocess_config_t *param_3,metadata_buffer_t *param_4,
          native_handle **param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *extraout_r1_01;
  Mutex *pMVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  native_handle **this_00;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 in_stack_fffff910;
  int *local_564;
  AbstractUnwindCursor aAStack1376 [4];
  AbstractUnwindCursor aAStack1372 [4];
  undefined4 local_558;
  undefined4 local_554;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack1360 [392];
  Autolock aAStack968 [520];
  void *local_1c0;
  undefined auStack432 [392];
  int local_28;
  
  local_564 = *(int **)(DAT_0005818c + 0x57f20);
  local_28 = *local_564;
  this_00 = (native_handle **)(this + 0x1254);
  uVar1 = QCamera3StreamMem::getMatchBufIndex(this_00);
  if ((int)uVar1 < 0) {
    iVar2 = QCamera3StreamMem::registerBuffer(this_00,*(cam_stream_type_t *)(param_2 + 4));
    if (iVar2 != 0) {
      if (*(int *)(*(int *)(DAT_00058190 + 0x57ffa) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      goto LAB_00058170;
    }
    uVar1 = QCamera3StreamMem::getMatchBufIndex(this_00);
    if (0x7fffffff < uVar1) {
      if (*(int *)(*(int *)(DAT_0005819c + 0x58032) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      iVar2 = -0x20;
      goto LAB_00058170;
    }
  }
  QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)this_00,uVar1,param_6);
  uVar9 = *(undefined8 *)param_2;
  uVar10 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)param_1 = uVar9;
  *(undefined8 *)(param_1 + 8) = uVar10;
  iVar2 = QCamera3StreamMem::getBufDef
                    ((QCamera3StreamMem *)this_00,(cam_frame_len_offset_t *)(param_3 + 0x10),
                     (mm_camera_buf_def *)(param_1 + 0x22c),uVar1);
  if (iVar2 == 0) {
    uVar6 = *(undefined4 *)(param_3 + 8);
    uVar7 = *(undefined4 *)(param_3 + 0xc);
    iVar2 = 0x188;
    puVar4 = (undefined4 *)&stack0xfffff910;
    puVar8 = (undefined4 *)(param_3 + 0x10);
    do {
      *puVar4 = *puVar8;
      iVar2 = iVar2 + -4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar2 != 0);
    QCamera3Channel::dumpYUV
              ((QCamera3Channel *)this,(mm_camera_buf_def *)(param_1 + 0x22c),SUB41(uVar6,0),
               SUB41(uVar7,0),(uchar)in_stack_fffff910);
    local_554 = 1;
    local_558 = 0x1174b8;
    iVar2 = mm_stream_calc_offset_metadata();
    if (iVar2 == 0) {
      android::Mutex::Autolock::Autolock(aAStack968,(Mutex *)(this + 0x2ebc));
      uVar9 = android::List<unsigned_int>::empty((List_unsigned_int_ *)(this + 0x2eb4));
      pMVar5 = (Mutex *)((ulonglong)uVar9 >> 0x20);
      if ((int)uVar9 == 0) {
        android::List<unsigned_int>::begin();
        puVar3 = (uint *)android::List<unsigned_int>::
                         _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                         ::operator_(a_Stack1360);
        uVar1 = *puVar3;
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack1360);
        android::List<unsigned_int>::begin();
        android::List<unsigned_int>::erase((_ListIterator)aAStack1372);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack1372);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack1376);
        pMVar5 = extraout_r1_00;
        if (*(int *)(*(int *)(DAT_000581c0 + 0x580da) + 0x2c) != 0) {
          android::List<unsigned_int>::size((List_unsigned_int_ *)(this + 0x2eb4));
          mm_camera_debug_log();
          pMVar5 = extraout_r1_01;
        }
        android::Mutex::Autolock::_Autolock(aAStack968,pMVar5);
        QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)(this + 0x2084),uVar1,param_6);
        __aeabi_memcpy8((cam_frame_len_offset_t *)a_Stack1360,auStack432,0x188);
        iVar2 = QCamera3StreamMem::getBufDef
                          ((QCamera3StreamMem *)(this + 0x2084),
                           (cam_frame_len_offset_t *)a_Stack1360,(mm_camera_buf_def *)aAStack968,
                           uVar1);
        if (iVar2 == 0) {
          __aeabi_memcpy8(local_1c0,param_4,0x1174b8);
          __aeabi_memcpy8(param_1 + 0x14,aAStack968,0x218);
          __aeabi_memcpy8(param_1 + 0x444,param_3,0x1b8);
          *(native_handle ***)(param_1 + 0x5fc) = param_5;
          *(uint *)(param_1 + 0x600) = param_6;
        }
      }
      else {
        if (*(int *)(*(int *)(DAT_000581b4 + 0x58072) + 0x20) != 0) {
          mm_camera_debug_log();
          pMVar5 = extraout_r1;
        }
        android::Mutex::Autolock::_Autolock(aAStack968,pMVar5);
        iVar2 = -0x16;
      }
    }
    else if (*(int *)(*(int *)(DAT_000581a8 + 0x57fc2) + 0x20) != 0) {
      mm_camera_debug_log();
    }
  }
LAB_00058170:
  if (*local_564 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

