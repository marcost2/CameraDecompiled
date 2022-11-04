
/* qcamera::QCamera3ProcessingChannel::setReprocConfig(qcamera::reprocess_config_t&,
   camera3_stream_buffer*, metadata_buffer_t*, cam_format_t, cam_dimension_t) */

int qcamera::QCamera3ProcessingChannel::setReprocConfig
              (reprocess_config_t *param_1,camera3_stream_buffer *param_2,metadata_buffer_t *param_3
              ,cam_format_t param_4,cam_dimension_t param_5)

{
  undefined4 uVar1;
  int iVar2;
  QCamera3Stream *this;
  undefined8 uVar3;
  undefined3 in_stack_00000001;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(reprocess_config_t **)(param_2 + 0x1a0) = param_1 + 8;
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0xc);
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 8);
  }
  if (param_3 == (metadata_buffer_t *)0x0) {
    *(undefined4 *)(param_2 + 8) = in_stack_00000004;
  }
  else {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(int *)param_3 + 4);
    in_stack_00000008 = *(undefined4 *)(*(int *)param_3 + 8);
  }
  *(reprocess_config_t **)(param_2 + 0x1b4) = param_1;
  *(undefined4 *)(param_2 + 0xc) = in_stack_00000008;
  *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(*(int *)(param_1 + 0x1238) + 4);
  *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(*(int *)(param_1 + 0x1238) + 8);
  uVar1 = (**(code **)(*(int *)param_1 + 0x44))(param_1);
  *(undefined4 *)(param_2 + 0x1a4) = uVar1;
  if (param_3 == (metadata_buffer_t *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x1240);
    *(undefined4 *)(param_2 + 4) = _param_5;
  }
  else {
    iVar2 = translateStreamTypeAndFormat
                      ((QCamera3ProcessingChannel *)param_1,*(camera3_stream **)param_3,
                       (cam_stream_type_t *)param_2,(cam_format_t *)(param_2 + 4));
    if (iVar2 != 0) {
      if (*(int *)(*(int *)(DAT_00057ec4 + 0x57da0) + 0x20) == 0) {
        return iVar2;
      }
      mm_camera_debug_log();
      return iVar2;
    }
  }
  iVar2 = *(int *)param_2;
  if (iVar2 == 8) {
    iVar2 = mm_stream_calc_offset_raw();
  }
  else if (iVar2 == 4) {
    iVar2 = mm_stream_calc_offset_video();
  }
  else if (iVar2 == 1) {
    this = (QCamera3Stream *)QCamera3Channel::getStreamByIndex((QCamera3Channel *)param_1,0);
    if (this == (QCamera3Stream *)0x0) {
      if (*(int *)(*(int *)(DAT_00057ed0 + 0x57e9e) + 0x20) == 0) {
        return -1;
      }
      mm_camera_debug_log();
      iVar2 = -1;
      goto LAB_00057e38;
    }
    QCamera3Stream::getStreamInfo(this);
    iVar2 = mm_stream_calc_offset_preview();
  }
  else {
    iVar2 = mm_stream_calc_offset_snapshot();
  }
  if (iVar2 == 0) {
    if ((param_4 != 0) && (*(char *)(param_4 + 0xe7) != '\0')) {
      uVar3 = *(undefined8 *)(param_4 + 0x76c98);
      *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(param_4 + 0x76ca0);
      *(undefined8 *)(param_2 + 0x1a8) = uVar3;
    }
    return 0;
  }
LAB_00057e38:
  if (*(int *)(*(int *)(DAT_00057edc + 0x57e3e) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  return iVar2;
}

