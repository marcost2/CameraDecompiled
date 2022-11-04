
/* qcamera::QCameraMuxer::auto_focus(camera_device*) */

int __thiscall qcamera::QCameraMuxer::auto_focus(QCameraMuxer *this,camera_device *param_1)

{
  camera_device *extraout_r1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000c26cc + 0xc25b8);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c26d4 + 0xc25d0,0x427,DAT_000c26d0 + 0xc25c8);
    param_1 = extraout_r1;
  }
  if (**(int **)(DAT_000c26d8 + 0xc25d8) == 0) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return -0x13;
    }
    uVar2 = 0x428;
    iVar4 = DAT_000c26dc + 0xc2612;
    iVar1 = DAT_000c26e0 + 0xc261a;
  }
  else {
    if (this != (QCameraMuxer *)0x0) {
      param_1 = *(camera_device **)(this + 0x44);
    }
    if (this != (QCameraMuxer *)0x0 && param_1 != (camera_device *)0x0) {
      if (*(uint *)(param_1 + 0x54) != 0) {
        uVar3 = 0;
        do {
          iVar1 = *(int *)(**(int **)(DAT_000c26d8 + 0xc25d8) + 0x2c) +
                  *(int *)(param_1 + uVar3 * 4 + 0x5c) * 0x38;
          if (iVar1 == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
              return -0x13;
            }
            uVar2 = 0x430;
            iVar4 = DAT_000c26ec + 0xc265e;
            iVar1 = DAT_000c26f0 + 0xc2666;
            goto LAB_000c2618;
          }
          if (*(int *)(iVar1 + 0x30) == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
              return -0x13;
            }
            uVar2 = 0x433;
            iVar4 = DAT_000c26f4 + 0xc2676;
            iVar1 = DAT_000c26f8 + 0xc267e;
            goto LAB_000c2618;
          }
          if (*(int *)(iVar1 + 0x10) == 0) {
            iVar1 = QCamera2HardwareInterface::auto_focus(*(camera_device **)(iVar1 + 0x34));
            if (iVar1 != 0) {
              if (*(int *)(iVar4 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000c2700 + 0xc26a6,0x438,DAT_000c26fc + 0xc269e);
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
        mm_camera_debug_log(1,3,DAT_000c2708 + 0xc26c2,0x43e,DAT_000c2704 + 0xc26ba);
      }
      return 0;
    }
    if (*(int *)(iVar4 + 0x20) == 0) {
      return -0x13;
    }
    uVar2 = 0x42c;
    iVar4 = DAT_000c26e4 + 0xc25fa;
    iVar1 = DAT_000c26e8 + 0xc2602;
  }
LAB_000c2618:
  mm_camera_debug_log(1,1,iVar1,uVar2,iVar4);
  return -0x13;
}

