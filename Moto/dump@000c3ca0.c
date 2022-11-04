
/* qcamera::QCameraMuxer::dump(camera_device*, int) */

int qcamera::QCameraMuxer::dump(camera_device *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = *(int *)(DAT_000c3dec + 0xc3cb0);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c3df4 + 0xc3ccc,0x687,DAT_000c3df0 + 0xc3cc4);
  }
  piVar5 = *(int **)(DAT_000c3df8 + 0xc3cd4);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return -0x13;
    }
    uVar3 = 0x688;
    iVar6 = DAT_000c3dfc + 0xc3d10;
    iVar1 = DAT_000c3e00 + 0xc3d18;
  }
  else {
    if (param_1 != (camera_device *)0x0) {
      unaff_r4 = *(int *)(param_1 + 0x44);
    }
    if (param_1 != (camera_device *)0x0 && unaff_r4 != 0) {
      if (*(int *)(unaff_r4 + 0x54) == 0) {
LAB_000c3d8c:
        if (*(int *)(iVar6 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000c3e28 + 0xc3da6,0x69b,DAT_000c3e24 + 0xc3d9e);
        }
        return 0;
      }
      iVar2 = *(int *)(iVar1 + 0x2c);
      iVar1 = *(int *)(unaff_r4 + 0x5c);
      if (iVar2 + iVar1 * 0x38 != 0) {
        iVar4 = 0x18;
        do {
          iVar2 = iVar2 + iVar1 * 0x38;
          if (*(int *)(iVar2 + 0x30) == 0) {
            if (*(int *)(iVar6 + 0x20) == 0) {
              return -0x13;
            }
            uVar3 = 0x693;
            iVar6 = DAT_000c3e14 + 0xc3dc0;
            iVar1 = DAT_000c3e18 + 0xc3dc8;
            goto LAB_000c3d16;
          }
          iVar1 = QCamera2HardwareInterface::dump(*(camera_device **)(iVar2 + 0x34),param_2);
          if (iVar1 != 0) {
            if (*(int *)(iVar6 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000c3e20 + 0xc3de6,0x697,DAT_000c3e1c + 0xc3dde);
              return iVar1;
            }
            return iVar1;
          }
          if (*(uint *)(unaff_r4 + 0x54) <= iVar4 - 0x17U) goto LAB_000c3d8c;
          iVar1 = *(int *)(unaff_r4 + iVar4 * 4);
          iVar4 = iVar4 + 1;
          iVar2 = *(int *)(*piVar5 + 0x2c);
        } while (iVar2 + iVar1 * 0x38 != 0);
      }
      if (*(int *)(iVar6 + 0x20) == 0) {
        return -0x13;
      }
      uVar3 = 0x690;
      iVar6 = DAT_000c3e0c + 0xc3d84;
      iVar1 = DAT_000c3e10 + 0xc3d8c;
    }
    else {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return -0x13;
      }
      uVar3 = 0x68c;
      iVar6 = DAT_000c3e04 + 0xc3cf6;
      iVar1 = DAT_000c3e08 + 0xc3cfe;
    }
  }
LAB_000c3d16:
  mm_camera_debug_log(1,1,iVar1,uVar3,iVar6);
  return -0x13;
}

