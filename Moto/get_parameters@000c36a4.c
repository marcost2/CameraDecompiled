
/* qcamera::QCameraMuxer::get_parameters(camera_device*) */

undefined4 __thiscall
qcamera::QCameraMuxer::get_parameters(QCameraMuxer *this,camera_device *param_1)

{
  camera_device *extraout_r1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000c3788 + 0xc36b0);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c3790 + 0xc36c8,0x5ca,DAT_000c378c + 0xc36c0);
    param_1 = extraout_r1;
  }
  if (**(int **)(DAT_000c3794 + 0xc36d0) != 0) {
    if (this != (QCameraMuxer *)0x0) {
      param_1 = *(camera_device **)(this + 0x44);
    }
    if (this != (QCameraMuxer *)0x0 && param_1 != (camera_device *)0x0) {
      if (*(uint *)(param_1 + 0x54) != 0) {
        uVar3 = 0;
        do {
          iVar1 = *(int *)(**(int **)(DAT_000c3794 + 0xc36d0) + 0x2c) +
                  *(int *)(param_1 + uVar3 * 4 + 0x5c) * 0x38;
          if (iVar1 == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
              return 0;
            }
            uVar2 = 0x5da;
            iVar4 = DAT_000c37a0 + 0xc373e;
            iVar1 = DAT_000c37a4 + 0xc3746;
            goto LAB_000c36f6;
          }
          if (*(int *)(iVar1 + 0x30) == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
              return 0;
            }
            uVar2 = 0x5df;
            iVar4 = DAT_000c37a8 + 0xc3758;
            iVar1 = DAT_000c37ac + 0xc3760;
            goto LAB_000c36f6;
          }
          if (*(int *)(iVar1 + 0x10) == 0) {
            uVar2 = QCamera2HardwareInterface::get_parameters(*(camera_device **)(iVar1 + 0x34));
            goto LAB_000c3768;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x54));
      }
      uVar2 = 0;
LAB_000c3768:
      if (*(int *)(iVar4 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000c37b4 + 0xc3782,0x5e9,DAT_000c37b0 + 0xc377a);
        return uVar2;
      }
      return uVar2;
    }
    if (*(int *)(iVar4 + 0x20) != 0) {
      uVar2 = 0x5d3;
      iVar4 = DAT_000c3798 + 0xc36f0;
      iVar1 = DAT_000c379c + 0xc36f8;
LAB_000c36f6:
      mm_camera_debug_log(1,1,iVar1,uVar2,iVar4);
    }
  }
  return 0;
}

