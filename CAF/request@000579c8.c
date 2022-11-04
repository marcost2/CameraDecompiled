
/* qcamera::QCamera3ProcessingChannel::request(native_handle const**, unsigned int,
   camera3_stream_buffer*, metadata_buffer_t*, int&, bool, bool) */

int qcamera::QCamera3ProcessingChannel::request
              (native_handle **param_1,uint param_2,camera3_stream_buffer *param_3,
              metadata_buffer_t *param_4,int *param_5,bool param_6,bool param_7)

{
  mm_camera_super_buf_t *__ptr;
  int iVar1;
  uint uVar2;
  native_handle **this;
  int iVar3;
  int *piVar4;
  undefined3 in_stack_00000005;
  camera3_stream_buffer acStack480 [440];
  int local_28;
  
  piVar4 = *(int **)(DAT_00057cac + 0x579d6);
  local_28 = *piVar4;
  if ((param_2 == 0) || (param_5 == (int *)0x0)) {
    if (*(int *)(*(int *)(DAT_00057cb0 + 0x57aaa) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    iVar1 = -0x16;
    goto LAB_00057ac8;
  }
  if (param_4 == (metadata_buffer_t *)0x0) {
    if (*(char *)(param_1 + 0x14) == '\0') {
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_1[0x1d]);
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(DAT_00057ce0 + 0x57bb8) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        goto LAB_00057ac8;
      }
      iVar1 = (**(code **)(*param_1 + 8))(param_1);
      if (iVar1 != 0) goto LAB_00057ac8;
    }
    else if (*(int *)(*(int *)(DAT_00057cec + 0x57aea) + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    this = param_1 + 0x102;
    uVar2 = QCamera3StreamMem::getMatchBufIndex(this);
    if ((int)uVar2 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_1[0x1d]);
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(DAT_00057cf8 + 0x57bf0) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        goto LAB_00057ac8;
      }
      uVar2 = QCamera3StreamMem::getMatchBufIndex(this);
      if (0x7fffffff < uVar2) {
        if (*(int *)(*(int *)(DAT_00057d04 + 0x57c7e) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        iVar1 = -0x20;
        goto LAB_00057ac8;
      }
    }
    iVar1 = QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)this,uVar2,(uint)param_3);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(DAT_00057d10 + 0x57b2e) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      goto LAB_00057ac8;
    }
    iVar1 = (**(code **)(*(int *)param_1[9] + 0xc))(param_1[9],uVar2);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(DAT_00057d1c + 0x57c2c) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)this,uVar2,0xffffffff);
      goto LAB_00057ac8;
    }
    *_param_6 = uVar2;
  }
  else {
    iVar3 = *(int *)(DAT_00057cbc + 0x579fc);
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    __aeabi_memclr4(acStack480,0x1b8);
    setReprocConfig((reprocess_config_t *)param_1,acStack480,param_4,(cam_format_t)param_5,
                    SUB41(param_1[0x491],0));
    startPostProc((QCamera3ProcessingChannel *)param_1,(reprocess_config_t *)acStack480);
    __ptr = (mm_camera_super_buf_t *)calloc(1,0x604);
    if (__ptr == (mm_camera_super_buf_t *)0x0) {
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar1 = -0xc;
      }
      else {
        mm_camera_debug_log();
        iVar1 = -0xc;
      }
      goto LAB_00057ac8;
    }
    iVar1 = setFwkInputPPData((QCamera3ProcessingChannel *)param_1,
                              (qcamera_fwk_input_pp_data_t *)__ptr,(camera3_stream_buffer *)param_4,
                              (reprocess_config_t *)acStack480,(metadata_buffer_t *)param_5,
                              (native_handle **)param_2,(uint)param_3);
    if (iVar1 != 0) {
      if (*(int *)(iVar3 + 0x20) != 0) {
        mm_camera_debug_log();
      }
      free(__ptr);
      goto LAB_00057ac8;
    }
    if (*(int *)(iVar3 + 0x28) != 0) {
      mm_camera_debug_log();
    }
    QCamera3PostProcessor::processData((QCamera3PostProcessor *)(param_1 + 0x24),__ptr);
  }
  iVar1 = 0;
LAB_00057ac8:
  if (*piVar4 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

