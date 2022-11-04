
/* qcamera::QCamera3ProcessingChannel::setReprocConfig(qcamera::reprocess_config_t&,
   camera3_stream_buffer*, metadata_buffer_t*, cam_format_t, cam_dimension_t) */

int qcamera::QCamera3ProcessingChannel::setReprocConfig
              (reprocess_config_t *param_1,camera3_stream_buffer *param_2,metadata_buffer_t *param_3
              ,cam_format_t param_4,cam_dimension_t param_5)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined3 in_stack_00000001;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(reprocess_config_t **)(param_2 + 0x1a4) = param_1 + 8;
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0xc);
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 8);
  }
  if (param_3 == (metadata_buffer_t *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = in_stack_00000004;
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*(int *)param_3 + 4);
    in_stack_00000008 = *(undefined4 *)(*(int *)param_3 + 8);
  }
  *(reprocess_config_t **)(param_2 + 0x1bc) = param_1;
  *(undefined4 *)(param_2 + 0x10) = in_stack_00000008;
  *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(*(int *)(param_1 + 0x14e0) + 4);
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(*(int *)(param_1 + 0x14e0) + 8);
  uVar1 = (**(code **)(*(int *)param_1 + 0x48))(param_1);
  *(undefined4 *)(param_2 + 0x1a8) = uVar1;
  *(undefined4 *)(param_2 + 8) = _param_5;
  if (param_3 == (metadata_buffer_t *)0x0) {
    iVar2 = *(int *)(param_1 + 0x14e8);
    *(int *)param_2 = iVar2;
    *(undefined4 *)(param_2 + 4) = _param_5;
    if (iVar2 != 8) goto LAB_0009f0b6;
LAB_0009f0fa:
    iVar2 = mm_stream_calc_offset_raw
                      (*(undefined4 *)(param_2 + 4),param_2 + 0xc,*(undefined4 *)(param_2 + 0x1a4),
                       param_2 + 0x14);
  }
  else {
    iVar2 = translateStreamTypeAndFormat
                      ((QCamera3ProcessingChannel *)param_1,*(camera3_stream **)param_3,
                       (cam_stream_type_t *)param_2,(cam_format_t *)(param_2 + 4));
    if (iVar2 != 0) {
      if (*(int *)(*(int *)(DAT_0009f1a0 + 0x9f082) + 0x20) == 0) {
        return iVar2;
      }
      mm_camera_debug_log(1,1,DAT_0009f1a8 + 0x9f0a4,0x6c5,DAT_0009f1a4 + 0x9f098,
                          *(undefined4 *)(*(int *)param_3 + 0xc));
      return iVar2;
    }
    iVar2 = *(int *)param_2;
    if (iVar2 == 8) goto LAB_0009f0fa;
LAB_0009f0b6:
    if (iVar2 == 4) {
      iVar2 = mm_stream_calc_offset_video(*(undefined4 *)(param_2 + 4),param_2 + 0xc,param_2 + 0x14)
      ;
    }
    else if (iVar2 == 1) {
      iVar2 = *(int *)(param_1 + 0x44);
      bVar3 = iVar2 != 0;
      if (bVar3) {
        iVar2 = *(int *)(param_1 + 0x24);
      }
      if (!bVar3 || iVar2 == 0) {
        if (*(int *)(*(int *)(DAT_0009f1ac + 0x9f0d2) + 0x20) == 0) {
          return -1;
        }
        mm_camera_debug_log(1,1,DAT_0009f1b4 + 0x9f0ec,0x6da,DAT_0009f1b0 + 0x9f0e4);
        iVar2 = -1;
        goto LAB_0009f148;
      }
      iVar2 = mm_stream_calc_offset_preview
                        (*(undefined4 *)(iVar2 + 0x14),param_2 + 0xc,
                         *(undefined4 *)(param_2 + 0x1a4),param_2 + 0x14);
    }
    else {
      iVar2 = mm_stream_calc_offset_snapshot
                        (_param_5,param_2 + 0xc,*(undefined4 *)(param_2 + 0x1a4),param_2 + 0x14);
    }
  }
  if (iVar2 == 0) {
    if ((param_4 != 0) && (*(char *)(param_4 + 0x109) != '\0')) {
      uVar4 = *(undefined8 *)("\nPending frame drop list: %zu\n" + param_4 + 10);
      *(undefined8 *)(param_2 + 0x1ac) =
           *(undefined8 *)("\nPending frame drop list: %zu\n" + param_4 + 2);
      *(undefined8 *)(param_2 + 0x1b4) = uVar4;
    }
    return 0;
  }
LAB_0009f148:
  if (*(int *)(*(int *)(DAT_0009f1b8 + 0x9f14e) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_0009f1c0 + 0x9f16e,0x6f6,DAT_0009f1bc + 0x9f162,
                        *(undefined4 *)(param_1 + 0x14e8));
  }
  return iVar2;
}

