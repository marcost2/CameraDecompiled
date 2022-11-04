
/* qcamera::QCameraMuxer::enable_msg_type(camera_device*, int) */

void qcamera::QCameraMuxer::enable_msg_type(camera_device *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  iVar6 = *(int *)(DAT_000c10ac + 0xc0fa8);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c10b4 + 0xc0fc0,0x1ea,DAT_000c10b0 + 0xc0fb8);
  }
  piVar7 = *(int **)(DAT_000c10b8 + 0xc0fc8);
  iVar1 = *piVar7;
  if (iVar1 == 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar4 = 0x1eb;
    iVar6 = DAT_000c10bc + 0xc1004;
    iVar1 = DAT_000c10c0 + 0xc100c;
  }
  else {
    bVar8 = param_1 != (camera_device *)0x0;
    if (bVar8) {
      param_1 = *(camera_device **)(param_1 + 0x44);
    }
    if (bVar8 && param_1 != (camera_device *)0x0) {
      if (*(int *)(param_1 + 0x54) == 0) {
LAB_000c1074:
        if (*(int *)(iVar6 + 0x28) == 0) {
          return;
        }
        uVar2 = 3;
        uVar4 = 0x1f7;
        iVar6 = DAT_000c10dc + 0xc1084;
        iVar1 = DAT_000c10e0 + 0xc108c;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x2c);
        iVar1 = *(int *)(param_1 + 0x5c);
        if (iVar3 + iVar1 * 0x38 != 0) {
          iVar5 = 0x18;
          do {
            iVar3 = iVar3 + iVar1 * 0x38;
            if (*(int *)(iVar3 + 0x30) == 0) {
              if (*(int *)(iVar6 + 0x20) == 0) {
                return;
              }
              uVar2 = 1;
              uVar4 = 500;
              iVar6 = DAT_000c10c4 + 0xc109c;
              iVar1 = DAT_000c10c8 + 0xc10a4;
              goto LAB_000c100a;
            }
            QCamera2HardwareInterface::enable_msg_type(*(camera_device **)(iVar3 + 0x34),param_2);
            if (*(uint *)(param_1 + 0x54) <= iVar5 - 0x17U) goto LAB_000c1074;
            iVar1 = *(int *)(param_1 + iVar5 * 4);
            iVar5 = iVar5 + 1;
            iVar3 = *(int *)(*piVar7 + 0x2c);
          } while (iVar3 + iVar1 * 0x38 != 0);
        }
        if (*(int *)(iVar6 + 0x20) == 0) {
          return;
        }
        uVar2 = 1;
        uVar4 = 0x1f2;
        iVar6 = DAT_000c10d4 + 0xc106c;
        iVar1 = DAT_000c10d8 + 0xc1074;
      }
    }
    else {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return;
      }
      uVar2 = 1;
      uVar4 = 0x1ee;
      iVar6 = DAT_000c10cc + 0xc0fea;
      iVar1 = DAT_000c10d0 + 0xc0ff2;
    }
  }
LAB_000c100a:
  mm_camera_debug_log(1,uVar2,iVar1,uVar4,iVar6);
  return;
}

