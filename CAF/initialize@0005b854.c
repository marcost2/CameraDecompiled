
/* qcamera::QCamera3PicChannel::initialize(cam_is_type_t) */

int qcamera::QCamera3PicChannel::initialize(camera3_device *param_1,camera3_callback_ops *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  cam_is_type_t in_stack_ffffffd4;
  
  iVar1 = *(int *)(param_1 + 0x1238);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_0005b92c + 0x5b8da) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    iVar2 = -0x13;
  }
  else {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x44) == 0) {
      *(camera3_callback_ops **)(param_1 + 0x74) = param_2;
      *(undefined4 *)(param_1 + 12000) = *(undefined4 *)(iVar1 + 0x14);
      uVar3 = QCamera3Channel::addStream
                        ((cam_stream_type_t)param_1,*(cam_format_t *)(param_1 + 0x1240),
                         SUB41(*(undefined4 *)(param_1 + 0x1244),0),
                         *(cam_rotation_t *)(param_1 + 0x2ee4),
                         (uchar)*(undefined4 *)(param_1 + 0x2ee8),
                         (ulonglong)CONCAT14(*(undefined *)(iVar1 + 0x14),1),in_stack_ffffffd4,
                         *(uint *)(param_1 + 0x68));
      iVar2 = (int)uVar3;
      if (iVar2 == 0) {
        iVar2 = QCamera3ProcessingChannel::initialize
                          (param_1,(camera3_callback_ops *)((ulonglong)uVar3 >> 0x20));
        if (iVar2 == 0) {
          return 0;
        }
        iVar1 = *(int *)(*(int *)(DAT_0005b944 + 0x5b90a) + 0x20);
      }
      else {
        iVar1 = *(int *)(*(int *)(DAT_0005b938 + 0x5b8ba) + 0x20);
      }
      if (iVar1 != 0) {
        mm_camera_debug_log();
      }
    }
  }
  return iVar2;
}

