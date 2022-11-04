
/* qcamera::QCameraMuxer::send_command(camera_device*, int, int, int) */

int qcamera::QCameraMuxer::send_command(camera_device *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_r4;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(DAT_000c3b08 + 0xc38f8);
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c3b10 + 0xc3914,0x621,DAT_000c3b0c + 0xc390c);
  }
  piVar6 = *(int **)(DAT_000c3b14 + 0xc391c);
  if (*piVar6 == 0) {
    if (*(int *)(iVar8 + 0x20) == 0) {
      return -0x13;
    }
    uVar5 = 0x622;
    iVar8 = DAT_000c3b18 + 0xc3958;
    iVar3 = DAT_000c3b1c + 0xc3960;
  }
  else {
    if (param_1 != (camera_device *)0x0) {
      unaff_r4 = *(int *)(param_1 + 0x44);
    }
    if (param_1 != (camera_device *)0x0 && unaff_r4 != 0) {
      if (*(int *)(unaff_r4 + 0x54) == 0) {
        uVar1 = 0;
LAB_000c39de:
        if (param_2 == 0x18) {
          QCameraCmdThread::sendCmd((QCameraCmdThread *)(*piVar6 + 0x84),2,'\0','\0');
          QCameraQueue::flush((QCameraQueue *)(*piVar6 + 0x3c),true);
          QCameraQueue::flush((QCameraQueue *)(*piVar6 + 0x60),true);
        }
        else if ((param_2 == 0x17) && (uVar1 != 0)) {
          uVar1 = 0;
          do {
            iVar3 = *(int *)(*piVar6 + 0x2c) + *(int *)(unaff_r4 + 0x5c + uVar1 * 4) * 0x38;
            if (iVar3 == 0) {
              if (*(int *)(iVar8 + 0x20) == 0) {
                return -0x13;
              }
              uVar5 = 0x63b;
              iVar8 = DAT_000c3b40 + 0xc3ac0;
              iVar3 = DAT_000c3b44 + 0xc3ac8;
              goto LAB_000c395e;
            }
            if (*(int *)(iVar3 + 0x30) == 0) {
              if (*(int *)(iVar8 + 0x20) == 0) {
                return -0x13;
              }
              uVar5 = 0x63e;
              iVar8 = DAT_000c3b48 + 0xc3ade;
              iVar3 = DAT_000c3b4c + 0xc3ae6;
              goto LAB_000c395e;
            }
            iVar3 = QCamera2HardwareInterface::send_command_restart
                              (*(camera_device **)(iVar3 + 0x34),0x17,param_3,param_4);
            if (iVar3 != 0) {
              if (*(int *)(iVar8 + 0x20) == 0) {
                return iVar3;
              }
              uVar5 = 0x643;
              iVar8 = DAT_000c3b50 + 0xc3afe;
              puVar4 = &UNK_000c3b06 + DAT_000c3b54;
LAB_000c3aa4:
              mm_camera_debug_log(1,1,puVar4,uVar5,iVar8);
              return iVar3;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(uint *)(unaff_r4 + 0x54));
        }
        if (*(int *)(iVar8 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000c3b5c + 0xc3a62,0x656,DAT_000c3b58 + 0xc3a5a);
        }
        return 0;
      }
      iVar2 = *(int *)(*piVar6 + 0x2c);
      iVar3 = *(int *)(unaff_r4 + 0x5c);
      if (iVar2 + iVar3 * 0x38 != 0) {
        iVar7 = 0x18;
        do {
          iVar2 = iVar2 + iVar3 * 0x38;
          if (*(int *)(iVar2 + 0x30) == 0) {
            if (*(int *)(iVar8 + 0x20) == 0) {
              return -0x13;
            }
            uVar5 = 0x62d;
            iVar8 = DAT_000c3b30 + 0xc3a7e;
            iVar3 = DAT_000c3b34 + 0xc3a86;
            goto LAB_000c395e;
          }
          iVar3 = QCamera2HardwareInterface::send_command
                            (*(camera_device **)(iVar2 + 0x34),param_2,param_3,param_4);
          if (iVar3 != 0) {
            if (*(int *)(iVar8 + 0x20) == 0) {
              return iVar3;
            }
            uVar5 = 0x631;
            iVar8 = DAT_000c3b38 + 0xc3a9e;
            puVar4 = (undefined *)(DAT_000c3b3c + 0xc3aa6);
            goto LAB_000c3aa4;
          }
          uVar1 = *(uint *)(unaff_r4 + 0x54);
          if (uVar1 <= iVar7 - 0x17U) goto LAB_000c39de;
          iVar3 = *(int *)(unaff_r4 + iVar7 * 4);
          iVar7 = iVar7 + 1;
          iVar2 = *(int *)(*piVar6 + 0x2c);
        } while (iVar2 + iVar3 * 0x38 != 0);
      }
      if (*(int *)(iVar8 + 0x20) == 0) {
        return -0x13;
      }
      uVar5 = 0x62a;
      iVar8 = DAT_000c3b28 + 0xc39d4;
      iVar3 = DAT_000c3b2c + 0xc39dc;
    }
    else {
      if (*(int *)(iVar8 + 0x20) == 0) {
        return -0x13;
      }
      uVar5 = 0x626;
      iVar8 = DAT_000c3b20 + 0xc393e;
      iVar3 = DAT_000c3b24 + 0xc3946;
    }
  }
LAB_000c395e:
  mm_camera_debug_log(1,1,iVar3,uVar5,iVar8);
  return -0x13;
}

