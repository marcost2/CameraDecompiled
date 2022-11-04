
/* qcamera::QCamera3ProcessingChannel::request(native_handle const**, unsigned int,
   camera3_stream_buffer*, metadata_buffer_t*, int&, bool, bool) */

int qcamera::QCamera3ProcessingChannel::request
              (native_handle **param_1,uint param_2,camera3_stream_buffer *param_3,
              metadata_buffer_t *param_4,int *param_5,bool param_6,bool param_7)

{
  qcamera_fwk_input_pp_data_t *__ptr;
  int iVar1;
  uint uVar2;
  native_handle **this;
  int *piVar3;
  int iVar4;
  undefined3 in_stack_00000005;
  undefined4 uVar5;
  undefined4 uVar6;
  camera3_stream_buffer acStack488 [448];
  int local_28;
  
  piVar3 = *(int **)(DAT_0009ef88 + 0x9ecac);
  local_28 = *piVar3;
  if ((param_2 == 0) || (param_5 == (int *)0x0)) {
    if (*(int *)(*(int *)(DAT_0009ef8c + 0x9ed8a) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009ef94 + 0x9eda2,0x499,DAT_0009ef90 + 0x9ed9a);
    }
    iVar1 = -0x16;
    goto LAB_0009eda8;
  }
  if (param_4 == (metadata_buffer_t *)0x0) {
    if (*(char *)(param_1 + 0x14) == '\0') {
      iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_2,param_1[0x1d]);
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(DAT_0009efbc + 0x9ee96) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0009efc4 + 0x9eeb4,0x4bc,DAT_0009efc0 + 0x9eeaa,iVar1);
        }
        goto LAB_0009eda8;
      }
      iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
      if (iVar1 != 0) goto LAB_0009eda8;
    }
    else if (*(int *)(*(int *)(DAT_0009efc8 + 0x9edca) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0009efd0 + 0x9ede2,0x4c4,DAT_0009efcc + 0x9edda);
    }
    this = param_1 + 0x1ac;
    uVar2 = QCamera3StreamMem::getMatchBufIndex((QCamera3StreamMem *)this,(void *)param_2);
    if ((int)uVar2 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_2,param_1[0x1d]);
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(DAT_0009efd4 + 0x9eece) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0009efdc + 0x9eeec,0x4cc,DAT_0009efd8 + 0x9eee2,iVar1);
        }
        goto LAB_0009eda8;
      }
      uVar2 = QCamera3StreamMem::getMatchBufIndex((QCamera3StreamMem *)this,(void *)param_2);
      if (0x7fffffff < uVar2) {
        if (*(int *)(*(int *)(DAT_0009efe0 + 0x9ef5c) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0009efe8 + 0x9ef74,0x4d2,DAT_0009efe4 + 0x9ef6c);
        }
        iVar1 = -0x20;
        goto LAB_0009eda8;
      }
    }
    iVar1 = QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)this,uVar2,(uint)param_3);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(DAT_0009efec + 0x9ee0e) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0009eff4 + 0x9ee2c,0x4d9,DAT_0009eff0 + 0x9ee20,param_3,uVar2);
      }
      goto LAB_0009eda8;
    }
    iVar1 = (**(code **)(*(int *)param_1[9] + 0xc))(param_1[9],uVar2);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(DAT_0009eff8 + 0x9ef0a) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0009f000 + 0x9ef22,0x4de,DAT_0009effc + 0x9ef1a);
      }
      QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)this,uVar2,0xffffffff);
      goto LAB_0009eda8;
    }
    *_param_6 = uVar2;
  }
  else {
    iVar4 = *(int *)(DAT_0009ef98 + 0x9ecd0);
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0009efa0 + 0x9ecf4,0x49f,DAT_0009ef9c + 0x9ece8,param_1[0x53a]);
    }
    __aeabi_memclr8(acStack488,0x1c0);
    uVar5 = 0;
    uVar6 = 0;
    setReprocConfig((reprocess_config_t *)param_1,acStack488,param_4,(cam_format_t)param_5,
                    SUB41(param_1[0x53b],0));
    if (*(char *)((int)param_1 + 0x14f1) == '\0') {
      QCamera3PostProcessor::start
                ((QCamera3PostProcessor *)(param_1 + 0x25),(reprocess_config_t *)acStack488);
      *(undefined *)((int)param_1 + 0x14f1) = 1;
    }
    __ptr = (qcamera_fwk_input_pp_data_t *)calloc(1,0x60c);
    if (__ptr == (qcamera_fwk_input_pp_data_t *)0x0) {
      if (*(int *)(iVar4 + 0x20) == 0) {
        iVar1 = -0xc;
      }
      else {
        mm_camera_debug_log(1,1,DAT_0009efb8 + 0x9ee4c,0x4ab,DAT_0009efb4 + 0x9ee44,uVar5,uVar6);
        iVar1 = -0xc;
      }
      goto LAB_0009eda8;
    }
    iVar1 = setFwkInputPPData((QCamera3ProcessingChannel *)param_1,__ptr,
                              (camera3_stream_buffer *)param_4,(reprocess_config_t *)acStack488,
                              (metadata_buffer_t *)param_5,(native_handle **)param_2,(uint)param_3);
    if (iVar1 != 0) {
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0009efa8 + 0x9ed7a,0x4b0,DAT_0009efa4 + 0x9ed70,iVar1);
      }
      free(__ptr);
      goto LAB_0009eda8;
    }
    if (*(int *)(iVar4 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_0009efb0 + 0x9ee6e,0x4b4,DAT_0009efac + 0x9ee66);
    }
    QCamera3PostProcessor::processData((QCamera3PostProcessor *)(param_1 + 0x25),__ptr);
  }
  iVar1 = 0;
LAB_0009eda8:
  if (*piVar3 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

