
/* qcamera::QCameraMuxer::release_recording_frame(camera_device*, void const*) */

void qcamera::QCameraMuxer::release_recording_frame(camera_device *param_1,void *param_2)

{
  void *extraout_r1;
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(DAT_000c2574 + 0xc248e);
  pvVar1 = param_2;
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c257c + 0xc24a6,0x404,DAT_000c2578 + 0xc249e);
    pvVar1 = extraout_r1;
  }
  if (**(int **)(DAT_000c2580 + 0xc24ae) == 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar4 = 0x405;
    iVar6 = DAT_000c2584 + 0xc24ea;
    iVar3 = DAT_000c2588 + 0xc24f2;
  }
  else {
    if (param_1 != (camera_device *)0x0) {
      pvVar1 = *(void **)(param_1 + 0x44);
    }
    if (param_1 != (camera_device *)0x0 && pvVar1 != (void *)0x0) {
      if (*(uint *)((int)pvVar1 + 0x54) != 0) {
        uVar5 = 0;
        do {
          iVar3 = *(int *)(**(int **)(DAT_000c2580 + 0xc24ae) + 0x2c) +
                  *(int *)((int)pvVar1 + uVar5 * 4 + 0x5c) * 0x38;
          if (iVar3 == 0) {
            if (*(int *)(iVar6 + 0x20) == 0) {
              return;
            }
            uVar2 = 1;
            uVar4 = 0x40c;
            iVar6 = DAT_000c2594 + 0xc252a;
            iVar3 = DAT_000c2598 + 0xc2532;
            goto LAB_000c2568;
          }
          if (*(int *)(iVar3 + 0x30) == 0) {
            if (*(int *)(iVar6 + 0x20) == 0) {
              return;
            }
            uVar2 = 1;
            uVar4 = 0x40f;
            iVar6 = DAT_000c259c + 0xc2542;
            iVar3 = DAT_000c25a0 + 0xc254a;
            goto LAB_000c2568;
          }
          if (*(int *)(iVar3 + 0x10) == 0) {
            QCamera2HardwareInterface::release_recording_frame
                      (*(camera_device **)(iVar3 + 0x34),param_2);
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)((int)pvVar1 + 0x54));
      }
      if (*(int *)(iVar6 + 0x28) == 0) {
        return;
      }
      uVar2 = 3;
      uVar4 = 0x416;
      iVar6 = DAT_000c25a4 + 0xc2562;
      iVar3 = DAT_000c25a8 + 0xc256a;
    }
    else {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return;
      }
      uVar2 = 1;
      uVar4 = 0x408;
      iVar6 = DAT_000c258c + 0xc24d0;
      iVar3 = DAT_000c2590 + 0xc24d8;
    }
  }
LAB_000c2568:
  mm_camera_debug_log(1,uVar2,iVar3,uVar4,iVar6);
  return;
}

