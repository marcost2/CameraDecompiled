
/* qcamera::QCameraMuxer::cancel_picture(camera_device*) */

int qcamera::QCameraMuxer::cancel_picture(camera_device *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r7;
  int iVar5;
  
  iVar5 = *(int *)(DAT_000c31ec + 0xc30a6);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c31f4 + 0xc30c2,0x543,DAT_000c31f0 + 0xc30ba);
  }
  piVar4 = *(int **)(DAT_000c31f8 + 0xc30ca);
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    if (*(int *)(iVar5 + 0x20) == 0) {
      return -0x13;
    }
    uVar2 = 0x544;
    iVar5 = DAT_000c31fc + 0xc3106;
    iVar1 = DAT_000c3200 + 0xc310e;
  }
  else {
    if (param_1 != (camera_device *)0x0) {
      unaff_r7 = *(int *)(param_1 + 0x44);
    }
    if (param_1 != (camera_device *)0x0 && unaff_r7 != 0) {
      if (*(int *)(unaff_r7 + 0x54) != 0) {
        uVar3 = 0;
        do {
          iVar1 = *(int *)(iVar1 + 0x2c) + *(int *)(unaff_r7 + 0x5c + uVar3 * 4) * 0x38;
          if (iVar1 == 0) {
            if (*(int *)(iVar5 + 0x20) == 0) {
              return -0x13;
            }
            uVar2 = 0x54c;
            iVar5 = DAT_000c320c + 0xc31a6;
            iVar1 = DAT_000c3210 + 0xc31ae;
            goto LAB_000c310c;
          }
          if (*(int *)(iVar1 + 0x30) == 0) {
            if (*(int *)(iVar5 + 0x20) == 0) {
              return -0x13;
            }
            uVar2 = 0x54f;
            iVar5 = DAT_000c3214 + 0xc31c2;
            iVar1 = DAT_000c3218 + 0xc31ca;
            goto LAB_000c310c;
          }
          iVar1 = QCamera2HardwareInterface::cancel_picture(*(camera_device **)(iVar1 + 0x34));
          if (iVar1 != 0) {
            if (*(int *)(iVar5 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000c3220 + 0xc31e8,0x553,DAT_000c321c + 0xc31e0);
              return iVar1;
            }
            return iVar1;
          }
          iVar1 = *piVar4;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(unaff_r7 + 0x54));
      }
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(iVar1 + 0x84),2,'\0','\0');
      QCameraQueue::flush((QCameraQueue *)(*piVar4 + 0x3c),true);
      QCameraQueue::flush((QCameraQueue *)(*piVar4 + 0x60),true);
      if (*(int *)(iVar5 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000c3228 + 0xc318c,0x55c,DAT_000c3224 + 0xc3184);
        return 0;
      }
      return 0;
    }
    if (*(int *)(iVar5 + 0x20) == 0) {
      return -0x13;
    }
    uVar2 = 0x548;
    iVar5 = DAT_000c3204 + 0xc30ec;
    iVar1 = DAT_000c3208 + 0xc30f4;
  }
LAB_000c310c:
  mm_camera_debug_log(1,1,iVar1,uVar2,iVar5);
  return -0x13;
}

