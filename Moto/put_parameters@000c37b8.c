
/* qcamera::QCameraMuxer::put_parameters(camera_device*, char*) */

void qcamera::QCameraMuxer::put_parameters(camera_device *param_1,char *param_2)

{
  char *extraout_r1;
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(DAT_000c38ac + 0xc37c6);
  pcVar1 = param_2;
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c38b4 + 0xc37de,0x5fa,DAT_000c38b0 + 0xc37d6);
    pcVar1 = extraout_r1;
  }
  if (**(int **)(DAT_000c38b8 + 0xc37e6) == 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar4 = 0x5fb;
    iVar6 = DAT_000c38bc + 0xc3822;
    iVar3 = DAT_000c38c0 + 0xc382a;
  }
  else {
    if (param_1 != (camera_device *)0x0) {
      pcVar1 = *(char **)(param_1 + 0x44);
    }
    if (param_1 != (camera_device *)0x0 && pcVar1 != (char *)0x0) {
      if (*(uint *)(pcVar1 + 0x54) != 0) {
        uVar5 = 0;
        do {
          iVar3 = *(int *)(**(int **)(DAT_000c38b8 + 0xc37e6) + 0x2c) +
                  *(int *)(pcVar1 + uVar5 * 4 + 0x5c) * 0x38;
          if (iVar3 == 0) {
            if (*(int *)(iVar6 + 0x20) == 0) {
              return;
            }
            uVar2 = 1;
            uVar4 = 0x602;
            iVar6 = DAT_000c38cc + 0xc3862;
            iVar3 = DAT_000c38d0 + 0xc386a;
            goto LAB_000c38a0;
          }
          if (*(int *)(iVar3 + 0x30) == 0) {
            if (*(int *)(iVar6 + 0x20) == 0) {
              return;
            }
            uVar2 = 1;
            uVar4 = 0x605;
            iVar6 = DAT_000c38d4 + 0xc387a;
            iVar3 = DAT_000c38d8 + 0xc3882;
            goto LAB_000c38a0;
          }
          if (*(int *)(iVar3 + 0x10) == 0) {
            QCamera2HardwareInterface::put_parameters(*(camera_device **)(iVar3 + 0x34),param_2);
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(pcVar1 + 0x54));
      }
      if (*(int *)(iVar6 + 0x28) == 0) {
        return;
      }
      uVar2 = 3;
      uVar4 = 0x60d;
      iVar6 = DAT_000c38dc + 0xc389a;
      iVar3 = DAT_000c38e0 + 0xc38a2;
    }
    else {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return;
      }
      uVar2 = 1;
      uVar4 = 0x5fe;
      iVar6 = DAT_000c38c4 + 0xc3808;
      iVar3 = DAT_000c38c8 + 0xc3810;
    }
  }
LAB_000c38a0:
  mm_camera_debug_log(1,uVar2,iVar3,uVar4,iVar6);
  return;
}

