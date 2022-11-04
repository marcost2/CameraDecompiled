
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
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  native_handle **this_00;
  uint uVar8;
  pthread_mutex_t *__mutex;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 in_stack_fffff918;
  int *local_55c;
  undefined **local_558;
  undefined4 local_554;
  cam_frame_len_offset_t acStack1360 [392];
  mm_camera_buf_def amStack968 [520];
  void *local_1c0;
  undefined auStack432 [392];
  int local_28;
  
  local_55c = *(int **)(DAT_0009f458 + 0x9f1fc);
  local_28 = *local_55c;
  this_00 = (native_handle **)(this + 0x14fc);
  uVar1 = QCamera3StreamMem::getMatchBufIndex((QCamera3StreamMem *)this_00,*(void **)(param_2 + 4));
  if ((int)uVar1 < 0) {
    iVar2 = QCamera3StreamMem::registerBuffer(this_00,*(cam_stream_type_t *)(param_2 + 4));
    if (iVar2 != 0) {
      if (*(int *)(*(int *)(DAT_0009f45c + 0x9f2da) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0009f464 + 0x9f2f8,0x54f);
      }
      goto LAB_0009f43a;
    }
    uVar1 = QCamera3StreamMem::getMatchBufIndex
                      ((QCamera3StreamMem *)this_00,*(void **)(param_2 + 4));
    if (0x7fffffff < uVar1) {
      if (*(int *)(*(int *)(DAT_0009f468 + 0x9f312) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0009f470 + 0x9f32a,0x554);
      }
      iVar2 = -0x20;
      goto LAB_0009f43a;
    }
  }
  QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)this_00,uVar1,param_6);
  uVar10 = *(undefined8 *)param_2;
  uVar11 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)param_1 = uVar10;
  *(undefined8 *)(param_1 + 8) = uVar11;
  iVar2 = QCamera3StreamMem::getBufDef
                    ((QCamera3StreamMem *)this_00,(cam_frame_len_offset_t *)(param_3 + 0x14),
                     (mm_camera_buf_def *)(param_1 + 0x22c),uVar1);
  if (iVar2 == 0) {
    uVar5 = *(undefined4 *)(param_3 + 0xc);
    uVar7 = *(undefined4 *)(param_3 + 0x10);
    iVar2 = 0x188;
    puVar4 = (undefined4 *)&stack0xfffff918;
    puVar9 = (undefined4 *)(param_3 + 0x14);
    do {
      iVar2 = iVar2 + -4;
      *puVar4 = *puVar9;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar2 != 0);
    QCamera3Channel::dumpYUV
              ((QCamera3Channel *)this,(mm_camera_buf_def *)(param_1 + 0x22c),SUB41(uVar5,0),
               SUB41(uVar7,0),(uchar)in_stack_fffff918);
    local_554 = 1;
    local_558 = &PTR_bufDone_00117af8;
    iVar2 = mm_stream_calc_offset_metadata(&local_558,this + 8,auStack432);
    if (iVar2 == 0) {
      __mutex = (pthread_mutex_t *)(this + 0x3164);
      pthread_mutex_lock(__mutex);
      puVar3 = (uint *)(*(uint **)(this + 0x3160))[2];
      if (puVar3 == *(uint **)(this + 0x3160)) {
        if (*(int *)(*(int *)(DAT_0009f480 + 0x9f416) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0009f488 + 0x9f42e,0x585);
        }
        pthread_mutex_unlock(__mutex);
        iVar2 = -0x16;
      }
      else {
        uVar8 = *puVar3;
        uVar1 = puVar3[1];
        uVar6 = puVar3[2];
        *(uint *)(uVar1 + 8) = uVar6;
        *(uint *)(uVar6 + 4) = uVar1;
        if (puVar3 != (uint *)0x0) {
          operator_delete(puVar3);
        }
        if (*(int *)(*(int *)(DAT_0009f48c + 0x9f366) + 0x2c) != 0) {
          for (iVar2 = *(int *)(*(int *)(this + 0x3160) + 8); iVar2 != *(int *)(this + 0x3160);
              iVar2 = *(int *)(iVar2 + 8)) {
          }
          mm_camera_debug_log(1,4,DAT_0009f494 + 0x9f398,0x58c);
        }
        pthread_mutex_unlock(__mutex);
        QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)(this + 0x232c),uVar8,param_6);
        __aeabi_memcpy8(acStack1360,auStack432,0x188);
        iVar2 = QCamera3StreamMem::getBufDef
                          ((QCamera3StreamMem *)(this + 0x232c),acStack1360,amStack968,uVar8);
        if (iVar2 == 0) {
          __aeabi_memcpy8(local_1c0,param_4,(size_t)&PTR_bufDone_00117af8);
          __aeabi_memcpy8(param_1 + 0x14,amStack968,0x218);
          __aeabi_memcpy8(param_1 + 0x444,param_3,0x1c0);
          *(native_handle ***)(param_1 + 0x604) = param_5;
          *(uint *)(param_1 + 0x608) = param_6;
        }
      }
    }
    else if (*(int *)(*(int *)(DAT_0009f474 + 0x9f2a0) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009f47c + 0x9f2bc,0x57e);
    }
  }
LAB_0009f43a:
  if (*local_55c != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

