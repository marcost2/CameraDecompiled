
/* qcamera::QCameraMuxer::cancel_auto_focus(camera_device*) */

int __thiscall qcamera::QCameraMuxer::cancel_auto_focus(QCameraMuxer *this,camera_device *param_1)

{
  camera_device *extraout_r1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000c282c + 0xc2718);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c2834 + 0xc2730,0x450,DAT_000c2830 + 0xc2728);
    param_1 = extraout_r1;
  }
  if (**(int **)(DAT_000c2838 + 0xc2738) == 0) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return -0x13;
    }
    uVar2 = 0x451;
    iVar4 = DAT_000c283c + 0xc2772;
    iVar1 = DAT_000c2840 + 0xc277a;
  }
  else {
    if (this != (QCameraMuxer *)0x0) {
      param_1 = *(camera_device **)(this + 0x44);
    }
    if (this != (QCameraMuxer *)0x0 && param_1 != (camera_device *)0x0) {
      if (*(uint *)(param_1 + 0x54) != 0) {
        uVar3 = 0;
        do {
          iVar1 = *(int *)(**(int **)(DAT_000c2838 + 0xc2738) + 0x2c) +
                  *(int *)(param_1 + uVar3 * 4 + 0x5c) * 0x38;
          if (iVar1 == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
              return -0x13;
            }
            uVar2 = 0x459;
            iVar4 = DAT_000c284c + 0xc27be;
            iVar1 = DAT_000c2850 + 0xc27c6;
            goto LAB_000c2778;
          }
          if (*(int *)(iVar1 + 0x30) == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
              return -0x13;
            }
            uVar2 = 0x45c;
            iVar4 = DAT_000c2854 + 0xc27d6;
            iVar1 = DAT_000c2858 + 0xc27de;
            goto LAB_000c2778;
          }
          if (*(int *)(iVar1 + 0x10) == 0) {
            iVar1 = QCamera2HardwareInterface::cancel_auto_focus(*(camera_device **)(iVar1 + 0x34));
            if (iVar1 != 0) {
              if (*(int *)(iVar4 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000c2860 + 0xc2806,0x461,DAT_000c285c + 0xc27fe);
                return iVar1;
              }
              return iVar1;
            }
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x54));
      }
      if (*(int *)(iVar4 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000c2868 + 0xc2822,0x467,DAT_000c2864 + 0xc281a);
      }
      return 0;
    }
    if (*(int *)(iVar4 + 0x20) == 0) {
      return -0x13;
    }
    uVar2 = 0x455;
    iVar4 = DAT_000c2844 + 0xc275a;
    iVar1 = DAT_000c2848 + 0xc2762;
  }
LAB_000c2778:
  mm_camera_debug_log(1,1,iVar1,uVar2,iVar4);
  return -0x13;
}

