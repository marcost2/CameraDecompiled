
/* qcamera::QCamera3Channel::addStream(cam_stream_type_t, cam_format_t, cam_dimension_t,
   cam_rotation_t, unsigned char, unsigned long long, cam_is_type_t, unsigned int) */

int qcamera::QCamera3Channel::addStream
              (cam_stream_type_t param_1,cam_format_t param_2,cam_dimension_t param_3,
              cam_rotation_t param_4,uchar param_5,ulonglong param_6,cam_is_type_t param_7,
              uint param_8)

{
  int *this;
  int iVar1;
  undefined3 in_stack_00000001;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    this = (int *)operator_new(0x2c0);
    QCamera3Stream::QCamera3Stream
              ((QCamera3Stream *)this,*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x54),
               *(mm_camera_ops_t **)(param_1 + 0x4c),(cam_padding_info_t *)(param_1 + 8),
               (QCamera3Channel *)param_1);
    if (*(int *)(*(int *)(DAT_00056758 + 0x566d0) + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    iVar1 = (**(code **)(*this + 8))
                      (this,param_2,param_3,param_4,_param_5,(undefined4)param_6,0,param_6._4_4_,
                       param_8,in_stack_00000014,in_stack_00000018);
    if (iVar1 == 0) {
      *(int **)(param_1 + *(int *)(param_1 + 0x44) * 4 + 0x24) = this;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      iVar1 = 0;
    }
    else {
      (**(code **)(*this + 4))(this);
    }
  }
  else if (*(int *)(*(int *)(DAT_0005674c + 0x5667e) + 0x20) == 0) {
    iVar1 = -0x16;
  }
  else {
    mm_camera_debug_log();
    iVar1 = -0x16;
  }
  return iVar1;
}

