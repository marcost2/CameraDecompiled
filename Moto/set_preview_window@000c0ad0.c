
/* qcamera::QCameraMuxer::set_preview_window(camera_device*, preview_stream_ops*) */

int qcamera::QCameraMuxer::set_preview_window(camera_device *param_1,preview_stream_ops *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  piVar1 = *(int **)(DAT_000c0bd4 + 0xc0ada);
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    if (*(int *)(*(int *)(DAT_000c0bd8 + 0xc0b10) + 0x20) == 0) {
      return -0x13;
    }
    uVar4 = 0x17b;
    iVar3 = DAT_000c0bdc + 0xc0b22;
    iVar2 = DAT_000c0be0 + 0xc0b2a;
  }
  else {
    if (param_1 != (camera_device *)0x0) {
      piVar1 = *(int **)(param_1 + 0x44);
    }
    if (param_1 != (camera_device *)0x0 && piVar1 != (int *)0x0) {
      if (piVar1[0x15] != 0) {
        uVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 0x2c) + piVar1[uVar5 + 0x17] * 0x38;
          if (iVar2 == 0) {
            if (*(int *)(*(int *)(DAT_000c0bf0 + 0xc0b62) + 0x20) == 0) {
              return -0x13;
            }
            uVar4 = 0x182;
            iVar3 = DAT_000c0bf4 + 0xc0b72;
            iVar2 = DAT_000c0bf8 + 0xc0b7a;
            goto LAB_000c0b28;
          }
          if (*(int *)(iVar2 + 0x10) == 0) {
            if (*(int *)(iVar2 + 0x30) != 0) {
              iVar3 = QCamera2HardwareInterface::set_preview_window
                                (*(camera_device **)(iVar2 + 0x34),param_2);
              if (iVar3 == 0) {
                return 0;
              }
              if (*(int *)(*(int *)(DAT_000c0c08 + 0xc0b90) + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000c0c10 + 0xc0ba8,0x18a,DAT_000c0c0c + 0xc0ba0);
                return iVar3;
              }
              return iVar3;
            }
            if (*(int *)(*(int *)(DAT_000c0bfc + 0xc0bb2) + 0x20) == 0) {
              return -0x13;
            }
            uVar4 = 0x187;
            iVar3 = DAT_000c0c00 + 0xc0bc2;
            iVar2 = DAT_000c0c04 + 0xc0bca;
            goto LAB_000c0b28;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)piVar1[0x15]);
      }
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000c0be4 + 0xc0af0) + 0x20) == 0) {
      return -0x13;
    }
    uVar4 = 0x17e;
    iVar3 = DAT_000c0be8 + 0xc0b02;
    iVar2 = DAT_000c0bec + 0xc0b0a;
  }
LAB_000c0b28:
  mm_camera_debug_log(1,1,iVar2,uVar4,iVar3);
  return -0x13;
}

