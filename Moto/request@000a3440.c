
/* qcamera::QCamera3PicChannel::request(native_handle const**, unsigned int, camera3_stream_buffer*,
   metadata_buffer_t*, int&, bool, bool) */

uint __thiscall
qcamera::QCamera3PicChannel::request
          (QCamera3PicChannel *this,native_handle **param_1,uint param_2,
          camera3_stream_buffer *param_3,metadata_buffer_t *param_4,int *param_5,bool param_6,
          bool param_7)

{
  uint *puVar1;
  qcamera_fwk_input_pp_data_t *__ptr;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  QCamera3StreamMem *this_00;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined3 in_stack_00000009;
  undefined3 in_stack_0000000d;
  undefined4 local_1e8;
  undefined4 uStack484;
  undefined local_1dc [8];
  undefined auStack468 [400];
  undefined4 local_44;
  int local_28;
  
  piVar11 = *(int **)(DAT_000a37f4 + 0xa3456);
  local_28 = *piVar11;
  puVar1 = *(uint **)(DAT_000a37f8 + 0xa3464);
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_000a37fc + 0xa3472) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a3800 + 0xa3482) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a39ac + 0xa3994);
    }
  }
  iVar9 = *(int *)(this + 4);
  __aeabi_memclr8(&local_1e8,0x1c0);
  uVar4 = *(undefined4 *)(this + 0x3180);
  uVar6 = *(undefined4 *)(this + 0x3184);
  QCamera3ProcessingChannel::setReprocConfig
            ((reprocess_config_t *)this,(camera3_stream_buffer *)&local_1e8,
             (metadata_buffer_t *)param_3,(cam_format_t)param_4,
             SUB41(*(undefined4 *)(this + 0x14ec),0));
  if (QCameraParameters::FOCUS_MODES_MAP[iVar9 + 0x20] != '\0') {
    if (*(int *)(*(int *)(DAT_000a3804 + 0xa34cc) + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000a380c + 0xa34e4,0xf77,DAT_000a3808 + 0xa34dc,uVar4,uVar6);
    }
    QCamera3HardwareInterface::getQuadraCfaDim();
    uStack484 = *(undefined4 *)(QCameraParameters::FOCUS_MODES_MAP + iVar9 + 0x18);
    local_1e8 = 8;
    mm_stream_calc_offset_raw(uStack484,local_1dc,local_44,auStack468);
  }
  if (this[0x50] == (QCamera3PicChannel)0x0) {
    if (*(int *)(*(int *)(DAT_000a3828 + 0xa35be) + 0x20) == 0) {
      uVar12 = 0xffffffed;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000a3830 + 0xa35da,0xf81,DAT_000a382c + 0xa35d2,uVar4,uVar6);
      uVar12 = 0xffffffed;
    }
    goto LAB_000a38f8;
  }
  if (this[0x14f1] == (QCamera3PicChannel)0x0) {
    QCamera3PostProcessor::start
              ((QCamera3PostProcessor *)(this + 0x94),(reprocess_config_t *)&local_1e8);
    this[0x14f1] = (QCamera3PicChannel)0x1;
    if (_param_6 == 0) goto LAB_000a3602;
LAB_000a3530:
    if (*(int *)(*(int *)(DAT_000a3810 + 0xa3536) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a3818 + 0xa354e,0xfa1,DAT_000a3814 + 0xa3546,uVar4,uVar6);
    }
    uVar12 = 0;
  }
  else {
    if (_param_6 != 0) goto LAB_000a3530;
LAB_000a3602:
    this_00 = (QCamera3StreamMem *)(this + 0x6b0);
    uVar12 = QCamera3StreamMem::getMatchBufIndex(this_00,param_1);
    if ((int)uVar12 < 0) {
      uVar12 = (**(code **)(*(int *)this + 0x34))(this,param_1,*(undefined4 *)(this + 0x74));
      if (uVar12 != 0) {
        if (*(int *)(*(int *)(DAT_000a39b0 + 0xa377e) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000a39b8 + 0xa379c,0xf8f,DAT_000a39b4 + 0xa3792,uVar12);
        }
        goto LAB_000a38f8;
      }
      uVar12 = QCamera3StreamMem::getMatchBufIndex(this_00,param_1);
      if (0x7fffffff < uVar12) {
        if (*(int *)(*(int *)(DAT_000a39bc + 0xa3882) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000a39c4 + 0xa389a,0xf95,DAT_000a39c0 + 0xa3892);
        }
        uVar12 = 0xffffffe0;
        goto LAB_000a38f8;
      }
    }
    if (*(int *)(*(int *)(DAT_000a39a8 + 0xa3622) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a39cc + 0xa363c,0xf99,DAT_000a39c8 + 0xa3632,uVar12,param_2);
    }
    QCamera3StreamMem::markFrameNumber(this_00,uVar12,param_2);
    uVar12 = queueJpegSetting(this,uVar12,param_4);
  }
  if (param_3 != (camera3_stream_buffer *)0x0) {
    __ptr = (qcamera_fwk_input_pp_data_t *)calloc(1,0x60c);
    if (__ptr == (qcamera_fwk_input_pp_data_t *)0x0) {
      if (*(int *)(*(int *)(DAT_000a3a00 + 0xa3742) + 0x20) == 0) {
        uVar12 = 0xfffffff4;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000a3a08 + 0xa375e,0xfd9,DAT_000a3a04 + 0xa3756);
        uVar12 = 0xfffffff4;
      }
    }
    else {
      uVar12 = QCamera3ProcessingChannel::setFwkInputPPData
                         ((QCamera3ProcessingChannel *)this,__ptr,param_3,
                          (reprocess_config_t *)&local_1e8,param_4,(native_handle **)0x0,param_2);
      if (uVar12 == 0) {
        if (*(int *)(*(int *)(DAT_000a3a0c + 0xa37ca) + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000a3a14 + 0xa37e2,0xfe3,DAT_000a3a10 + 0xa37da);
        }
        QCamera3PostProcessor::processData((QCamera3PostProcessor *)(this + 0x94),__ptr);
        uVar12 = 0;
      }
      else {
        if (*(int *)(*(int *)(DAT_000a381c + 0xa3594) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000a3824 + 0xa35ae,0xfdf,DAT_000a3820 + 0xa35a4,uVar12);
        }
        free(__ptr);
      }
    }
    goto LAB_000a38f8;
  }
  if (QCameraParameters::FOCUS_MODES_MAP[iVar9 + 0x20] != '\0') {
    iVar9 = *(int *)(DAT_000a39d0 + 0xa3678);
    if (*(int *)(iVar9 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000a39d8 + 0xa3690,0xfa5,DAT_000a39d4 + 0xa3688);
    }
    iVar10 = *(int *)(QCameraParameters::FOCUS_MODES_MAP + *(int *)(this + 4) + 0x1c);
    if (((iVar10 == 0) || (*(char *)(iVar10 + 0x530) == '\0')) ||
       (*(char *)(iVar10 + 0x2e4) == '\0')) {
      if (*(int *)(iVar9 + 0x20) != 0) {
        uVar4 = 0xfa9;
        iVar9 = DAT_000a39dc + 0xa37b4;
        iVar10 = DAT_000a39e0 + 0xa37bc;
LAB_000a37ba:
        mm_camera_debug_log(1,1,iVar10,uVar4,iVar9);
      }
    }
    else {
      puVar2 = (undefined8 *)malloc(0x30);
      if (puVar2 == (undefined8 *)0x0) {
        if (*(int *)(iVar9 + 0x20) != 0) {
          uVar4 = 0xfb0;
          iVar9 = DAT_000a39e4 + 0xa3940;
          iVar10 = DAT_000a39e8 + 0xa3948;
          goto LAB_000a37ba;
        }
      }
      else {
        uVar13 = *(undefined8 *)(iVar10 + 0x300);
        uVar14 = *(undefined8 *)(iVar10 + 0x2e8);
        uVar15 = *(undefined8 *)(iVar10 + 0x2f0);
        uVar16 = *(undefined8 *)(iVar10 + 0x308);
        uVar17 = *(undefined8 *)(iVar10 + 0x310);
        puVar2[2] = *(undefined8 *)(iVar10 + 0x2f8);
        puVar2[3] = uVar13;
        *puVar2 = uVar14;
        puVar2[1] = uVar15;
        puVar2[4] = uVar16;
        puVar2[5] = uVar17;
        QCamera3PostProcessor::processPPMetadata
                  ((QCamera3PostProcessor *)(this + 0x94),(mm_camera_super_buf_t *)puVar2);
        puVar2 = (undefined8 *)malloc(0x30);
        if (puVar2 != (undefined8 *)0x0) {
          uVar13 = *(undefined8 *)(iVar10 + 0x2cc);
          uVar14 = *(undefined8 *)(iVar10 + 0x2b4);
          uVar15 = *(undefined8 *)(iVar10 + 700);
          uVar16 = *(undefined8 *)(iVar10 + 0x2d4);
          uVar17 = *(undefined8 *)(iVar10 + 0x2dc);
          puVar2[2] = *(undefined8 *)(iVar10 + 0x2c4);
          puVar2[3] = uVar13;
          *puVar2 = uVar14;
          puVar2[1] = uVar15;
          puVar2[4] = uVar16;
          puVar2[5] = uVar17;
          QCamera3PostProcessor::processData
                    ((QCamera3PostProcessor *)(this + 0x94),(mm_camera_super_buf_t *)puVar2);
          goto LAB_000a38f8;
        }
        if (*(int *)(iVar9 + 0x20) != 0) {
          uVar4 = 0xfb8;
          iVar9 = DAT_000a39ec + 0xa3980;
          iVar10 = DAT_000a39f0 + 0xa3988;
          goto LAB_000a37ba;
        }
      }
    }
    uVar12 = 0xffffffff;
    goto LAB_000a38f8;
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x3194));
  puVar3 = (uint *)(*(uint **)(this + 0x319c))[2];
  if (puVar3 == *(uint **)(this + 0x319c)) {
    uVar8 = QCamera3StreamMem::allocateOne
                      (*(QCamera3StreamMem **)(this + 0x3190),*(uint *)(this + 0x31a0));
    uVar12 = uVar8;
    if (-1 < (int)uVar8) goto LAB_000a38c0;
    if (*(int *)(*(int *)(DAT_000a39f4 + 0xa394e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a39fc + 0xa3968,0xfc3,DAT_000a39f8 + 0xa3960);
    }
  }
  else {
    uVar8 = *puVar3;
    uVar5 = puVar3[1];
    uVar7 = puVar3[2];
    *(uint *)(uVar5 + 8) = uVar7;
    *(uint *)(uVar7 + 4) = uVar5;
    if (puVar3 != (uint *)0x0) {
      operator_delete(puVar3);
    }
LAB_000a38c0:
    if (_param_7 != 0) {
      param_2 = 0xffffffff;
    }
    QCamera3StreamMem::markFrameNumber(*(QCamera3StreamMem **)(this + 0x3190),uVar8,param_2);
    (**(code **)(**(int **)(this + 0x24) + 0xc))(*(int **)(this + 0x24),uVar8);
    *param_5 = uVar8;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3194));
LAB_000a38f8:
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_000a3a18 + 0xa3906) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a3a1c + 0xa3914) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar11 == local_28) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

